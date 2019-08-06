//
// Created by root on 8/3/19.
//
#include <stdio.h>

/*#define LOWER 0
#define UPPER 300
#define STEP
int main()
{
    printf(LOWER);
}
*/
/*
int main()
{
    int cs;

    cs = getchar();
    while (cs != EOF) {
        putchar(cs);
        cs = getchar();
    }
}
*/
//int main()
//{
//    int result;
//    while (result = getchar() != EOF) {
//        printf("%d\n", result);
//    }
//}


//int main()
//{
//    long value;
//    for(value = 0; value <= 10;++value){
//        printf("%ld\n", value);
//    }
//}


int main()
{
    double value;
    value = 0;
    while (getchar() != EOF) {
        ++value;
        printf("%.0f\n", value);
    }
}