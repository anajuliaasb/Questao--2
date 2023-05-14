#include <stdio.h>
void main (){
    int num, i, cont=0, resp;

    printf("\nEscolha um numero para verificarmos se eh primo: \n");
    scanf("%d",&num);

    for(int i=1; i<=num;i++){
        if(num%i==0){
        cont++;}
    }
        if(cont==2){
        printf("\nO numero %d eh primo\n", num);

       }
       else{
           printf("\n\nO numero %d nao eh primo\n", num);
                   }


}


