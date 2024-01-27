#include <stdio.h>

void score(void){
    char *scorefile = "scores.txt";
    FILE *fp = fopen(scorefile, "r+");
    
    if (fp == NULL) {
        fprintf(stderr, "Score file doesn't exist! Creating it now!\n");
        fp = fopen(scorefile, "w+");
    }
    
    char line[100];
    int i = 1;
    while (fgets(line, sizeof line, fp) != NULL) {
        printf("%4d. %s", i++, line);
    }
    puts("");
    
    fclose(fp);
}