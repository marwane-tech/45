#include <stdio.h>
#include <stdlib.h>
#define max 100
static int i;

static int n;
static int choix;
static float som;
static float moy;
static int x;
static float mix;
static float *p;

void menu(){



float a[max];





do{
     printf(" \n*************menu***********\n");
     printf(" 1. Saisir tous les elements du tableau.\n");
     printf(" 2. Afficher tous les elements du tableau.\n");
     printf(" 3. Calculer et afficher la somme de tous les elements du tableau.\n");
     printf(" 4. Calculer et afficher la moyenne des notes du tableau.\n");
     printf(" 5. Compter le nombre de notes supérieur a 10.\n");
     printf(" 6. Determiner la note la plus grande du tableau.\n");


     do{
        printf("donner moi votre choix !!!\n");
        scanf("%d",&choix);
        if(choix<0 ||choix>7)
            printf("votre choix doit compris entre 1 et 6\n");
     }while(choix<0 ||choix>7);
 switch(choix){
case 1:
    system("cls");
    printf("donnez moi votre nomber des notes :\n");
    scanf("%d",&n);
    saisir(&a,&n);



    break;
case 2:
    system("cls");
    affiche(&a,&n);
    break;

case 3:
    system("cls");
    som=0;
    somme(&a,&n,&som);
break;

case 4:
    system("cls");
    moy=0;
    moyenne(&som,&n,&moy);


break;


case 5:

    system("cls");
    x=0;
sup(&a,&n,&x,&moy);


break;

case 6:
    system("cls");
    mix=1;
    p=&mix;

    for(i=0;i<n;i++){
    if(a[i]>mix)
        mix=a[i];}


  printf("le nomber des notes sup a le moyenne :%.2f\n",mix);
break;


}
}while(choix!=9);





}
