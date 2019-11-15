#include <stdio.h>
#include <stdlib.h>
#define max 100
void moyenne(float *v,int *y,float *d){
    (*d)=(*v)/(*y);
    printf("la moyenne est :%.2f\n",*d);

}
