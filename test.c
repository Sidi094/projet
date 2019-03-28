#include<stdio.h>
#include<stdlib.h>

int main(){

    int a=0;
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
    return 0;
}
