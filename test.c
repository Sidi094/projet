#include<stdio.h>
#include<stdlib.h>

void main(){

    int a=0;
    printf("entrer un nombre\n");
    scanf("%d", &a);
    if(a>0){
        printf("a est un nombre positif");
    }else if (a<0){
        printf("a est un nombre negatif");
    }
    else{
        printf("a est un nombre nulle");
    }

    getch();
}
