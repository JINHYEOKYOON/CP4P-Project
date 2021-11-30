#define _CRT_SECURE_NO_WARNINGS

#include "tokenizing.h"

void tokenizing() {
/* Version 1 */
	printf("*** Start of Tokenizing Sentences Demo ***\n");
	char words[200];
	char* word;
	int w_counter;
	printf("Type a few words separated by space(q - to quit):\n");
	gets(words);
	while (strcmp(words, "q") != 0) {
		word = strtok(words, " ");
		w_counter = 1;
		while (word) {
			printf("Word #%d is \'%s\'\n", w_counter++, word);
			word = strtok(NULL, " ");
		}
		printf("Type a few words separated by space(q - to quit):\n");
		gets(words);
	}
	printf("*** End of Tokenizing Words Demo ***\n\n");
/* Version 2 */
	printf("*** Start of Tokenizing Phrases Demo ***\n");
	char phrases[200];
	char* phrase;
	int p_counter;
	printf("Type a few phrases separated by comma(q - to quit):\n");
	gets(phrases);
	while (strcmp(phrases, "q") != 0) {
		phrase = strtok(phrases, ",");
		p_counter = 1;
		while (phrase){
			printf("Phrase #%d is \'%s\'\n", p_counter++, phrase);
			phrase = strtok(NULL, ",");
			}
		printf("Type a few phrases separated by comma(q - to quit):\n");
		gets(phrases);

	}
	printf("*** End of Tokenizing Phrases Demo ***\n\n");
/* Version 3 */


}