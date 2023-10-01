#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
	puts("Running command");
	char *args[] = {"cal", "06", "2003", NULL};
	execvp(args[0], args);
	puts("Done");
	return 0;
}
