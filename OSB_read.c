#include <stdio.h>
#include <unistd.h>

int main() {
	FILE *fptr;

	// Open a file in read mode
	fptr = fopen("test_text_2000b.txt", "r");

	if(fptr == NULL) {
	  printf("Not able to open the file.");
	}

	// Store the content of the file
	char myString[2000];

	// Read the content and store it inside myString
	fgets(myString, 1000, fptr);

	// Print the file content
	printf("%s", myString);

	// Close the file
	fclose(fptr);

	return 0;
}
