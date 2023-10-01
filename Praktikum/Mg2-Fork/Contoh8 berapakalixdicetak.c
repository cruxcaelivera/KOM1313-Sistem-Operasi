//Fork.c

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
	pid_t pid = fork();
	if (pid != 0)
	{
		fork();
	}
	fork();
	puts("X");
	return 0;
}
