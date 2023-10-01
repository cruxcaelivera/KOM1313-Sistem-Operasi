#include <stdio.h>
#include <stdlib.h>

int main()
{
	puts("Running command");
	system("ps -A");
	puts("Done");
	return 0;
}
