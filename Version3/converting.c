/* Version 3 */
#include "converting.h"

void converting() {
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