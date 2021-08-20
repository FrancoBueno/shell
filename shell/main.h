#ifndef main_h
#define main_H

#include <sys/stat.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>

int main(void);
char **str_to_arguments(char *buffer, char sep);

#endif
