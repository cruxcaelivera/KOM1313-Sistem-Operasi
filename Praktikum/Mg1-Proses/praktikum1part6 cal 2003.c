#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() 
{
	puts("Running command");
	system("ps --forest");
	execlp("cal", "cal", "2003", NULL);
	puts("Done");
	return 0;
}
