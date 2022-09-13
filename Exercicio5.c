#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
Implementar uma função que, dada uma matriz
M10×8, gere um vetor V de tamanho 8, onde
cada elemento do vetor consiste na soma dos
elementos de uma coluna de M. Ou seja, o
elemento V[0] consiste na soma dos elementos
da primeira coluna de M, o elemento V[1]
consiste na soma dos elementos da segunda
coluna de M, e assim por diante.
*/
//constantes de linha e coluna para a matriz
#define L 3
#define C 2

void exibirMatriz(int m[L][C]);
void vetorMatriz(int m[L][C], int v[]);
void exibirVetor(int v[], int TAM);   

void main(){
	//declaração de variáveis
	int matriz[L][C]={{1,2},
	                  {2,5},
	                  {3,6}};
	 
	int vetor[C]={0};
	
	//chamando a função para exibir a matriz já declarada
	exibirMatriz(matriz);
	
	//transformando a soma da coluna da matriz no vetor
	vetorMatriz(matriz, vetor);
	
	//chamando a função para exibir o vetor
	exibirVetor(vetor, C);
	
	
}

void exibirMatriz(int m[L][C]){
	//declaração de variáveis
	int i, j;
	//varrendo a linha
	for(i=0; i<L; i++)
	{
		//varrendo a coluna
		for(j=0; j<C; j++)
		{
			//printando o elemento da matriz
			printf("%3.d", m[i][j]);
		}
		printf("\n");
	}
}

void vetorMatriz(int m[L][C], int v[]){
	//declaração de variáveis
	int i, j, aux;
	//varrendo a coluna
	for(j=0; j<C; j++)
	{
		//atualizando atribuindo 0 a variavel aux
		aux=0;
		//varrendo a linha
		for(i=0; i<L; i++)
		{
			//somando o elemento da linha anterior na próxima linha e atribuindo nela mesma
			aux += m[i][j];
		}
		//atribuindo a soma ao vetor
		v[j]=aux;
	}
}

void exibirVetor(int v[], int TAM){
	//declaração de variáveis
	int i, j;
	
	printf("O valor do vetor e: ");
	
	//varrendo o vetor
	for(i=0; i<TAM; i++)
	{
		//printando o vetor
		printf("%d ", v[i]);
	}
	
}
