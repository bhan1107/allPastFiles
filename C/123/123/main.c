//
//  main.c
//  123
//
//  Created by Ben Han on 2018-03-29.
//  Copyright © 2018 Ben Han. All rights reserved.
//

#include <stdio.h>
#define MSIZE 500

/*naïve: ijk sequence
void multiply_matricess()
{
    int i, j, k ;
    int matrix_a [MSIZE][MSIZE];
    int matrix_b [MSIZE][MSIZE];
    int matrix_r [MSIZE][MSIZE];
    for (i = 0 ; i < MSIZE ; i++) {
        for (j = 0 ; j < MSIZE ; j++) {
            float sum = 0.0 ;
            for (k = 0 ; k < MSIZE ; k++) {
                sum = sum + (matrix_a[i][k] * matrix_b[k][j]) ;
            }
            printf("%f\n ", sum);
            matrix_r[i][j] = sum ;
        }
    }
}
*/




/*Interchange*/
void multiply_matrices()
{
    int i, j, k ;
 int matrix_a [MSIZE][MSIZE];
 int matrix_b [MSIZE][MSIZE];
 int matrix_r [MSIZE][MSIZE];
    for (i = 0 ; i < MSIZE ; i++) {
        for (k = 0 ; k < MSIZE ; k++) {
            for (j = 0 ; j < MSIZE ; j++) {
                matrix_r[i][j] = matrix_r[i][j] + (matrix_a[i][k] * matrix_b[k][j]) ;
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    multiply_matrices();
    return 0;
}
