#include "shuffle.h"

void shuffle(double *x, size_t n)
{
    size_t j,k;
    double tmp;
    for(j=0; j<n; j++){
        k = (int)rand() % n ;
        tmp = x[j] ;
        x[j] = x[k] ;
        x[k] = tmp ;
    }
}
