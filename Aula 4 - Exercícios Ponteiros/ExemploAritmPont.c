#include <stdio.h>

int main()
{
    
    int vet[5] = {30, 40, 50, 60, 70};

    for(int i=0; i<5; i++){
        printf("\n%d | %p", *(vet+i), vet+i);
    }

    return 0;
}