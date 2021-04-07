#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(void)
{
    pid_t my_pid;

    my_pid = getpid();
    printf("Current ID %u\n, Parent ID : %u\n", my_pid, getppid());
    return (0);
}
