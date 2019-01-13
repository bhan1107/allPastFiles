//
//  main.c
//  CISC235_Assignment1
//
//  Created by Ben Han on 2018-01-21.
//  Copyright © 2018 Ben Han. All rights reserved.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ARRAY_MAX 1000
#define K_VALUE 20

int algorithmA(int arrayInt[], int theNum, int theSet[]){
    int j=0;
    int i=0;
    int found=0;
    
    clock_t start, end;
    double cpu_time_used=0;
    start = clock();

    for (j = 0; j < ARRAY_MAX; j++){
        for(i = 0; i < K_VALUE; i++){
            if(theSet[i] == arrayInt[j])
                i = ARRAY_MAX*2;
        }
    }
    
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("%f\n", cpu_time_used);
    return 0;
}


int main(int argc, const char * argv[]) {
    srand(time(NULL));
    
    int setInt[K_VALUE];
    int arrayInt[ARRAY_MAX];
    int i=0;
    int j=0;
    //int k=0;
    int numberInt = rand() % ARRAY_MAX;
    
    for (i = 0; i < ARRAY_MAX; i++){
        int r = rand() % ARRAY_MAX;
        //printf("The number generated is %d\n", r);
        arrayInt[i] = r;
    }
    
    for (j = 0; j < K_VALUE; j++){
        if(j < K_VALUE/2)
            setInt[j]=arrayInt[rand() % ARRAY_MAX];
        else
            setInt[j]=rand() % ARRAY_MAX + ARRAY_MAX*2;
        
    }
    
    //for (k=0; k<ARRAY_MAX*2; k++){
    //    printf("%d\n" , setInt[k]);
    //}
    
    int found = algorithmA(arrayInt, numberInt, setInt);
  
    
    //if(found > 0)
    //    printf("Found\n");
    //else
    //    printf("Not Found\n");
    
    
    
    return 0;
}


