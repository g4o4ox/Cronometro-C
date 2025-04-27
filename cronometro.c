#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    printf("Cronometro com For \n");

    int time,i;

    printf("Quantos segundos você quer esperar?: ");
    
    scanf("%d",&time);

    for(i = 0; i <= time; i++){

        printf("%d segundos \n",i);
        sleep(1);
        
    }
    return 0;
}