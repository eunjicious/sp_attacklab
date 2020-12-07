#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
	if(argc < 2){
		printf("Please type the number of sectors\n");
		printf("e.g.: ./2_disk 8\n");
		return -1;
	}


	// disk settings 
	int rpm = 5400;
	int seek_time = 6; // seek time (ms)
	int sect_per_track = 600; // average number of sectors per track 

	int sectors = atoi(argv[1]);
	printf("Read %d sectors\n", sectors);


	/* do program here */


	return 0;	
}
