#include <stdio.h>
#include <time.h>
#include <assert.h>

void score(void){
    char *scorefile = "scores.txt";
    FILE *fp = fopen(scorefile, "r+");
    
    if (fp == NULL) {
        fprintf(stderr, "Score file doesn't exist! Creating it now!\n");
        fp = fopen(scorefile, "w+");
    }
    
    char line[101];
    int i = 1;
    while (fgets(line, sizeof line, fp) != NULL) {
        printf("%4d. %s", i++, line);
    }
    puts("");
    
    fclose(fp);
}

int curScore = 0;
void addscore(void) {
    curScore += 50;
}

void savescore(void) {
    FILE *fp;
    char *scorefile = "scores.txt";

    if ((fp = fopen(scorefile, "a")) == NULL) {
        fprintf(stderr, "Score file doesn't exist! Creating it now!\n");
        fp = fopen(scorefile, "w+");
    }
    
    time_t t = time(NULL); // get current time, berapa detik sejak 1 jan 1970 hingga detik sekarang
    struct tm *tm = localtime(&t);
    char scoretime[64];
    size_t ret = strftime(scoretime, sizeof(scoretime), "%c", tm);
    assert(ret);
    
    fprintf(fp, "%s: %d\n", scoretime, curScore);
    fclose(fp);
}