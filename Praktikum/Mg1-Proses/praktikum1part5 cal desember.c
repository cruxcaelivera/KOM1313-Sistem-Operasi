#include <stdio.h>
#include <stdlib.h>

int main()
{
	puts("Running command");
	system("cal 12 2023");
	puts("Done");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
	puts("Running command");
	system("cal 12 2023 | rev");
	puts("Done");
	return 0;
}

