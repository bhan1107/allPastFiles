//
//  main.c
//  2016Quiz3
//
//  Created by Ben Han on 2017-11-23.
//  Copyright © 2017 Ben Han. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

void abbrev(char *name){
    name[4] = '\0';
}
typedef struct {
    int first;
    int second;
} twoNums;
void triple(twoNums *x, twoNums *y, twoNums *z) {
    printf("%d, %d, %d, %d, %d, %d\n", x->first, x->second,
           y->first, y->second, z->first, z->second);
} // end print

char* substring(char *theString, int start, int length){
    int i=0;
    char *returnString;
    returnString = malloc(sizeof(char)*(length+1));
    
    for(i=0;i<=length;i++){
        returnString[i] = theString[start];
        start++;
    }
    returnString[length] = '\0';
    
    return returnString;
}

void div2(float *ptr){
    *ptr = *ptr/2;
}

int main() {
    
    char name[12];
    strcpy(name, "Harry"); abbrev(name); printf("%s\n", name);
    strcpy(name, "Ron"); abbrev(name); printf("%s\n", name);
    strcpy(name, "Luna"); abbrev(name); printf("%s\n", name);
    strcpy(name, "Hermoine"); abbrev(name); printf("%s\n", name);
    
    /* Q2 2014
        twoNums a;
        twoNums b;
        twoNums c;
        a.first = 1;
        a.second = 2;
        b.first = 3;
        b.second = 4;
        c.first = 5;
        c.second = 6;
        twoNums *ptr1;
        twoNums *ptr2;
        twoNums *ptr3;
        ptr1 = &a; ptr2 = &b; ptr3 = &c;
        ptr1 = ptr2; ptr2 = ptr3; ptr3 = ptr1;
        triple(ptr1,ptr2,ptr3);
        ptr3 = ptr2; ptr2 = ptr1;
        b.first = 7; b.second = 8;
        ptr2->first = 9; ptr2->second = 10;
        triple(ptr1,ptr2,ptr3);
        char *str = substring("computer", 0, 8);
        printf("%s\n ", str);*/
    /* ㅃ1 2016
    float x = 14;
    printf("%0.1f\n", x);
    div2(&x);
    printf("%0.1f\n", x);
    div2(&x);
    printf("%0.1f\n", x);
    */
    
        return 0;
} // end main

