#include "main.h"

void getNextCommand(char command[COMMANDSIZE], size_t commandSize){
    printf("> ");
    fflush(stdout);
    if(fgets(command, commandSize, stdin) == NULL){
        fprintf(stderr, "Reading Error.\n");
        exit(1);
    }
    int len = strlen(command);
    if(command[len-1] == '\n' ){
        command[len-1] = 0;
    }
}

void sayHello(){
    printf("Hello!\n");
}

void sayBye(){
    printf("Bye!\n");
}

void quit(){
    exit(0);
}

int main(){
    char command[COMMANDSIZE];
    size_t commandSize = COMMANDSIZE;
    while(1){
        int isCommand = 0;
        getNextCommand(command, commandSize);
        for(int i = 0; i < sizeof(COMMANDS) / sizeof(struct Command); i++){
            if(strcmp(command, COMMANDS[i].name) == 0){
                COMMANDS[i].func();
                isCommand = 1;
                break;
            }
        }
        if(!isCommand){
            printf("There is no command with this name\n");
        }
    }
    return 0;
}