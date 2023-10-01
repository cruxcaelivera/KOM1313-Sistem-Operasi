#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() 
{
	execlp("ps", "ps", "--forest", NULL);
	
	char *args[]= {"echo", "www", NULL};
	execvp(args[0], args);
	puts("Done");
	return 0;
}
