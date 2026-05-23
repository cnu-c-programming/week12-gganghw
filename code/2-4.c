#include <stdio.h>

int main(int argc, const char* argv[]) {
    if (argc < 2)
        return 0;

    FILE* fp = fopen(argv[1], "r");
    int count[26] ={0};
    int c;
    while((c = fgetc(fp)) != EOF){
        switch(c){
            case 'a': count[0]++;
            break;
            case 'b': count[1]++;
            break;
            case 'c': count[2]++;
            break;
            case 'd': count[3]++;
            break;
            case 'e': count[4]++;
            break;
            case 'f': count[5]++;
            break;
            case 'g': count[6]++;
            break;
            case 'h': count[7]++;
            break;
            case 'i': count[8]++;
            break;
            case 'j': count[9]++;
            break;
            case 'k': count[10]++;
            break;
            case 'l': count[11]++;
            break;
            case 'm': count[12]++;
            break;
            case 'n': count[13]++;
            break;
            case 'o': count[14]++;
            break;
            case 'p': count[15]++;
            break;
            case 'q': count[16]++;
            break;
            case 'r': count[17]++;
            break;
            case 's': count[18]++;
            break;
            case 't': count[19]++;
            break;
            case 'u': count[20]++;
            break;
            case 'v': count[21]++;
            break;
            case 'w': count[22]++;
            break;
            case 'x': count[23]++;
            break;
            case 'y': count[24]++;
            break;
            case 'z': count[25]++;
            break;
        }
    }
    printf("a: %d\n", count[0]);
    printf("b: %d\n", count[1]);
    printf("c: %d\n", count[2]);
    printf("d: %d\n", count[3]);
    printf("e: %d\n", count[4]);
    printf("f: %d\n", count[5]);
    printf("g: %d\n", count[6]);
    printf("h: %d\n", count[7]);
    printf("i: %d\n", count[8]);
    printf("j: %d\n", count[9]);
    printf("k: %d\n", count[10]);
    printf("l: %d\n", count[11]);
    printf("m: %d\n", count[12]);
    printf("n: %d\n", count[13]);
    printf("o: %d\n", count[14]);
    printf("p: %d\n", count[15]);
    printf("q: %d\n", count[16]);
    printf("r: %d\n", count[17]);
    printf("s: %d\n", count[18]);
    printf("t: %d\n", count[19]);
    printf("u: %d\n", count[20]);
    printf("v: %d\n", count[21]);
    printf("w: %d\n", count[22]);
    printf("x: %d\n", count[23]);
    printf("y: %d\n", count[24]);
    printf("z: %d\n", count[25]);
    fclose(fp);
}

