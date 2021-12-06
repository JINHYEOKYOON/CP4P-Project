/* Version 2 */
#include "converting.h"
void converting() {
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
}