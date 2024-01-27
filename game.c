#include <stdio.h>
#include <string.h>
#include "language.h"

void very_easy(char *lang){
    if(strcmp(lang, "ENGLISH") == 0){
        wordbank_very_easy();
    }else {
        bankkata_sangat_mudah();
    }
    proceedgame();
}
void easy(char *lang){
    if(strcmp(lang, "ENGLISH") == 0){
        wordbank_easy();
    }else {
        bankkata_mudah();
    }
    proceedgame();
}
void medium(char *lang){
    if(strcmp(lang, "ENGLISH") == 0){
        wordbank_medium();
    }else {
        bankkata_sedang();
    }
    proceedgame();
}
void hard(char *lang){
    if(strcmp(lang, "ENGLISH") == 0){
        wordbank_hard();
    }else {
        bankkata_susah();
    }
    proceedgame();
}
void very_hard(char *lang){
    if(strcmp(lang, "ENGLISH") == 0){
        wordbank_very_hard();
    }else {
        bankkata_sangat_susah();
    }
    proceedgame();
}

void start(void){
    char difficulty[6];
    printf("CHOOSE DIFFICULTY\n");
    printf("*\n**\n***\n****\n*****\n");
    scanf("%s", difficulty);
    if(strlen(difficulty) == 5){
        printf("VERY HARD!!\n");
        very_hard(chooselang());
    }else if(strlen(difficulty) == 4){
        printf("HARD!!\n");
        hard(chooselang());
    }else if(strlen(difficulty) == 3){
        printf("MEDIUM!!\n");
        medium(chooselang());
    }else if(strlen(difficulty) == 2){
        printf("EASY!!\n");
        easy(chooselang());
    }else if(strlen(difficulty) == 1){
        printf("VERY EASY!!\n");
        very_easy(chooselang());
    }else if(strlen(difficulty) > 5){
        printf("THERE IS NO SUCH LEVEL!!!\n");
    }
}