#include <stdio.h>


void var(int t[],int n ,float *var1){
int i;
float S=0.0;
float S1;
float  M;
int e;
*var1 = 0 ;

for(i=0;i<n;i++){
	

	S= S + t[i];
        printf(" \n la somme est  %f , et c'est l'élément   %d  " ,S,i);
	}

M= S / n ;



printf(" \nla moyenne est %f  " ,M);


for(e=0;e<n;e++){

	S1=S1+ ((t[e]-M) * (t[e]-M));
}
printf(" la vrai variance %f", S1/n);

*var1 = S1/n;


}
