#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
Faça uma função que, dada uma matriz M8×5 de
reais, gere a matriz Mt, sua transposta.
*/
//constantes de linha e coluna para a matriz
#define L 8
#define C 5

//mostrando que existe mais funções
void matrizTrans(float m[L][C], float mT[C][L]);
void preencherMatriz( float m[L][C]);
void exibirMatriz(float m[L][C]);
void exibirTrans(float mT[C][L]);

//função principal main
void main(){
	//declaração de variáveis
	float matriz[L][C], maTrans[C][L];
	
	//chamando a função para preencher a matriz
	preencherMatriz(matriz);
	
	//chamando a função para exibir a matriz
	exibirMatriz(matriz);
	
	//chamando a função para gerar a transposta
	matrizTrans(matriz, maTrans);
	
	//chamando a função para exibir a matriz transposta
	exibirTrans(maTrans);
}

//função para preencher a matriz sem muito esforço
void preencherMatriz( float m[L][C]){
	//declaração de variáveis
	int i, j;
	
	//função para modificar os números toda vez q o programa rodar 
	srand(time(NULL));
	
	for(i=0; i<L; i++)
	{
		for(j=0; j<C; j++)
		{
			m[i][j] = rand() %100;
		}
	}
}

void exibirMatriz(float m[L][C]){
	int i, j;
	for(i=0; i<L; i++)
	{
		for(j=0; j<C; j++)
		{
			printf("%5.1f ", m[i][j]);
		}
		printf("\n");
	}
}
//função principal do problema
void matrizTrans(float m[L][C], float mT[C][L]){
	//declaração de variáveis
	int i, j;
	
	//varrendo a linha
	for(i=0; i<L; i++)
	{
		//varrendo a coluna
		for(j=0; j<C ; j++)
		{
			//atribuindo o valor da matriz principal a outra matriz
			mT[j][i]=m[i][j];
		}
	}
}

void exibirTrans(float mT[C][L]){
	//declaração de variáveis
	int i, j;
	
	printf("\nA Matriz Transposta e: \n");
	//varrendo a coluna
	for(i=0; i<C; i++)
	{
		//varrendo a linha
		for(j=0; j<L; j++)
		{
			//printando a matriz transposta
			printf("%5.1f ", mT[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
}
