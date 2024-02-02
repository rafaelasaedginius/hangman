#include <stdio.h>
#include <string.h>

#include "language.h"

static void very_easy(void) {
    FILE *fp;
    char filename[20];

    if (strcmp(chooselang(), "ENGLISH") == 0) {
        strcpy(filename, "VE.txt");
    } else {
        strcpy(filename, "SM.txt");
    }

    if ((fp = fopen(filename, "w")) == NULL) {
        fprintf(stderr, "GAGAL MEMBUKA FILE %s\n", filename);
        return;
    }
    
    char input[100] = {0};
    while (fgets(input, sizeof input, stdin) != NULL) {
        if (strcmp(input, ".\n") == 0) {
            break;
        }
        if (strlen(input) > 1) {
            fprintf(fp, "%s", input);
        }
        memset(input, '\0', sizeof input);
    }
    
    fclose(fp);
}

static void easy(void) {
    FILE *fp;
    char filename[20];

    if (strcmp(chooselang(), "ENGLISH") == 0) {
        strcpy(filename, "E.txt");
    } else {
        strcpy(filename, "MD.txt");
    }

    if ((fp = fopen(filename, "w")) == NULL) {
        fprintf(stderr, "GAGAL MEMBUKA FILE %s\n", filename);
        return;
    }
    
    char input[100] = {0};
    while (fgets(input, sizeof input, stdin) != NULL) {
        if (strcmp(input, ".\n") == 0) {
            break;
        }
        if (strlen(input) > 1) {
            fprintf(fp, "%s", input);
        }
        memset(input, '\0', sizeof input);
    }
    
    fclose(fp);
}

static void medium(void) {
    FILE *fp;
    char filename[20];

    if (strcmp(chooselang(), "ENGLISH") == 0) {
        strcpy(filename, "M.txt");
    } else {
        strcpy(filename, "S.txt");
    }

    if ((fp = fopen(filename, "w")) == NULL) {
        fprintf(stderr, "GAGAL MEMBUKA FILE %s\n", filename);
        return;
    }
    
    char input[100] = {0};
    while (fgets(input, sizeof input, stdin) != NULL) {
        if (strcmp(input, ".\n") == 0) {
            break;
        }
        if (strlen(input) > 1) {
            fprintf(fp, "%s", input);
        }
        memset(input, '\0', sizeof input);
    }
    
    fclose(fp);
}

static void hard(void) {
    FILE *fp;
    char filename[20];

    if (strcmp(chooselang(), "ENGLISH") == 0) {
        strcpy(filename, "H.txt");
    } else {
        strcpy(filename, "SS.txt");
    }

    if ((fp = fopen(filename, "w")) == NULL) {
        fprintf(stderr, "GAGAL MEMBUKA FILE %s\n", filename);
        return;
    }
    
    char input[100] = {0};
    while (fgets(input, sizeof input, stdin) != NULL) {
        if (strcmp(input, ".\n") == 0) {
            break;
        }
        if (strlen(input) > 1) {
            fprintf(fp, "%s", input);
        }
        memset(input, '\0', sizeof input);
    }
    
    fclose(fp);
}

static void very_hard(void) {
    FILE *fp;
    char filename[20];

    if (strcmp(chooselang(), "ENGLISH") == 0) {
        strcpy(filename, "VH.txt");
    } else {
        strcpy(filename, "SSS.txt");
    }

    if ((fp = fopen(filename, "w")) == NULL) {
        fprintf(stderr, "GAGAL MEMBUKA FILE %s\n", filename);
        return;
    }
    
    char input[100] = {0};
    while (fgets(input, sizeof input, stdin) != NULL) {
        if (strcmp(input, ".\n") == 0) {
            break;
        }
        if (strlen(input) > 1) {
            fprintf(fp, "%s", input);
        }
        memset(input, '\0', sizeof input);
    }
    
    fclose(fp);
}

void level_editor(void){
    puts("DIFFICULTY:");
    puts("* VERY EASY");
    puts("** EASY");
    puts("*** MEDIUM");
    puts("**** HARD");
    puts("***** VERY HARD");
    
    char choice[6];
    fgets(choice, sizeof choice, stdin);
    choice[strcspn(choice, "\n")] = '\0';

    if (strcmp(choice, "*") == 0) {
        very_easy();
    } else if (strcmp(choice, "**") == 0) {
        easy();
    } else if (strcmp(choice, "***") == 0) {
        medium();
    } else if (strcmp(choice, "****") == 0) {
        hard();
    } else if (strcmp(choice, "*****") == 0) {
        very_hard();
    }
}