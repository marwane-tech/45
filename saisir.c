#include <stdio.h>
#include <stdlib.h>
#define max 100
void saisir(float *t,int *m){
for(int i=0;i<*m;i++){
        printf("donner moi la note %d :\n",i+1);
    scanf("%f",&t[i]);
}
}
