#include <stdio.h>
#include <unistd.h>
 
/**
*
*main - Exercise 0 PID.
*/
int main()
{
	int p_id;
	int p_pid;
	int p_ppid;

	p_id=getpid();  /*process id*/
	p_pid=getpid(); /*parent process id*/
	p_ppid = getpid();

	printf("Process ID: %d\n",p_id);
	printf("Parent Process ID: %d\n",p_pid);
	printf("Parent2 Process ID: %d\n",p_ppid);

	return 0;
}
