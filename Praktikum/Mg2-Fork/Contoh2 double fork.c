//Fork.c

#include <stdio.h>
#include <unistd.h>

int main()
{
	fork();
	fork();
	puts("X");
	return 0;
}
