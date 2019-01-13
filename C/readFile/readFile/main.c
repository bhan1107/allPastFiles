#include <stdio.h>

int main()
{
    double var;
    //int count=0;
    //int i = 0;
    FILE *input= fopen("rtN1000.txt", "r");
    
    while(fscanf(input,"%f",&var) != EOF)
    {
        if(var > 1.25){
            printf("%f\n", var);
        }
    }
    return 0;
}

