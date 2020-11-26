#include <stdio.h>
#include <stdlib.h>
#include "min1.h"
#include "max1.h"
#include "var.h"
#include <math.h>
int main()
{


int n = 7;
float D;
int maxx;
int minn;
float var1 ;
int t [7] = {13,12,5,1,19,13,17};
//int t [7] = {1,1,1,1,1,1,1};
max1(t,n,&maxx);
mini(t,n,&minn);
var(t,n,&var1);

    printf("\n \nLE max est  %d \n" ,maxx);
    printf(" \n");
    printf("le min est %d \n" ,minn);
    printf(" \n");
    printf("la  variance est %f \n" ,var1);

    
    return 0;
}
