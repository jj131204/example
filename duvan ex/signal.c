#include <signal.h>
#include <stdio.h>

int main(void)
{
    /* using the default signal handler */
    raise(SIGTERM);
    printf("Exit main()\n");   /* never reached */
}

int main(void)
{
    /* ignoring the signal */
	signal(SIGTERM, SIG_IGN);
    raise(SIGTERM);
    printf("Exit main()\n");
}

/* signal , se utilzan para interrumpir procesos
SIGINT, handle de sigint (que es un diferenciador de proceso)
SIGINT (interrumpir presionando ctrl-c ), SIG_IGN(ignore), interrumpir el proceso pero no mostrar el proceso  */
