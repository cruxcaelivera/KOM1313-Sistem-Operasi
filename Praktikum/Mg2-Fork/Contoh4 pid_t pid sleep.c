//Fork.c
//Hasilnya bisa berbeda untuk setiap run
//Untuk mendapatkan zombie, pada terminal ketik "ls", lalu "cd (Tempat penyimpanan file tersebut)", run salah satu file c, lalu ketik "ps f" di terminal.

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
	pid_t pid;
	char *msg;
	int n;
	
	pid = fork();
	if (pid == 0)
	{
		msg = "Child";
		n = 4;
	}
	else
	{
		msg = "Parent";
		n = 8;
	}
	while (n--) 
	{
		puts(msg);
		sleep(1);
	}
	return 0;
}
