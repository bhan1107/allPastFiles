//
//  main.c
//  Pi31
//
//  Created by Ben Han on 2018-01-18.
//  Copyright © 2018 Ben Han. All rights reserved.
//

#include <stdio.h>

unsigned dec2bin(unsigned char x){
    unsigned char d;
    unsigned  rslt, newrslt;
    int i = 0;;
    rslt = 0;
    d = x;
    while (d != 0){
        //printf("d is 0x%x\n", d);
        newrslt = d%2;
        //printf("newrslt is 0x%x\n", newrslt);
        d = d/2;
        rslt = rslt | (newrslt << i);
        //printf("i is 0x%x\n", i);
        printf("rslt is 0x%x\n", rslt);
        i++;
    }
    return rslt;
}


int main(int argc, const char * argv[]) {
    unsigned char  h = 165;
    unsigned  i = 0x0000ffff;
    unsigned   hrslt;
    int irslt;
    char c ='a';
    
    c++;
    printf("%c\n", c);
    hrslt = dec2bin(h);
    printf("calculated hex value of %d is: 0x%x\n",h,hrslt);
    printf("actual hex value of %d is: 0x%x\n", h,h);
    
    return 0;
}
