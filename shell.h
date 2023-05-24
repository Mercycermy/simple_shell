#ifndef _SHEll_H_
#define _SHELL_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <limits.h>
#include <time.h>

extern char **environ;

void _env(void);

int printp(const char *prompt, unsigned int size);
int _putchar(char c);
int exit_shell(char *pathname);
void _grid(char **grid, int heigth);
void _free(char *entry);
int verify_blt(char **arguments, int exit_stat);
int _strcmp(char *str1, char *str2);
int verify_path(char **arguments);
char *_strdup(char *str);
char *_command(char *dir_path, char *command);
int execute_proc(char **arguments);
int fill_args(char *entry, char **arguments);
int printnumbers(int n);
int _strlen(const char *string);
int print_not_found(char **arguments, int counter);
char *_getenv(char *global_var);

#endif
