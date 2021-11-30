


/* Version 1 */
#include "converting.h"

void converting() {
	printf("*** Start of Converting Strings to int Demo ***\n");
	char int_string[80];
	int int_number;
	printf("Type the int numeric string (q - to quit):\n");
	gets(int_string);
	while (strcmp(int_string, "q") !=0) {
		int_number = atoi(int_string);
		printf("Converted number is %d", int_number);
		printf("Type the int numeric string (q - to quit):\n");
		gets(int_string);
	}printf("*** End of Converting Strings to int Demo ***\n\n");

	


/* Version 2 */

	printf("*** Start of Converting Strings to double Demo ***\n");
	char double_string[80];
	double double_number;
	printf("Type the double numeric string (q - to quit):\n");
	gets(double_string);
	while (strcmp(double_string, "q") != 0) {
		double_number = atof(double_string);
		printf("Converted number is %f\n", double_number);
		printf("Type the double numeric string (q - to quit):\n");
		gets(double_string);
	}
	printf("*** End of Converting Strings to double Demo ***\n\n");


/* Version 3 */
	printf("*** Start of Converting Strings to long Demo ***\n");
	char long_string[80];
	long long_number;
	printf("Type the long numeric string (q - to quit):\n");
	gets(long_string);
	while (strcmp(long_string, "q") != 0) {
		long_number = atol(long_string);
		printf("Converted number is %ld\n", long_number);
		printf("Type the long numeric string (q - to quit):\n");
		gets(long_string);
	}
	printf("*** End of Converting strings to long Demo*** \n\n");

}
