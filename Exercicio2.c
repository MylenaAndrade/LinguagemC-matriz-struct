#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
Desenvolver uma fun��o que, dada uma matriz
M15�20, determine se um n�mero X se encontra
na linha L da matriz.
*/
//constantes de linha e coluna para a matriz
#define L 3
#define C 2
#define TRUE 1
#define FALSE 0

//mostrando que existe fun��es
void preencherMatriz( float m[L][C]);
void exibirMatriz(float m[L][C]);
int numLinha(float m[L][C], float num, int lin);

void main(){
	//declar��o de vari�veis
	float matriz[L][C], numero;
	int linha;
	
	//chamando as fun��es
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

int numLinha(float m[L][C], float num, int lin){
	int i;
	
	//diminuindo um valor da linha porque o primeiro n�mero do for � *0* n�o *1*
	lin--;
	
	//varrendo somente a coluna da matriz
	for(i=0; i<C; i++)
	{
		//verificando se o n�mero que o usu�rio digitou � o mesmo que se encontra na linha
		if(num==m[lin][i])
		{
			return TRUE;
		}
	}
	
	return FALSE;
}
