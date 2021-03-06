// Atividade Prática - 03.cpp : define o ponto de entrada para o aplicativo do console.

/*Utilizando a linguagem de programação C/C++ crie um programa que utilize a estrutura 
de dados conhecida como fila para armazenar até 50 inteiros que use como elemento de 
armazenamento um vetor (array). 
Observe que seu programa deverá possuir pelo menos três funções do tipo void chamadas 
de inserir, apagar e mostrar e que o usuário dever ter acesso a um menu de opções que 
permita a inclusão, exclusão e apresentação dos valores contidos armazenados nesta fila.
Cabe ao programador a responsabilidade de avisar ao usuário erros comuns como fila cheia e vazia.*/

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"

#define MAX 50

int fila[MAX];
int fim = -1;
void Inserir() {
	int num;
	if (fim == MAX - 1)
		printf("\nA fila esta cheia!!\n\n");
	else {
		printf("\nDigite um numero a ser inserido na fila: ");
		scanf_s("%d", &num);
		fim++;
		fila[fim] = num;
		printf("\nNumero inserido com sucesso!!\n\n");
	}
} void Apagar() {
	int num;
	if (fim == -1)
		printf("\nA fila esta vazia!!\n\n");
	else {
		printf("\nO numero apagado foi: %d\n\n", fila[0]);

		for (int i = 0; i <= fim; i++) {
			fila[i] = fila[i + 1];
		}fim--;
	}
} void Mostrar() {
	if (fim == -1)
		printf("\nA fila esta vazia!!");
	else {
		printf("\nNumeros na fila: \n");
		for (int i = 0; i <= fim; i++) {
			printf("%d ", fila[i]);
		}
	}printf("\n\n");
} int main()
{
	int opt;
	do {
		system("cls");
		printf("\tMenu\n");
		printf("1 - Inserir um numero inteiro na fila\n");
		printf("2 - Apagar um numero inteiro da fila\n");
		printf("3 - Mostrar todos os numeros da fila\n");
		printf("4 - Sair\n\n");
		printf("Digite sua escolha: ");
		scanf_s("%d", &opt);
		switch (opt)
		{
		case 1:
			Inserir();
			system("pause");
			break;
		case 2:
			Apagar();
			system("pause");
			break;
		case 3:
			Mostrar();
			system("pause");
			break;
		case 4:
			printf("\nPrograma encerrado com sucesso!!\n\n");
			system("pause");
			break;
		default:
			printf("\nOpcao invalida!\n\n");
			system("pause");
			break;
		}
	} while (opt != 4);
	return 0;
}