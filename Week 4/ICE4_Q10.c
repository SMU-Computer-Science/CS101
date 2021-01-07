#include <stdio.h>

int main(void) {
    for (int i = 0; i < 12; i++) {
        printf("On the ");
        switch (i)
        {
        case 0:
            printf("first");
            break;
        
        case 1:
            printf("second");
            break;
        
        case 2:
            printf("third");
            break;

        case 3:
            printf("fourth");
            break;

        case 4:
            printf("fifth");
            break;

        case 5:
            printf("sixth");
            break;

        case 6:
            printf("seventh");
            break;

        case 7:
            printf("eighth");
            break;

        case 8:
            printf("nineth");
            break;

        case 9:
            printf("tenth");
            break;

        case 10:
            printf("eleventh");
            break;

        case 11:
            printf("twelfth");
            break;

        default:
            break;
        }

        printf(" day of Christmas my true love gave to me\n");

        switch (i)
        {
        case 11:
            printf("Twelve drummers drumming,\n");
        
        case 10:
            printf("Eleven pipers piping,\n");
        
        case 9:
            printf("Ten lords a-leaping,\n");
        
        case 8:
            printf("Nine ladies dancing,\n");
        
        case 7:
            printf("Eight maids a-milking,\n");
        
        case 6:
            printf("Seven swans a-swimming,\n");
        
        case 5:
            printf("Six geese a-laying,\n");

        case 4:
            printf("Five gold rings,\n");

        case 3:
            printf("Four calling birds,\n");
        
        case 2:
            printf("Three French hens,\n");

        case 1:
            printf("Two turtle doves,\n");
            printf("And a partridge in a pear tree.\n");
            break;

        default:
            printf("A patridge in a pear tree.\n");
            break;
        }
        printf("\n");
    }
    
}