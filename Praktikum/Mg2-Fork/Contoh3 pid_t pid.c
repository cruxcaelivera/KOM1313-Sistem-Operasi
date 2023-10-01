//Fork.c

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
	pid_t pid;
	
	pid = fork();
	if (pid == 0)
	{
		puts("Child");
	}
	else
	{
		puts("Parent");
	}
	return 0;
}
