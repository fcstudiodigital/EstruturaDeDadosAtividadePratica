// Atividade Prática - 01.cpp : define o ponto de entrada para o aplicativo do console.

/* Utilizando a linguagem de programação C/C++ você deve criar um programa capaz de armazenar um 
número indefinido de inteiros na memória. Este programa deverá solicitar ao usuário 
o tamanho do vetor que armazenará este número, criar as estruturas necessárias, 
solicitar ao usuário que digite cada um dos números que serão armazenados e imprimir 
o conjunto de números armazenados e a soma destes números*/

#include "stdafx.h"
#include "stdio.h" 
#include "stdlib.h"

int main()
{
	int *arr; 
	int limite, soma = 0;

	printf("Digite a quantidade de numeros inteiros que gostaria de armazenar: "); 
	scanf_s("%d", &limite);

	//Alocação  de memória
	arr = (int *)malloc(limite * sizeof(int));

	//Verificação se nao excede a memoria total 
	if (arr == NULL) { printf("Memoria insuficiente para armazenar esta quantidade de numeros inteiros!\n\n"); 
	system("pause");
	return 0;
}
printf("Digite %d numeros inteiros: \n", limite); 
for (int i = 0; i < limite; i++) {
	printf("Digite o %d numero: ", i + 1);
	scanf_s("%d", (arr + i));
	soma += *(arr + i);
}
printf("\nNumeros digitados: \n"); 
for (int i = 0; i < limite; i++) {
	printf("%d	", *(arr + i));
}
printf("\n\nSoma dos numeros digitados: %d\n\n", soma);
system("pause");
return 0;
}
