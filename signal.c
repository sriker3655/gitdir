#include<stdio.h>
#include<signal.h>
#include<stdlib.h>

static void ctrl_signal_handler(int sig)
{
printf("CTRL+C is pressed\n");
printf("bye bye\n");
exit(0);
}

static void abrt_signal_handler(int sig)
{
printf("process is aborted\n");
printf("bye bye\n");
exit(0);
}


int main()
{
signal(SIGINT,ctrl_signal_handler);
signal(SIGABRT,abrt_signal_handler);
char ch;
printf("abort the the process y/n  \n");
scanf("%c",&ch);
if(ch=='y')
{
abort();
}
return 0;
}

