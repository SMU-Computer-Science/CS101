#include <stdio.h>
#include <string.h>

void print_letter(char form, int count, char str, int line){
    if(form == 'T'){
        if(count % 4 == 1 && line == 1){
            printf("%c", str);
        } else if((count % 4 == 2 || count % 4 == 0) && line == 2){
            printf("%c", str);
        } else if(count % 4 == 3 && line == 3){
            printf("%c", str);
        } else{
            printf(" ");
        }
        
    } else if(form == 'M'){
        if(count % 4 == 2 && line == 1){
            printf("%c", str);
        } else if((count % 4 == 1 || count % 4 == 3) && line == 2){
            printf("%c", str);
        } else if(count % 4 == 0 && line == 3){
            printf("%c", str);
        } else{
            printf(" ");
        }
    } else if (form == 'B'){
        if(count % 4 == 3 && line == 1){
            printf("%c", str);
        } else if((count % 4 == 2 || count % 4 == 0) && line == 2){
            printf("%c", str);
        } else if(count % 4 == 1 && line == 3){
            printf("%c", str);
        } else{
            printf(" ");
        }
    }
}
void print_dancing_string(char *str, char form){

    if(strlen(str) == 0){
        printf("||\n");
        printf("||\n");
        printf("||\n");
    }

    int count = 1;
    printf("|");
    char *temp  = str;
    while(*str != '\0'){
        int line = 1;
        print_letter(form, count, *str, line);
        count++;
        str++;           
    }
    printf("|\n");
    str = temp;
    count = 1;
    printf("|");
    while(*str != '\0'){           
        int line = 2;
        print_letter(form, count, *str, line);
        count++;
        str++;
    }
    printf("|\n");
    str = temp;
    count = 1;
    printf("|");
    while(*str != '\0'){           
        int line = 3;
        print_letter(form, count, *str, line);
        count++;
        str++;
    }
    printf("|\n");
}

int main(void) {
    {
        printf("Test 1\n");
        printf("Expected:\n");
        printf("|a|\n");
        printf("| |\n");
        printf("| |\n");
        printf("Actual  :\n");
        print_dancing_string("a", 'T');
        printf("\n");
    }

    {
        printf("Test 2\n");
        printf("Expected:\n");
        printf("|a   e   i|\n");
        printf("| b d f h |\n");
        printf("|  c   g  |\n");
        printf("Actual  :\n");
        print_dancing_string("abcdefghi", 'T');
        printf("\n");
    }

    {
        printf("Test 3\n");
        printf("Expected:\n");
        printf("| b   f   |\n");
        printf("|a c e g i|\n");
        printf("|   d   h |\n");
        printf("Actual  :\n");
        print_dancing_string("abcdefghi", 'M');
        printf("\n");
    }

    {
        printf("Test 4\n");
        printf("Expected:\n");
        printf("|  c   g  |\n");
        printf("| b d f h |\n");
        printf("|a   e   i|\n");
        printf("Actual  :\n");
        print_dancing_string("abcdefghi", 'B');
        printf("\n");
    }

    {
        printf("Test 5\n");
        printf("Expected:\n");
        printf("||\n");
        printf("||\n");
        printf("||\n");
        printf("Actual  :\n");
        print_dancing_string("", 'B');
        printf("\n");
    }
}

void print_T(char *str){
//         int count = 1;
//         printf("|");
//         char *temp  = str;
//         while(*str != '\0'){
//             if(count % 4 == 1){
//                 printf("%c", *str);
//             } else{
//                 printf(" ");
//             } 
//             count++;
//             str++;           
//         }
//         printf("|\n");
//         str = temp;
//         count = 1;
//         printf("|");
//         while(*str != '\0'){           
//             if(count % 4 == 2 || count % 4 == 0){
//                 printf("%c", *str);
//             } else{
//                 printf(" ");
//             }
//             count++;
//             str++;
//         }
//         printf("|\n");
//         str = temp;
//         count = 1;
//         printf("|");
//         while(*str != '\0'){           
//             if(count % 4 == 3){
//                 printf("%c", *str);
//             } else{
//                 printf(" ");
//             }
//             count++;
//             str++;
//         }
//         printf("|\n");
        
    
// }

// void print_M(char *str){
//         int count = 1;
//         printf("|");
//         char *temp  = str;
//         while(*str != '\0'){
//             if(count % 4 == 2){
//                 printf("%c", *str);
//             } else{
//                 printf(" ");
//             } 
//             count++;
//             str++;           
//         }
//         printf("|\n");
//         str = temp;
//         count = 1;
//         printf("|");
//         while(*str != '\0'){           
//             if(count % 4 == 1 || count % 4 == 3){
//                 printf("%c", *str);
//             } else{
//                 printf(" ");
//             }
//             count++;
//             str++;
//         }
//         printf("|\n");
//         str = temp;
//         count = 1;
//         printf("|");
//         while(*str != '\0'){           
//             if(count % 4 == 0){
//                 printf("%c", *str);
//             } else{
//                 printf(" ");
//             }
//             count++;
//             str++;
//         }
//         printf("|\n");
      
// }

// void print_B(char *str){
//         int count = 1;
//         printf("|");
//         char *temp  = str;
//         while(*str != '\0'){
//             if(count % 4 == 3){
//                 printf("%c", *str);
//             } else{
//                 printf(" ");
//             } 
//             count++;
//             str++;           
//         }
//         printf("|\n");
//         str = temp;
//         count = 1;
//         printf("|");
//         while(*str != '\0'){           
//             if(count % 4 == 2 || count % 4 == 0){
//                 printf("%c", *str);
//             } else{
//                 printf(" ");
//             }
//             count++;
//             str++;
//         }
//         printf("|\n");
//         str = temp;
//         count = 1;
//         printf("|");
//         while(*str != '\0'){           
//             if(count % 4 == 1){
//                 printf("%c", *str);
//             } else{
//                 printf(" ");
//             }
//             count++;
//             str++;
//         }
//         printf("|\n");
      
// }


// void print_dancing_string(char *str, char form){
    
//     if(form == 'T'){
//         print_T(str);
//     } else if(form == 'M'){
//         print_M(str);
//     } else if (form == 'B'){
//         print_B(str);
//     } else if(strlen(str) == 0){
//         printf("||\n");
//         printf("||\n");
//         printf("||\n");
//     }
// }
