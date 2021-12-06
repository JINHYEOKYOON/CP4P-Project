#define _CRT_SECURE_NO_WARNINGS
#include "fundamentals.h"
/* Version 3 */
void fundamentals() {
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