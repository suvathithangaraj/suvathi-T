#include <stdio.h>
int main()
{
    int i = 75;
    int k = 130;
    printf(" value of i=%d k=%d before swapping", i, k);
    i = i ^ k;
    k = i ^ k;
    i = i ^ k;
    printf("\nvalue of i=%d k=%d after swapping", i, k);
    
 }
