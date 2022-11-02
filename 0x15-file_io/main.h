#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

ssize_t read_textfile(const char *, size_t);
int create_file(const char *, char *);
int _strlen(char *);
int append_text_to_file(const char *, char *);
void errorStatus(char *, int);
void fdHandler(int);
char *createBuffer(char *);

#endif
