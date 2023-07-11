#include "main.h"

/**
* execute - function that execute the commands.
* @argv: array containing the command and the options
* @env: array containing all the environment vars.
* Return: Nothing.
*/

int execute(char **argv, char *full_cmd)
{
	int status;
	pid_t child_pid;

	child_pid = fork();
	if (child_pid == -1)
		return (-1);
	if (child_pid == 0) {
		if (execve(full_cmd, argv, environ) == -1) {
			_write_err(argv[0], " not found\n");
			return (-100);
		}
		else
			return (1);

	}
	else
		wait(&status);

	return (1);
}