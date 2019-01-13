//
//  main.c
//  mergeSort
//
//  Created by Ben Han on 2018-01-22.
//  Copyright © 2018 Ben Han. All rights reserved.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ARRAY_MAX 1000
#define K_VALUE 10

int binarySearch(int arrayInt[], int left, int right, int x, int theSet[]){
    int i=0;
    
    for(i=0; i< K_VALUE; i++){
        while (left <= right){
            int m = left + (right-left)/2;
            
            if (arrayInt[m] == theSet[i])
                left=right;
 
            if (arrayInt[m] < theSet[i])
                left = m + 1;
            
            else
                right = m - 1;
        }
    }
    
    return -1;
}

void quicksort(int number[ARRAY_MAX],int firstElement,int lastElement){
    int i;
    int j;
    int pivot;
    int temp;
    
    if(firstElement<lastElement){
        pivot=firstElement;
        i=firstElement;
        j=lastElement;
        
        while(i<j){
            while(number[i]<=number[pivot]&&i<lastElement)
                i++;
            while(number[j]>number[pivot])
                j--;
            if(i<j){
                temp=number[i];
                number[i]=number[j];
                number[j]=temp;
            }
        }
        
        temp=number[pivot];
        number[pivot]=number[j];
        number[j]=temp;
        quicksort(number,firstElement,j-1);
        quicksort(number,j+1,lastElement);
        
    }
}

int main(int argc, const char * argv[]) {
    
    srand(time(NULL));
    int i,j, count, number[ARRAY_MAX];
    count = ARRAY_MAX;
    int setInt[K_VALUE];
    
    
    for (i = 0; i < ARRAY_MAX; i++){
        int r = rand() % 30;
        
        number[i] = r;
    }
    
    for (j = 0; j < K_VALUE; j++){
        if(j < K_VALUE/2)
            setInt[j]=number[rand() % ARRAY_MAX];
        else
            setInt[j]=rand() % ARRAY_MAX + ARRAY_MAX*2;
        
    }
    
    clock_t start, end;
    double cpu_time_used=0;
    start = clock();
    
    quicksort(number,0,count-1);
    

    
    int n = sizeof(number)/ sizeof(number[0]);
    int x = 10;
    int result = binarySearch(number, 0, n-1, x, setInt);

    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("%f\n", cpu_time_used);
    
    return 0;
}
