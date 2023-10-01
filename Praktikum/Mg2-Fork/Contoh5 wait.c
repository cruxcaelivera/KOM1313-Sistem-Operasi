//Fork.c

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
	pid_t pid;
	char *msg;
	int n;
	
	pid = fork();
	if (pid == 0)
	{
		msg = "Child";
		n = 8;
	}
	else
	{
		msg = "Parent";
		n = 4;
	}
	while (n--) 
	{
		puts(msg);
		sleep(1);
	}
	if (pid > 0)
	{
		wait(NULL);
	}
	return 0;
}
