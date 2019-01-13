//
//  main.c
//  examHelp
//
//  Created by Ben Han on 2017-12-12.
//  Copyright © 2017 Ben Han. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int red = 22;
    int black = 33;
    swapPtr(&black,&red);
    printf("%d %d\n", red, black);
    
    return 0;
}

void swapPtr(int *ptr1, int *ptr2){
    int a = *ptr1;
    ptr1 = ptr2;
    ptr2 = &a;
    
}




void assignStringExample(){
    char strExample[100] = "Hello, World!";
    // char strExample[100] = "How are you?" <-- This is illegal!
    char *ptr = strExample;
    printf("Ths is %s\n", ptr);
    ptr = "Fuck my life";
    printf("Ths is %s\n", ptr);
}

void pointerExample(){
    float num1 = 5.3;
    float *ptr1 = &num1;
    float *ptr2 = ptr1;
    printf("%0.1f, %0.1f\n", *ptr1, *ptr2);
    float num2 = 7.6;
    ptr2 = &num2;
    printf("%0.1f\n", *ptr1 + *ptr2);
    float *ptr3 = ptr1;
    *ptr1 = 2.2;
    *ptr2 = *ptr3;
    *ptr1 = 1.1;
    printf("%0.1f, %0.1f, %0.1f\n", *ptr1, *ptr2, *ptr3);
    ptr1 = ptr2;
    ptr2 = ptr3;
    *ptr1 = 7;
    printf("%0.1f, %0.1f, %0.1f\n", *ptr1, *ptr2, *ptr3);
}
