// Atividade Prática - 04.cpp : define o ponto de entrada para o aplicativo do console.

/*Criar um programa utilizando a linguagem de programação C/C++ que seja capaz de armazenar, 
em uma matriz 3x20, o peso (linha 0), a altura (linha1) e a idade (linha2) de 20 pessoas.
Após armazenado, o programa oferecer ao usuário a possibilidade de ordenar a matriz 
pela idade, pela altura e pelo peso. Uma vez que a forma de ordenação seja selecionada, 
o programa deverá exibir a matriz ordenada,*/

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"

//definir quantidade máxima de pessoas

#define MAX 20

float matriz[3][MAX];

void inserirDados() {
	for (int i = 0; i < MAX; i++) {
		printf("Digite o peso, a idade e a altura de %d pessoas:\n", MAX);
		printf("Peso(kg)......: ");
		scanf_s("%f", &matriz[0][i]);
		printf("Altura(metros): ");
		scanf_s("%f", &matriz[1][i]);
		printf("Idade(anos)...: ");
		scanf_s("%f", &matriz[2][i]);
		system("cls");
	}
} void exibirMatriz() {
	for (int i = 0; i < 3; i++) {
		if (i == 0)
			printf("Peso(kg)......: ");
		if (i == 1)
			printf("Altura(metros): ");
		if (i == 2)
			printf("Idade(anos)...: ");
		for (int j = 0; j < MAX; j++) {
			printf("%.2f ", matriz[i][j]);
		}printf("\n");
	}printf("\n");
} void ordenarPeso() {
	char ch;
	float aux;
	int k = MAX - 1;

	//BubbleSort, ordenação por seleção
		do {
		ch = 'n';
		for (int i = 0; i < k; i++) {
			if (matriz[0][i] > matriz[0][i + 1]) {
				for (int j = 0; j < 3; j++) {
					aux = matriz[j][i];
					matriz[j][i] = matriz[j][i + 1];
					matriz[j][i + 1] = aux;
					ch = 's';
				}
			}
		}k = k - 1;
	} while (ch == 's');
} void ordenarAltura() {
	char ch;
	float aux;
	int k = MAX - 1;
	//BubbleSort, ordenação por seleção
	do {
		ch = 'n';
		for (int i = 0; i < k; i++) {
			if (matriz[1][i] > matriz[1][i + 1]) {
				for (int j = 0; j < 3; j++) {
					aux = matriz[j][i];
					matriz[j][i] = matriz[j][i + 1];
					matriz[j][i + 1] = aux;
					ch = 's';
				}
			}
		}k = k - 1;
	} while (ch == 's');
}void ordenarIdade() {
	char ch;
	float aux;
	int k = MAX - 1;

	//BubbleSort, ordenação por seleção
	do {
		ch = 'n';
		for (int i = 0; i < k; i++) {
			if (matriz[2][i] > matriz[2][i + 1]) {
				for (int j = 0; j < 3; j++) {
					aux = matriz[j][i];
					matriz[j][i] = matriz[j][i + 1];
					matriz[j][i + 1] = aux;
					ch = 's';
				}
			}
		}k = k - 1;
	} while (ch == 's');
} 

int main()
{
	int opt;

	inserirDados();

	do {
		printf("Digite a forma como gostaria de ordenar: \n");
		printf("1 - Por peso\n");
		printf("2 - Por altura\n");
		printf("3 - Por idade\n");
		printf("4 - Sair\n\n");
		printf("Digite sua escolha: ");
		scanf_s("%d", &opt);
		switch (opt)
		{
		case 1:
			ordenarPeso();
			printf("Matriz ordenada por peso:\n");
			exibirMatriz();
			system("pause");
			break;
		case 2:
			ordenarAltura();
			printf("Matriz ordenada por altura:\n");
			exibirMatriz();
			system("pause");
			break;
		case 3:
			ordenarIdade();
			printf("Matriz ordenada por idade:\n");
			exibirMatriz();
			system("pause");
			break;
		case 4:
			printf("\nPrograma encerrado com sucesso!!\n\n");
			system("pause");
			break;
		default:
			printf("\nEscolha Invalida!!\n\n");
			system("pause");
			break;
		}system("cls");
	} while (opt != 4);
	return 0;
}