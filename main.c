#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(int argc, char *argv[])
{

int pid = fork();

if (pid < 0)
{

printf("Erreur de création du processus fils \n");
exit(1);
}
if (pid == 0)
{

printf("Je suis le processus fils (%d), le pid de mon père est : (%d)\n", getpid(), getppid());
}
else
{

printf("Je suis le processus père (%d), le pid de mon fils est: (%d)\n", getpid(), pid);
}
return 0;
}
