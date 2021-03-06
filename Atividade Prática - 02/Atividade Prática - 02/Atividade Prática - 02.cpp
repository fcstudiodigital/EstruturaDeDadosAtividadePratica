// Atividade Prática - 02.cpp : define o ponto de entrada para o aplicativo do console.

/*Utilizando a linguagem de programação C/C++ crie um program que demonstre o uso de 
uma estrutura de dados do tipo fila de inteiros que use como elemento de armazenamento 
uma estrutura do tiplo lista encadeada. Certifique-se que sua estrutura de fila tenha 
funções para inserir, apagar, criar e mostrar o conteúdo da lista além de uma função 
para devolver o tamanho da fila e outra para esvaziar a fila. Observe também que, 
para resolver este problema você precisará, obrigatoriamente utilizar alocação dinâmica 
de memória e que para testar a fila o usuário deve ter acesso a um menu contendo todas 
as funções especificadas.*/

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"

struct Fila

{
	int num;
	Fila *prox;
};

Fila *inicio, *fim, *aux;
int contar = 0;

void Inserir() {
	Fila *novo = (struct Fila *)malloc(sizeof(struct Fila));

	printf("\nDigite um numero inteiro para ser inserido na fila: ");
	scanf_s("%d", &novo->num);

	novo->prox = NULL;

	if (inicio == NULL) { //Inserir o primeiro elemento

			inicio = fim = novo;
	}else{
		fim->prox = novo;
	fim = novo;

	}contar++;

} void Apagar() {
	if (inicio == NULL) {
		printf("\nA fila esta vazia!\n\n");
	}else{
		printf("\nO numero %d foi apagado do inicio da fila\n\n", inicio->num);
	aux = inicio;
	inicio = inicio->prox;
	free(aux); // Liberar espaço na memória
	contar--;
	}
} void Esvaziar() {
		char ch;
		if (inicio == NULL) {
			printf("\nA fila esta vazia!\n\n");
		}else{
			printf("\nTem certeza que deseja esvaziar toda a fila?(s/n): ");
		ch = getchar();
		if (ch == 's' || ch == 'S') {
			while (inicio != NULL) {
				aux = inicio;
				inicio = inicio->prox;
				free(aux); // Liberar espaço na memória
				contar--;
			}printf("\nA fila foi esvaziada com sucesso!!\n\n");
		}else{
			printf("\nA fila nao foi esvaziada!!\n\n");
			}
		}
	} void Mostrar() {
			aux = inicio;
			if (inicio == NULL) {
				printf("\nA fila esta vazia!");
			}else{
				while (aux != NULL) {
					printf("%d ", aux->num);
					aux = aux->prox;
				}
			}printf("\n\n");
		} void Tamanho() {
			if (inicio == NULL) {
				printf("\nA fila esta vazia!\n\n");
			}else{
				printf("\nA fila contem %d elementos!\n\n", contar);
			}
		} int main() {
				int opt, c;
				do {
					printf("\tMenu de Escolhas\n");
					printf("1 - Inserir um elemento\n");
					printf("2 - Apagar um elemento\n");
					printf("3 - Mostrar toda fila\n");
					printf("4 - Tamanho da fila\n");
					printf("5 - Esvaziar fila\n");
					printf("6 - Sair\n\n");
					printf("Digite sua escolha: ");
					scanf_s("%d", &opt);
					while ((c = getchar()) != '\n' && c != EOF) {} // Esvaziar buffer

					switch (opt) {

					case 1:
						Inserir();
						printf("\nElemento inserido com sucesso!!\n\n");
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
						Tamanho();
						system("pause");
						break;
					case 5:
						Esvaziar();
						system("pause");
						break;
					case 6:
						printf("\nO programa foi encerrado com sucesso!!\n\n");
						system("pause");
						break;
					default:
						printf("\nEscolha Invalida!!\n\n");
						system("pause");
						break;
					}system("cls");
				} while (opt != 6);
				return 0;
			}