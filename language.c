#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *chooselang(void){
    char *lang = malloc(101);
    puts("CHOOSE LANGUAGE:");
    puts("ENGLISH");
    puts("INDONESIAN");
    fgets(lang, 101, stdin);
    lang[strcspn(lang, "\n")] = '\0';
    return lang;
}
char **wordbank_very_easy(void){
    FILE *fp = fopen("VE.txt", "r");
    if(fp == NULL){
        printf("Word Bank is Missing\n");
    }
    int i = 0;
    char s[101];
    char **sentences = malloc(sizeof(char *) * 100);
    while(fgets(s, sizeof(s), fp) != NULL){
        sentences[i++] = strdup(s);
    }
    sentences[i] = NULL;
    return sentences;
}
char **wordbank_easy(void){
    FILE *fp = fopen("E.txt", "r");
    if(fp == NULL){
        printf("Word Bank is Missing\n");
    }
    int i = 0;
    char s[101];
    char **sentences = malloc(sizeof(char *) * 100);
    while(fgets(s, sizeof(s), fp) != NULL){
        sentences[i++] = strdup(s);
    }
    sentences[i] = NULL;
    return sentences;
}
char **wordbank_medium(void){
    FILE *fp = fopen("M.txt", "r");
    if(fp == NULL){
        printf("Word Bank is Missing\n");
    }
    int i = 0;
    char s[101];
    char **sentences = malloc(sizeof(char *) * 100);
    while(fgets(s, sizeof(s), fp) != NULL){
        sentences[i++] = strdup(s);
    }
    sentences[i] = NULL;
    return sentences;
}
char **wordbank_hard(void){
    FILE *fp = fopen("H.txt", "r");
    if(fp == NULL){
        printf("Word Bank is Missing\n");
    }
    int i = 0;
    char s[101];
    char **sentences = malloc(sizeof(char *) * 100);
    while(fgets(s, sizeof(s), fp) != NULL){
        sentences[i++] = strdup(s);
    }
    sentences[i] = NULL;
    return sentences;
}
char **wordbank_very_hard(void){
    FILE *fp = fopen("VH.txt", "r");
    if(fp == NULL){
        printf("Word Bank is Missing\n");
    }
    int i = 0;
    char s[101];
    char **sentences = malloc(sizeof(char *) * 100);
    while(fgets(s, sizeof(s), fp) != NULL){
        sentences[i++] = strdup(s);
    }
    sentences[i] = NULL;
    return sentences;
}
char **bankkata_sangat_mudah(void){
    FILE *fp = fopen("SM.txt", "r");
    if(fp == NULL){
        printf("Word Bank is Missing\n");
    }
    int i = 0;
    char s[101];
    char **sentences = malloc(sizeof(char *) * 100);
    while(fgets(s, sizeof(s), fp) != NULL){
        sentences[i++] = strdup(s);
    }
    sentences[i] = NULL;
    return sentences;
}
char **bankkata_mudah(void){
    FILE *fp = fopen("MD.txt", "r");
    if(fp == NULL){
        printf("Word Bank is Missing\n");
    }
    int i = 0;
    char s[101];
    char **sentences = malloc(sizeof(char *) * 100);
    while(fgets(s, sizeof(s), fp) != NULL){
        sentences[i++] = strdup(s);
    }
    sentences[i] = NULL;
    return sentences;
}
char **bankkata_sedang(void){
    FILE *fp = fopen("S.txt", "r");
    if(fp == NULL){
        printf("Word Bank is Missing\n");
    }
    int i = 0;
    char s[101];
    char **sentences = malloc(sizeof(char *) * 100);
    while(fgets(s, sizeof(s), fp) != NULL){
        sentences[i++] = strdup(s);
    }
    sentences[i] = NULL;
    return sentences;
}
char **bankkata_susah(void){
    FILE *fp = fopen("SS.txt", "r");
    if(fp == NULL){
        printf("Word Bank is Missing\n");
    }
    int i = 0;
    char s[101];
    char **sentences = malloc(sizeof(char *) * 100);
    while(fgets(s, sizeof(s), fp) != NULL){
        sentences[i++] = strdup(s);
    }
    sentences[i] = NULL;
    return sentences;
}
char **bankkata_sangat_susah(void){
    FILE *fp = fopen("SSS.txt", "r");
    if(fp == NULL){
        printf("Word Bank is Missing\n");
    }
    int i = 0;
    char s[101];
    char **sentences = malloc(sizeof(char *) * 100);
    while(fgets(s, sizeof(s), fp) != NULL){
        sentences[i++] = strdup(s);
    }
    sentences[i] = NULL;
    return sentences;
}
