    //
    //  main.c
    //  f
    //
    //  Created by Ben Han on 2018-01-25.
    //  Copyright © 2018 Ben Han. All rights reserved.
    //

    #include <stdio.h>
    #include <stdlib.h>
    char ch[40];
    char* msg0 = "Enter diffuse string:";
    char* msg1 = "BOOM!! Bomb Exploded. Bye! Bye!\n";
    char* msg2 = "Bomb Defused Good work!\n";
    char* fusedata = "abcdefghijklmnopqrstuvwxyz0123456789 \n";
    int arr[] = {15, 24, 38,10,20,38,21,9,38,21,14,6,38,32,38,8,5,3 };
    int x=0;

    int main(){
        printf("%s\n", msg0);
        fgets(ch, sizeof(ch), stdin);
        while(ch[x] !=  '\0' && ch[x] != '\n' ){ // .L2, .L5, .L6
            if (ch[x] != fusedata[arr[x]-2]) {  //.L6
                printf("%s\n", msg1);
                return 0;
            }
            x++;
        }
        
        printf("arr is 72\n");
        if(sizeof(arr)/4 == x) { //.L5
            printf("%s\n", msg2); //.L7
            return 0;
        } else { //.L5
            printf("%s\n", msg1);
            return 1;
        }
    }


