#include <stdio.h>

//gera matrix com parametros inseridos e devolve a marix
float gera_matrix(int linha,int coluna){

    float inserir;
    float devolver[linha][coluna];

    for (int i =0; i < linha; i++){

        for(int j =0; j < coluna; j++){

            printf("please insert value for line %d column %d:",i,j);
            scanf("%f", &inserir);
            devolver[i][j]=inserir;

        }

    }
    

    return devolver[linha][coluna];
}