//
// Created by root on 8/5/19.
//
#include <stdio.h>

//int main()
//{
//    int c;
//    c = getchar();
//    while (c != EOF) {
//        putchar(c);
//        c = getchar();
//    }
//}

//int main()
//{
//    int c;
//    while(c = getchar() != EOF){
//        putchar(c);
//    }
//}


//int main()
//{
//    long c = 0;
//    while(getchar() != EOF) {
//        ++c;
//        printf("%ld", c);
//    }
//}

//
//int main()
//{
//    double nc;
//    for (nc = 0 ; getchar() != EOF ; ++nc )
//        ;
//        printf("%.0f\n", nc);
//
//}

//int main()
//{
//    int nl, c;
//    while ((c = getchar()) != EOF)
//        if (c == '\n')
//            ++nl;
//    printf("%d\n", nl);
//}

//int main()
//{
//    int space, nl, nt, c;
//    while ((c = getchar()) != EOF) {
//        if (c == '\n') {
//            ++nl;
//        }
//        if (c == ' ') {
//            ++space;
//        }
//        if (c == '\t') {
//            ++nt;
//        }
//    }
//    printf("%d, %d, %d\n", nl, nt, space);
//}

//int main()
//{
//    printf("EOF is %d\n", EOF);
//}

//int main()
//{
//    int c;
//    while(c = getchar() != EOF) {
//        printf("%d\n", c);
//    }
//    printf("%d - at EOF\n", c);
//}

//#define  NOBLANK 'a'

//main()
//{
//    int c, lastc;
//    lastc = NOBLANK;
//    while((c = getchar()) != EOF) {
//        if (c != ' ') {
//            putchar(c);
//        } else if (c == ' ') {
//            if (lastc != ' ') {
//                putchar(c);
//            }
//            lastc = c;
//        }
//    }
//}
#define NOBLANK 'b';
//main()
//{
//    int c, lastc;
//
//    lastc = NOBLANK;
//    while ((c = getchar()) != EOF) {
//        if (c != ' ') {
//            putchar(c);
//        } else if (lastc  != ' ') {
//            putchar(c);
//        }
//        lastc =  c;
//    }
//}


//int main()
//{
//    int c;
//    while(c = getchar())
//        putchar(c);
//}

#define  REPLACE  'convert'
//main()
//{
//    int c;
//    while ((c = getchar()) != EOF) {
//        if (c == '\b') {
//            printf("\\b");
//        } else if ( c == '\t') {
//            printf("\\t");
//        } else if ( c == '\b') {
//            printf("\\b");
//        }else if(c == '\\') {
//            printf("\\\\");
//        }else {
//            putchar(c);
//        }
//    }
//}


#define  IN  1
#define  OUT 0
main()
{
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n')
            ++nl;
        else if (c == ' ' || c == '\n' || '\t')
            state = OUT;
        else if (state == OUT){
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);
}

