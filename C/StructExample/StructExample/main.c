//
//  main.c
//  StructExample
//
//  Created by Ben Han on 2017-11-21.
//  Copyright © 2017 Ben Han. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    struct personInfo{
        char *name[100];
        int age;
    };
    
    struct personInfo Mickey;
    Mickey.age = 88;
    Mickey.name[0] = "Bickey";
    
    printf("This is age %d\n", Mickey.age);
    
    
    // ---------------------------------
    
    typedef struct {
        char name[100];
        char AP_NAME[100];
        int versionNum;
    } phone;
    phone iPhone7 = { "iPhone", "A10 Fusion" , 7};
    phone iPhone8 = { "iPhone", "A11 Bionic", 8};
    
    union{
        int verNum;
        char name[10];
    } iPhoneX;
    
    
    
    return 0;
}
