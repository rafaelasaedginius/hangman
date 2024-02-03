#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include "checker.h"
#include "language.h"
#include "score.h"

void hide_answer(char *copy, char *sentences);

void proceedgame(char **sentences){
    int salah = 0;
    curScore = 0;
    bool gameover = false;
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
    for(int i = 0; ; ){
        salah = 0;
        static char copy[101];
        if(sentences[i] == NULL){
            break;
        }
        strcpy(copy, sentences[i]);
        do{
            if(gameover){
                break;
            }
            printf("%s", gallows[salah]);
            hide_answer(copy, sentences[i]);
            printf("%s\n", copy);
        }
        while(!check_answer(copy, sentences[i], &salah, &gameover));
        if(gameover){
            // last format to output gallows
            printf("%s", gallows[salah]);
            hide_answer(copy, sentences[i]);
            printf("%s\n", copy);

            printf("GAME OVER\n");
            printf("SCORE: %d\n", curScore);
            
            printf("Enter to go back to main menu");
            char tmp[100];
            fgets(tmp, sizeof tmp, stdin);
            break;
        }
        printf("YOU'RE ANSWER IS CORRECT : %s\n", sentences[i]);
        i++;
    }

    if (!gameover) {
        printf("YOUR TOTAL SCORE: %d\n", curScore);
    }
    
    savescore(); // saves curScore to scores.txt
}

void hide_answer(char *copy, char *sentences){
    int len = strlen(sentences);
    for(int j = 0; j < len; j++){
        if(islower(copy[j])){
            copy[j] = '_';
        }
    }
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
    char difficulty[10];
    printf("CHOOSE DIFFICULTY\n");
    printf("*\n**\n***\n****\n*****\n");
    fgets(difficulty, sizeof difficulty, stdin);
    difficulty[strcspn(difficulty, "\n")] = '\0';
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