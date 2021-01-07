#include <stdio.h>
#include <string.h>
#include <ctype.h>

void trim (char * string){
    
    int len = strlen(string);
    int point = 0;
    
    for(int i = 0; i < len; i++){
        if(string[i] != ' '){
            point = i;
            break;
        }
    }
    
    for(int i = 0; i < len; i++){
        if(string[point] == '\0'){
            string[i] = '\0';
            return;
        }

        string[i] = string[point];
        point++;
        
        if(string[point] == ' ' && string[point+1] == ' '){
            string[i + 1] = '\0';
            return; 
        } 
        
    }
    
}

int main(void) {
    {
        char sentence[] = "    apple and orange";
        trim(sentence);
        printf("Test 1\n");
        printf("Expected:[apple and orange]\n");
        printf("Actual  :[%s]\n", sentence); 
        printf("\n");  
    }

    {
        char sentence[] = "apple and orange          ";
        trim(sentence);
        printf("Test 2\n");
        printf("Expected:[apple and orange]\n");
        printf("Actual  :[%s]\n", sentence); 
        printf("\n");  
  
    }

    {
        char sentence[] = "       apple and orange          ";
        trim(sentence);
        printf("Test 3\n");
        printf("Expected:[apple and orange]\n");
        printf("Actual  :[%s]\n", sentence);   
    }
}