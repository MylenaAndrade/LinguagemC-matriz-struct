#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
Desenvolver uma função que, dada uma matriz
M15×20, determine se um número X se encontra
na linha L da matriz.
*/
//constantes de linha e coluna para a matriz
#define L 3
#define C 2
#define TRUE 1
#define FALSE 0

//mostrando que existe funções
void preencherMatriz( float m[L][C]);
void exibirMatriz(float m[L][C]);
int numLinha(float m[L][C], float num, int lin);

void main(){
	//declarção de variáveis
	float matriz[L][C], numero;
	int linha;
	
	//chamando as funções
	preencherMatriz(matriz);
	exibirMatriz(matriz);
	
	printf("Escolha um numero: ");
	scanf("%f", &numero);
	printf("Escolha a linha: ");
	scanf("%d", &linha);
	
	if(numLinha(matriz, numero, linha)==TRUE)
	{
		printf("%.1f se encontra na linha %d", numero, linha);
	}else{
		printf("%.1f nao se encontra na linha %d", numero, linha);
	}
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

int numLinha(float m[L][C], float num, int lin){
	int i;
	
	//diminuindo um valor da linha porque o primeiro número do for é *0* não *1*
	lin--;
	
	//varrendo somente a coluna da matriz
	for(i=0; i<C; i++)
	{
		//verificando se o número que o usuário digitou é o mesmo que se encontra na linha
		if(num==m[lin][i])
		{
			return TRUE;
		}
	}
	
	return FALSE;
}
