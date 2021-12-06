#define _CRT_SECURE_NO_WARNINGS
#include "manipulating.h"

void manipulating() {
	/* Version 2 */
	printf("*** Start of Comparing Strings Demo ***\n");
	char compare1[80];
	char compare2[80];
	int result;
	printf("Type the 1st string to compare (q - to quit):\n");
	gets(compare1);
	while (strcmp(compare1, "q") != 0) {
		printf("Type the 2nd string to compare:\n");
		gets(compare2);
		result = strcmp(compare1, compare2);
		if (result < 0)
			printf("1st string is less than 2nd\n");
		else if (result == 0)
			printf("1st string is equal to 2nd\n");
		else
			printf("1st string is greater thand 2nd\n");
		printf("Type the 1st string to compare (q - to quit)\n");
		gets(compare1);

	}

	printf("*** End of Comparing Strings Demo ***\n\n");
}