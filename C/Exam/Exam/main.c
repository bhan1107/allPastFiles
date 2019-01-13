//
//  main.c
//  Exam
//
//  Created by Ben Han on 2017-12-12.
//  Copyright © 2017 Ben Han. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

void swap(int *ptr1, int *ptr2){
    int a = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = a;
    
}

int getMaxSum(int *array, int len){
    if(len < 2){
        printf("Error: array can't be less than 2 element long");
        exit(1);
    }
    int i=0;
    int largest =0;
    int large =0;
    for(i=0; i< len; i++){
        
        if(array[i] > largest){
            //printf("%d\n",array[i]);
            largest = array[i];
        }
        if(array[i] > large && array[i] < largest){
            large = array[i];
        }
    }
    return large+largest;
    
}

char* substitute(char* string, char firstChar, char secondChar){
    /* code for main()
     #define NUM_STRINGS 3
     char *strings[] = {"aardvarks", "3.14159", "Queens."};
     char initialLetters[] = {'a','1','.'};
     char finalLetters[] = {'A','2','!'};
     char **results = malloc(NUM_STRINGS * sizeof(char*));
     int i;
     for (i = 0; i < NUM_STRINGS; i++) {
     printf("string %d before change: %s\n", i, strings[i]);
     results[i] = substitute(strings[i], initialLetters[i],
     finalLetters[i]);
     printf("string %d after function call: %s\n", i, strings[i]);
     printf("function result %d: %s\n", i, results[i]);
     } // end for*/
    
    
    int i=0;
    char* returnString = malloc(sizeof(char)*100);
    while(string[i] != '\0'){
        
        if(string[i] == firstChar){
            returnString[i] = secondChar;
        }else{
            returnString[i] = string[i];
        }
        
        i++;
    }
    
    return returnString;
}

void race(){
    //pid_t child1 = fork();
    
}

char* initials(char ** holidays){
    int i=0;
    char * resultLine = malloc(sizeof(char)*101);
    while(holidays[i]!=NULL){
        resultLine[i] = holidays[i][0];
        i++;
    }
    return resultLine;
}
void catch2(int signo) {
    printf("two\n");
    signal(SIGINT, catch2);
}

void catch1(int signo) {
    printf("one\n");
    signal(SIGINT, catch2);
} /* end catch1 */


int main(int argc, const char * argv[]) {
    void catch2(int signo);

        signal(SIGINT, catch1);
        pause();
        printf("three\n");
        pause();
        printf("four\n");
        pause();
        printf("five\n");
        pause();
        printf("six\n");
    return 0;
}


