/* Version 2 */
#define _CRT_SECURE_NO_WARNINGS

#include "tokenizing.h"

void tokenizing() {
	printf("*** Start of Tokenizing Phrases Demo ***\n");
	char phrases[200];
	char* phrase;
	int p_counter;
	printf("Type a few phrases separated by comma(q - to quit):\n");
	gets(phrases);
	while (strcmp(phrases, "q") != 0) {
		phrase = strtok(phrases, ",");
		p_counter = 1;
		while (phrase) {
			printf("Phrase #%d is \'%s\'\n", p_counter++, phrase);
			phrase = strtok(NULL, ",");
		}
		printf("Type a few phrases separated by comma(q - to quit):\n");
		gets(phrases);

	}
	printf("*** End of Tokenizing Phrases Demo ***\n\n");
}