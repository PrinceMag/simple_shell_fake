#include "main.h"

#define FAILURE -1
#define SUCCESS 1
int builtin(char **args, char *input)
{
	int i = 0;
	builtin_t builtin[] = {
		{"exit", _exit_},
		{"env", _env_},
		{NULL, NULL},
	};

	while (builtin[i].cmd) {
		if (strcmp(builtin[i].cmd, args[0]) == 0) {
			if (strcmp(builtin[i].cmd, "exit") == 0) {
				_free(2, args, input);
			}
			builtin[i].func();
	  		return (SUCCESS);
		}
		i++;
	}
	return (FAILURE);
}
