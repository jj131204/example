#include <stdio.h>
#include <unistd.h>

/**
*
*main - Exercise 1 PID.
*
*print the maximun value.
*
*I'm not sure if that's the case.
*/
#define MAX_PID 32768

int main()
{
	int p_id;
	int p_pid;
	int p_ppid;
	int max;
	p_id=getpid();  /*process id*/
	p_pid=getpid(); /*parent process id*/
	p_ppid = getpid();

	max = MAX_PID;
	printf("pid max %d\n", max);
	printf("Process ID: %d\n",p_id);
	printf("Parent Process ID: %d\n",p_pid);
	printf("Parent2 Process ID: %d\n",p_ppid);

	return 0;
}
