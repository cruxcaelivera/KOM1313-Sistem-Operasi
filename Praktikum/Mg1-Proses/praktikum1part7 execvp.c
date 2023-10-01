#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
	puts("Running command");
	char *args[] = {"ps", "--forest", NULL};
	execvp(args[0], args);
	puts("Done");
	return 0;
}
