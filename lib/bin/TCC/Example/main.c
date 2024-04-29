#include <stdio.h>
#include <time.h> 

void main(int argc, char *argv[], char *envp[])
{
    printf("Hello World!\n");
	
	time_t rawtime;
	struct tm * timeinfo;
	char buffer [80];

	time (&rawtime);
	timeinfo = localtime (&rawtime);

	strftime (buffer,80,"%z.\n",timeinfo);
	printf(buffer);
	
	return 0;
}