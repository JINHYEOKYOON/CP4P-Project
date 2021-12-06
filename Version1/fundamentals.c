#define _CRT_SECURE_NO_WARNINGS
#include "fundamentals.h"

void fundamentals() {
	/* Version 1 */
	printf("*** Start of Indexing String Demo ***\n");
	char bufferl[80];
	char num_input[10];
	unsigned int position;
	printf("Type not empty string (q - to quit):\n");
	printf("0123456789012345678901234567890123456789012345678901234567890123456789\n");
	gets(bufferl);
	while (strcmp(bufferl, "q") != 0) {
		printf("Type the character position within the string:\n");
		gets(num_input);
		position = atoi(num_input);
		if (position >= strlen(bufferl)) {
			position = strlen(bufferl) - 1;
			printf("Too big... Position reduced to max. availbale\n");
		}
		printf("The character found at %d position is \'%c'\n", position, bufferl[position]);
		printf("Type not empty string (q - to quit):\n");
		printf("0123456789012345678901234567890123456789012345678901234567890123456789\n");
		gets(bufferl);
	}
	printf("*** End of Indexing Strings Demo ***\n\n");
}
