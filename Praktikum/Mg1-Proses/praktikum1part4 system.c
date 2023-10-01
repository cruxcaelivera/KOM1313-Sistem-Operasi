#include <stdio.h>
#include <stdlib.h>

int main()
{
	puts("Running command");
	system("hostname | rev");
	puts("Done");
	return 0;
}
