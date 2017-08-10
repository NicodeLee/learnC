#include <stdio.h>

#define LOWER  0 //不需要= 跟 ; 号跟java不一样
#define UPPER 300
#define STEP 20

int main(int argc, char *argv[])
{
    int fahr;

    for (fahr = LOWER; fahr < UPPER; fahr = fahr +STEP) {
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }


    return 0;
}
