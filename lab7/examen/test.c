#include <stdio.h>
#include <stdlib.h>
#include "max1.h"
int main()
{


int n = 5;

int maxx;

int t [5] = {2,5,7,2,9};

max1(t,n,&maxx);

    printf("%d \n" ,maxx);
    return 0;
}
