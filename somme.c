#include <stdio.h>
#include <stdlib.h>
#define max 100
void somme(float *z,int *r,float *s){
for(int i=0;i<*r;i++){
   (*s)=z[i]+(*s);
}
printf("la somme est %.2f",*s);
}
