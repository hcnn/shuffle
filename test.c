#include <stdlib.h> //srand
#include <stdio.h>  //printf
#include "shuffle.h"

int main(){
    double x[] = {1,2,3,4,5,6,7,8,9,0};
    int n = 10;
    
    srand(42); //set seed
    shuffle(x,n); //permute
    
    for (int i=0; i<n; i++){
        printf("%.f ", x[i]);
    }
    printf("\n");
}
