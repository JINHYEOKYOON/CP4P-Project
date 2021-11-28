#include "converting.h"

void converting() {

/* Version 1 */

	printf("*** Start of Converting Strings to int Demo ***\n);
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
}
	
>> insert here


/* Version 2 */
>> insert here


/* Version 3 */
>> insert here


}
