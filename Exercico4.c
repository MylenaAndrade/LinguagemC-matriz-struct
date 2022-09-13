#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
Fazer uma função que, dada uma matriz M6×6,
determine se ela é simétrica.
*/
//constantes de linha e coluna para a matriz
#define L 3
#define C 3
#define FALSE 0
#define TRUE 1

//mostrando que existe uma função
void exibirMatriz(int m[L][C]);
int matrizSimetrica(int m[L][C]);

//função principal
void main(){
	//declaração de variáveis
	int matriz[L][C] = {{1,2,3},
	                    {2,4,5},
	                    {3,5,6}};
	
	//chamando a função para exibir a matriz declarada
	exibirMatriz(matriz);
	
	//chamando e verificando se a matriz é simétrica
	if(matrizSimetrica(matriz)==TRUE)
	{
		printf("A MATRIZ E SIMETRICA");
	}else{
		printf("A MATRIZ NAO E SIMETRICA");
	}
}

//função para exibir matriz
void exibirMatriz(int m[L][C]){
	//declaração de variáveis
	int i, j;
	//varrendo a linha
	for(i=0; i<L; i++)
	{
		//varrendo a coluna
		for(j=0; j<C; j++)
		{
			//printando os elementos da posição
			printf("%d", m[i][j]);
		}
		printf("\n");
	}
}

//função para testar se a matriz é simétrica
int matrizSimetrica(int m[L][C]){
	//declaração de variáveis
	int i,j;
	//varrendo a linha
	for(i=0; i<L; i++)
	{
		//varrendo a coluna
		for(j=0; j<C; j++)
		{
			//verificando se existe diferença entre as posições da matriz e se existir retornar FALSE
			if(m[i][j] != m[j][i])
			{
				return FALSE; 
			}
		}
	}
	
	//retornando TRUE se não existir diferença
	return TRUE;
}
