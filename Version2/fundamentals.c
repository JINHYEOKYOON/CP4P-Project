#define _CRT_SECURE_NO_WARNINGS
#include "fundamentals.h"
/* Version 2 */
void fundamentals() {
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
}