//
//  main.c
//  O_Practice
//
//  Created by Ben Han on 2017-11-22.
//  Copyright © 2017 Ben Han. All rights reserved.
//

#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char name[101];
    int age;
} person;

union{
    int age;
    char name[10];
    double madness;
}human;

int main(int argc, const char * argv[]) {
    /*FILE *fp = fopen("Hello.txt", "w");
    if(fp == NULL){
        perror("error rertertert");
        exit(1);
    }
    fputs("Hello How are you", fp);*/
    
    person person1;
    person1.age = 21;
    strcpy(person1.name, "Bob");  // this is essential, array is not assignable? check what it means could giving pointer to name fix this?
    printf("%s is %d is years old\n", person1.name, person1.age);
    
    human; //unlike struct, union only have human;
    human.age = 22;
    human.madness = 455555;
    strcpy(human.name, "E");
    //printf("%s is a human\n" , human.name);
    printf("Eve is %d years old\n", human.age); // it returns that Eve is 69 years old, this is because ASCII code for E is 69. so this variables are contained in same memory
    

    return 0;
}
