#include <stdio.h>
#include <stdlib.h>
#define max 100
void affiche(float *k,int *o){

for(int i=0;i<*o;i++){
    printf("\n");
    printf("la note %d : %.2f",i+1,k[i]);

}

}
