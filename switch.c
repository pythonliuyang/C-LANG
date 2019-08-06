//
// Created by root on 8/5/19.
//
#include <stdio.h>
#include <stdlib.h>


//int main()
//{
//    char suit = 'H';
//    switch (suit) {
//        case 'C':
//            puts("C\n");
//            break;
//        case 'D':
//            puts("D");
//            break;
//        case 'H':
//            puts("It's right ,the world is H\n");
//            break;
//    }
//}

//int main()
//{
//    char ex[20];
//    puts("Please enter your boyfriend name: ");
//    scanf("%20s", ex);
//    printf("%s", ex);
//
//}

//int main()
//{
//    int number;
//    puts("please enter a string\n");
//    scanf("%i", &number);
//    printf(number);
//}


//int main()
//{
//    char card_name[3];
//    puts("Please enter a number:");
//    scanf("%2s", card_name);
//    int val = 0;
//    if(card_name[0] == "K") {
//        val = 10;
//    } else if ( card_name[0] == "Q" ) {
//        val = 10;
//    } else if ( card_name[0] == "A" ) {
//        val = 11;
//    } else {
//        val = atoi(card_name);
//    }
//
//    if ((val > 3) && (val < 6))
//        puts("add");
//    else if (val == 10)
//        puts("subtract");
//    else
//        puts("other char!");
//
//    return 0;
//
//
//}

int main()
{
    int winnings;
    int c = getchar();
    switch (c) {
        case 37:
            winnings = winnings + 50;
            break;
        case 65:
            winnings = winnings + 80;
            break;
        case 12:
            winnings = winnings + 20;
            break;
        default:winnings = 0;
    }

    puts(winnings);
}