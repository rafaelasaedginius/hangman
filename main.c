#include <stdio.h>
#include <string.h>
#include "hangman.h"

int main(){

    char choice[100];
    do {
        printf("   HANGMAN!!   \n");
        printf("    1.START   \n");
        printf("    2.SCORE   \n");
        printf(" 3.LEVEL EDITOR   \n");
        printf("    4.EXIT   \n");
        fgets(choice, sizeof choice, stdin);
        choice[strcspn(choice, "\n")] = '\0';

        if(strcasecmp(choice, "START") == 0 || strcmp(choice, "1") == 0){
            start();
        }else if(strcasecmp(choice, "SCORE") == 0 || strcmp(choice, "2") == 0){
            score();
        }else if(strcasecmp(choice, "LEVEL EDITOR") == 0 || strcmp(choice, "3") == 0){
            level_editor();
        }

    } while(strcasecmp(choice, "EXIT") != 0 && strcmp(choice, "4") != 0);
        
}