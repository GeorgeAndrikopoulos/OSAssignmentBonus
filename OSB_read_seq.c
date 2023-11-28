#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main() {
	/*
	// Open a file in read mode
	FILE *fptr;
	fptr = fopen("test_text_2000b.txt", "r");
	if(fptr == NULL) {
		  printf("Not able to open the file.");
	}
	//Store the content of the file
	char myString[2000];

	// Read the content and store it inside myString
	fgets(myString, 2000, fptr);

	// Print the file content
	printf("%s\n", myString);

	// Close the file
	fclose(fptr);
	*/

	int fd;
	char buff[1024];
	char path[] = "/home/georgeand/git/OSAssignmentBonus/test_text_2000b.txt";

	fd = open(path, O_RDONLY);
	read(fd, buff, 1000);

	printf("\n\n%s\n\n",buff);



	return 0;
}
