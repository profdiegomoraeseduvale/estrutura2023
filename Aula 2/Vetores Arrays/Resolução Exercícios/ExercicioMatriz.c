#include <stdio.h>

int main(){

int i, j, matriz[2][2], contpar=0;

for(i=0; i<2; i++){
    for(j=0; j<2; j++){
        printf("Digite o valor da linha %d coluna %d:",i,j);
        scanf("%d", &matriz[i][j]);
        if(matriz[i][j]%2==0){
            contpar++;
        }
    }
}

for(i=0; i<2; i++){
    for(j=0; j<2; j++){
        printf("%d ",matriz[i][j]);
    }
    printf("\n");
}
printf("\n");
printf("Total de pares: %d", contpar);

return 0;


}