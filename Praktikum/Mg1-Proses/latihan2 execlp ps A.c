#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() 
{
	puts("Running command");
	execlp("ps", "ps", "-A", NULL);
	puts("Done");
	return 0;
}
