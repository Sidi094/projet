#include<stdio.h>
#include<stdlib.h>

void main(){

    int a=0;
    int b=0;
    printf("entrer un nombre\n");
    scanf("%d", &a);
    if(a>0){
        printf("%d est un nombre positif", &a);
    }else if (a<0){
        printf("%d est un nombre negatif", &a);
    }
    else{
        printf("%d est un nombre nulle", &a);
    }

    getch();
    //return 0;
}
