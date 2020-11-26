#include <stdio.h>
#include <stdlib.h>
#include "var.h"
int main()
{


int n =10 ;
int t [10] = {2,5,7,2,9,5,3,4,7,8};
float  var1; 
var(t,n,&var1);

    printf(" \n   la variance est %f \n " , var1);
    return 0;
}

