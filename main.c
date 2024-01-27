#include <stdio.h>
#include <string.h>
#include "hangman.h"

int main(){

    char choice[16];
    printf("   HANGMAN!!   \n");
    printf("     START   \n");
    printf("     SCORE   \n");
    printf("  LEVEL EDITOR   \n");
    printf("     EXIT   \n");
    scanf("%s", choice);
    while(strcmp(choice, "EXIT") != 0){   
        if(strcmp(choice, "START") == 0){
            start();
        }else if(strcmp(choice, "SCORE") == 0){
            score();
        }else if(strcmp(choice, "LEVEL EDITOR") == 0){
            level_editor();
        }
    }
}