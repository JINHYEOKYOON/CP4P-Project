#define _CRT_SECURE_NO_WARNINGS
#include "fundamentals.h"

void fundamentals() {
/* Version 1 */
	printf("*** Start of Indexing String Demo ***");
	char bufferl[80];
	char num_input[10];
	unsigned int position;
	printf("Type not empty string (q - to quit):\n");
	printf("0123456789012345678901234567890123456789012345678901234567890123456789");
	gets(bufferl);
	while (strcmp(bufferl, "q") != 0) {
		printf("Type the character position within the string:\n");
		gets(num_input);
		position = atoi(num_input);
		if (position >= strlen(bufferl)) {
			position = strlen(bufferl) - 1;
			printf("Too big... Position reduced to max. availbale\n");
		}
		printf("The character found at %d position is \n'%c'\n", position, bufferl[position]);
		printf("Type not empty string (q - to quit):\n");
		printf("0123456789012345678901234567890123456789012345678901234567890123456789\n");
		gets(bufferl);
	}
	printf("*** End of Indexing Strings Demo ***\n\n");



/* Version 2 */
	printf("*** Start of Measuring String Demo ***\n");
	char buffer2[80];
	printf("Type a string (q - to quit):\n");
	gets(buffer2);
	while (strcmp(buffer2, "q") != 0) {
		printf("The length is %1lu\n", strlen(buffer2));
		printf("Type a string (q - to quit):\n");
		gets(buffer2);
	}
	printf("*** End of Measuring String Demo ***\n\n");

/* Version 3 */

	printf("*** Start of Copying Strings demo ***\n");
	char destination[80];
	char source[80];
	destination[0] = '\0';
	printf("Destination string is reset to empty\n");
	printf("Type a source string (q - to quit):\n");
	gets(source);
	while (strcmp(source, "q") != 0) {
		strcpy(destination, source);
		printf("New destination string is \'%s\':\n", destination);
		destination[0] = '\0';
		printf("Destination string is reset to empty\n");
		printf("Type a source string (q - to quit):\n");
		gets(source);
	}
	printf("*** End of Copying Strings Demo ***\n\n");



							
}