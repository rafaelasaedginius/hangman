#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

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
        }
    }
    if(!flag){
        (*salah)++;
    }
    if(*salah == 7){
        *gameover = true;
    }
    for(int i = 0; i < len; i++){
        if(copy[i] == '_' || islower(copy[i])){
            return false;
        }
    }
    
    
    return true;
}
