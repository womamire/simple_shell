#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <dirent.h>
#include <signal.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/types.h>
#define PROMPT "main $ "

int str_len(char *str);
void free_double(char **freed);
void free_single(int n, ...);
void print_error(char *pr, int count, char *command);
void error_execute(char *pr, int count, char *fail_comm);
int number_to_be_printed(int n);
char *find_path_(char *command);
int find_path(char *str);
char **tokenize_path(int i, char *str);
char *search_directories(char **path_tokens, char *command);
char *build_path(char *dir, char *command);
int token_count(char *l, const char *d);
char **token_ize(int token_count, char *l, const char *d);
char **token_int(char *l, const char *d, int token_c);
void create_c(char **p_array, char *l, int count, char **pr);
void c_line(char *l, size_t size, int comm_count, char **pr);
int _strcmp(char *s1, char *s2);
char *_strdup(char *src);
void print_str(char *str, int n_line);
int _putchar(char c);
int built_in(char **command, char *l);
void cd_d(char *l);
void envir_v(__attribute__((unused))char *l);
void exit_p(char *l);
void (*check_function(char *str))(char *str);


extern char **environ;

/**
 * struct builtin_d - Defines the builtins functions.
 * @built: The name of the build in command.
 * @f: A pointer to the right builtin
 */
typedef struct builtin_d
{
	char *built;
	void (*f)(char *);
} builtin_t;


#endif
