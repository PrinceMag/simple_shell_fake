#include "main.h"

/*
 *_strlen_input - function that count the len of input given by 
 * the user.
 * @str: pointer to string containing the input
 * Return: length of input.
 * */

int _strlen_input(char *str) {
	int len = 0;
	while (*str != 10) {
		len++;
		str++;
	}
	return len;
}

/*
 *_strlen - implementation of the strlen
 * @str: pointer to string
 * Return: length of string.
 * */

int _strlen(char *str) {
	int len = 0;
	while (*str != 0) {
		len++;
		str++;
	}
	return len;
}

/**
* _write_err - replace printf
* @str: pointer to str
* Return: nothing
*/

void _write_err(char *cmd, char *err)
{
	write(STDERR_FILENO, "ALX : ", 6);
	write(STDERR_FILENO, cmd, _strlen(cmd));
	write(STDERR_FILENO, err, _strlen(err));
}

/**
* _strcat - replace strcat from <string.h>
* @dest: destination string
* @src: source string
* Return: pointer to string
*/

char *_strcat(char *s1, char *s2)
{
	char *cmd;
	int j = _strlen(s1);
	int i = _strlen(s2);

	cmd = malloc((i + j + 2) * sizeof(char));
	if (!cmd)
		return (NULL);

	i = 0;
	while (s2[i] != 0)
	{
		cmd[i] = s2[i];
		i++;
	}
	cmd[i++] = '/';
	j = 0;
	while (s1[j] != 0)
	{
		cmd[i] = s1[j];
		i++, j++;
	}
	cmd[i] = 0;
	return (cmd);
}
int get_tokens_count(char *input, char *delimiter) {
	int count = 1;
	char *tmp_str;

	tmp_str = input;
	while (*tmp_str != 0)
	{
		if (delimiter[0] == *(tmp_str++) || delimiter[1] == *(tmp_str++))
			count++;
	}
	return count++;
}