#ifndef __MAIN__
#define __MAIN__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define COMMANDSIZE 32

struct Command{
    char* name;
    void (*func)();
};

void getNextCommand(char command[COMMANDSIZE], size_t commandSize);

void sayHello();

void sayBye();

void quit();

const struct Command COMMANDS[] = {{"sayhello", sayHello}, {"saybye", sayBye}, {"quit", quit}};

#endif