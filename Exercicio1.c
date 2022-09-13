#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
Fa�a uma fun��o que, dada uma matriz M8�5 de
reais, gere a matriz Mt, sua transposta.
*/
//constantes de linha e coluna para a matriz
#define L 8
#define C 5

//mostrando que existe mais fun��es
void matrizTrans(float m[L][C], float mT[C][L]);
void preencherMatriz( float m[L][C]);
void exibirMatriz(float m[L][C]);
void exibirTrans(float mT[C][L]);

//fun��o principal main
void main(){
	//declara��o de vari�veis
	float matriz[L][C], maTrans[C][L];
	
	//chamando a fun��o para preencher a matriz
	preencherMatriz(matriz);
	
	//chamando a fun��o para exibir a matriz
	exibirMatriz(matriz);
	
	//chamando a fun��o para gerar a transposta
	matrizTrans(matriz, maTrans);
	
	//chamando a fun��o para exibir a matriz transposta
	exibirTrans(maTrans);
}

//fun��o para preencher a matriz sem muito esfor�o
void preencherMatriz( float m[L][C]){
	//declara��o de vari�veis
	int i, j;
	
	//fun��o para modificar os n�meros toda vez q o programa rodar 
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
//fun��o principal do problema
void matrizTrans(float m[L][C], float mT[C][L]){
	//declara��o de vari�veis
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
	//declara��o de vari�veis
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
