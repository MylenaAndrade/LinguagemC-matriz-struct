#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
Desenvolver uma fun��o que gere a seguinte
matriz M5x5:
		1 2 3 4 5
		2 3 4 5 6
		3 4 5 6 7
		4 5 6 7 8
		5 6 7 8 9
*/
//constantes de linha e coluna para a matriz
#define L 5
#define C 5

//mostrando que existe fun��es
void gerandoMatriz(int m[L][C]);
void exibirMatriz(int m[L][C]);

void main(){
	//declara��o de vari�veis
	int matriz[L][C];
	
	//chamando a fun��o para gerar a matriz
	gerandoMatriz(matriz);
	
	//chamando a fun��o para exibir a matriz
	exibirMatriz(matriz);
}

void gerandoMatriz(int m[L][C]){
	//declara��o de vari�veis
	int i, j, aux;
	//varrendo a linha
	for(i=0; i<L; i++)
	{
		//atribuindo o valor de i + 1 na vari�vel aux, para que aux sempre seja atualizada
		aux=i+1;
		
		//varrendo a coluna
		for(j=0; j<C; j++)
		{
			//atribuindo o valor de aux na matriz e incrementando + 1 nela
			m[i][j]= aux;
			aux++;
		}
	}
}

void exibirMatriz(int m[L][C]){
	//declara��o de vari�veis
	int i, j;
	//varrendo a linha
	for(i=0; i<L; i++)
	{
		//varrendo a coluna
		for(j=0; j<C; j++)
		{
			//printando o elemento da matriz
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
}
