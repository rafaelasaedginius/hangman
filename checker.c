#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#include "score.h"

bool check_answer(char *copy, char *sentences, int *salah, bool *gameover){
    char answer[101];
    puts("YOUR ANSWER");
    //fgets(answer, sizeof answer, stdin);
    fgets(answer, sizeof answer, stdin);
    answer[strcspn(answer, "\n")] = '\0';
    int len = strlen(copy);
    int flag = 0;
    for(int i = 0; i < len; i++){
        if(sentences[i] == answer[0]){
            copy[i] = toupper(sentences[i]);
            flag = 1;
            
            addscore();
        }
    }
    if(!flag){
        (*salah)++;
    }
    if(*salah == 6){ // salah itu mulai dari 0, sedangkan ada 7 jenis hangman. Berarti terakhir 6.
        *gameover = true;
        return false;
    }
    for(int i = 0; i < len; i++){
        if(copy[i] == '_' || islower(copy[i])){
            return false;
        }
    }
    
    
    return true;
}
