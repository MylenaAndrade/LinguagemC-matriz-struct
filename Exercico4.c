#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
Fazer uma fun��o que, dada uma matriz M6�6,
determine se ela � sim�trica.
*/
//constantes de linha e coluna para a matriz
#define L 3
#define C 3
#define FALSE 0
#define TRUE 1

//mostrando que existe uma fun��o
void exibirMatriz(int m[L][C]);
int matrizSimetrica(int m[L][C]);

//fun��o principal
void main(){
	//declara��o de vari�veis
	int matriz[L][C] = {{1,2,3},
	                    {2,4,5},
	                    {3,5,6}};
	
	//chamando a fun��o para exibir a matriz declarada
	exibirMatriz(matriz);
	
	//chamando e verificando se a matriz � sim�trica
	if(matrizSimetrica(matriz)==TRUE)
	{
		printf("A MATRIZ E SIMETRICA");
	}else{
		printf("A MATRIZ NAO E SIMETRICA");
	}
}

//fun��o para exibir matriz
void exibirMatriz(int m[L][C]){
	//declara��o de vari�veis
	int i, j;
	//varrendo a linha
	for(i=0; i<L; i++)
	{
		//varrendo a coluna
		for(j=0; j<C; j++)
		{
			//printando os elementos da posi��o
			printf("%d", m[i][j]);
		}
		printf("\n");
	}
}

//fun��o para testar se a matriz � sim�trica
int matrizSimetrica(int m[L][C]){
	//declara��o de vari�veis
	int i,j;
	//varrendo a linha
	for(i=0; i<L; i++)
	{
		//varrendo a coluna
		for(j=0; j<C; j++)
		{
			//verificando se existe diferen�a entre as posi��es da matriz e se existir retornar FALSE
			if(m[i][j] != m[j][i])
			{
				return FALSE; 
			}
		}
	}
	
	//retornando TRUE se n�o existir diferen�a
	return TRUE;
}
