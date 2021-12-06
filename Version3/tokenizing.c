#define _CRT_SECURE_NO_WARNINGS

#include "tokenizing.h"
////Version3
void tokenizing() {
	printf("*** Start of Tokenizing Phrases Demo ***\n");
	char sentences[200];
	char* sentence;
	int s_counter;
	printf("Type a few sentences separated by dot(q - to quit):\n");
	gets(sentences);
	while (strcmp(sentences, "q") != 0) {
		sentence = strtok(sentences, ".");
		s_counter = 1;
		while (sentence) {
			printf("sentences #%d is \'%s\'\n", s_counter++, sentence);
			sentence = strtok(NULL, ".");
		}
		printf("Type a few sentences separated by dot(q - to quit):\n");
		gets(sentences);
	}
	printf("*** End of Tokenizing Phrases Demo ***\n\n");
}