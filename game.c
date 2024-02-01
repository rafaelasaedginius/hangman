#include <stdio.h>
#include <string.h>
#include "language.h"

void proceedgame(char **sentences){
    char gallows[7][70] ={
        "    +-----\n"
        "         |\n"
        "         |\n"
        "         |\n"
        "         |\n",
        "    +-----\n"
        "    O    |\n"
        "         |\n"
        "         |\n"
        "         |\n",
        "    +-----\n"
        "    O    |\n"
        "    |    |\n"
        "         |\n"
        "         |\n",
        "    +-----\n"
        "    O    |\n"
        "   /|    |\n"
        "         |\n"
        "         |\n",
        "    +-----\n"
        "    O    |\n"
        "   /|\\   |\n"
        "         |\n"
        "         |\n",
        "    +-----\n"
        "    O    |\n"
        "   /|\\   |\n"
        "   /     |\n"
        "         |\n",
        "    +-----\n"
        "    O    |\n"
        "   /|\\   |\n"
        "   / \\   |\n"
        "         |\n"
    };
    for(int i = 0; i < 7; i++){
        printf("%s", gallows[i]);
    }
    /*for(int i = 0; ; i++){
        if(sentences[i] == NULL){
            break;
        }
        printf("%s", sentences[i]);
    }*/
}

void very_easy(char *lang){
    char **sentences;
    if(strcmp(lang, "ENGLISH") == 0){
        sentences = wordbank_very_easy();
    }else {
        sentences = bankkata_sangat_mudah();
    }
    proceedgame(sentences);
}
void easy(char *lang){
    char **sentences;
    if(strcmp(lang, "ENGLISH") == 0){
        sentences = wordbank_easy();
    }else {
        sentences = bankkata_mudah();
    }
    proceedgame(sentences);
}
void medium(char *lang){
    char **sentences;
    if(strcmp(lang, "ENGLISH") == 0){
        sentences = wordbank_medium();
    }else {
        sentences = bankkata_sedang();
    }
    proceedgame(sentences);
}
void hard(char *lang){
    char **sentences;
    if(strcmp(lang, "ENGLISH") == 0){
        sentences = wordbank_hard();
    }else {
        sentences = bankkata_susah();
    }
    proceedgame(sentences);
}
void very_hard(char *lang){
    char **sentences;
    if(strcmp(lang, "ENGLISH") == 0){
        sentences = wordbank_very_hard();
    }else {
        sentences = bankkata_sangat_susah();
    }
    proceedgame(sentences);
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