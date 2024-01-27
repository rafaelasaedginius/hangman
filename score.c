#include <stdio.h>

void score(void){
    char *scorefile = "scores.txt";
    FILE *fp = fopen(scorefile, "r");
    
    if (fp == NULL) {
        fprintf(stderr, "Score file doesn't exist!\n");
        return;
    }
    
    char line[100];
    int i = 1;
    while (fgets(line, sizeof line, fp) != NULL) {
        printf("%4d. %s\n", i, line);
    }
}