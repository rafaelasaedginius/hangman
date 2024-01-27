#include <stdio.h>
#include <string.h>

char *chooselang(void){
    char lang[10];
    scanf("%s", lang);
    return lang;
}
FILE *wordbank_very_easy(void){
    FILE *fp = fopen("VE.txt", "r");
    if(fp == NULL){
        printf("Word Bank is Missing\n");
    }
    return fp;
}
FILE *wordbank_easy(void){
    FILE *fp = fopen("E.txt", "r");
    if(fp == NULL){
        printf("Word Bank is Missing\n");
    }
    return fp;
}
FILE *wordbank_medium(void){
    FILE *fp = fopen("M.txt", "r");
    if(fp == NULL){
        printf("Word Bank is Missing\n");
    }
    return fp;
}
FILE *wordbank_hard(void){
    FILE *fp = fopen("H.txt", "r");
    if(fp == NULL){
        printf("Word Bank is Missing\n");
    }
    return fp;
}
FILE *wordbank_very_hard(void){
    FILE *fp = fopen("VH.txt", "r");
    if(fp == NULL){
        printf("Word Bank is Missing\n");
    }
    return fp;
}
FILE *bankkata_sangat_mudah(void){
    FILE *fp = fopen("SM.txt", "r");
    if(fp == NULL){
        printf("Word Bank is Missing\n");
    }
    return fp;
}
FILE *bankkata_mudah(void){
    FILE *fp = fopen("MD.txt", "r");
    if(fp == NULL){
        printf("Word Bank is Missing\n");
    }
    return fp;
}
FILE *bankkata_sedang(void){
    FILE *fp = fopen("S.txt", "r");
    if(fp == NULL){
        printf("Word Bank is Missing\n");
    }
    return fp;
}
FILE *bankkata_susah(void){
    FILE *fp = fopen("SS.txt", "r");
    if(fp == NULL){
        printf("Word Bank is Missing\n");
    }
    return fp;
}
FILE *bankkata_sangat_susah(void){
    FILE *fp = fopen("SSS.txt", "r");
    if(fp == NULL){
        printf("Word Bank is Missing\n");
    }
    return fp;
}
