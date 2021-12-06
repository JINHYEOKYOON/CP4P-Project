/* Version 3 */
#define _CRT_SECURE_NO_WARNINGS
#include "manipulating.h"

void manipulating() {
	printf("*** Start of Searching Strings Demo ***\n");
	char big_string[80];
	char sub_string[80];
	char* address;
	printf("Type the big string (q- to quit):\n");
	gets(big_string);
	while (strcmp(big_string, "q") != 0) {
		printf("Type the substring:\n");
		gets(sub_string);
		address = strstr(big_string, sub_string);
		if (address != NULL)
			printf("Found at %ld position\n", (long)address - (long)big_string);
		else
			printf("Not found\n");
		printf("Type the big string (q - to quit):\n");
		gets(big_string);
	}
	printf("*** End of Searching String Demo ***\n\n");
}