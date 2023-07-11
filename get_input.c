#include "main.h"

char* get_input() {
	char *input = NULL;
	size_t n = 0;

	if (getline(&input, &n, stdin) == -1) {
		free(input);
		exit(EXIT_FAILURE);
	}
	if (input[0] == '\n') {
		free(input);
		return NULL;
	}
	input[_strlen_input(input)] = '\0';
	return (input);
}
