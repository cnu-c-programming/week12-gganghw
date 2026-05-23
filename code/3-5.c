#include <stdio.h>

int main(int argc, const char* argv[]) {
    const char* filename = "numbers.txt";

    FILE* fp = fopen(filename, "r");
    if (fp == NULL) {
        return 0;
    }
    int k;
    int num;
    int sum = 0;
    while((k = fscanf(fp, "%d", &num)) != EOF){
        if(k == 1){
            sum+=num;
        }else{
            char a[20] = {0};
            fscanf(fp, "%s", a);
            fprintf(stderr, "invalid input %s\n", a);
        }
    }
    printf("sum: %d\n", sum);
    fclose(fp);
    return 0;
}
