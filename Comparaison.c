#include <stdio.h>

int main(){

    int a , b ;

    printf("entrer un nombre: ");
    scanf("%d", &a);

    printf("enter un autre nombre: ");
    scanf("%d", &b);

    if (a > b){
    printf("le plus grand est %d\n",a);
    } else if (a < b){

        printf("le plus grand est %d\n",b);
    } else {

        printf("%d et %d sont egaux\n",a , b);
    }

    return 0;
}
