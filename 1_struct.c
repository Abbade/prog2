#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#define MAX 2

typedef struct produto{
	
	int codigo;
	char descricao[30];
	float preco;
	
}Produto;

int main()
{
	Produto vet[MAX];
	Produto ant[MAX];
	int i,resposta;
	float porcentagem,aumento;

	printf("\n--------\n");
	printf("1 para: Cadastrar\n");
	printf("2 para: Reajustar preco\n");
	printf("3 para: Listar preco\n");
	printf("0 para: Sair menu\n");
	scanf("%d",&resposta);
	
	while(resposta != 0)
	{
		switch(resposta)
		{
			case 0:
				break;
				
			case 1:
				for (i = 0 ; i < MAX ; i++)
				{
					printf("Digite o codigo do produto: ");
					scanf("%d",&vet[i].codigo);
		
					fflush(stdin);
		
					printf("Digite a descricao do produto: ");
					gets(vet[i].descricao);
				
					printf("Digite o preco: ");
					scanf("%f",&vet[i].preco);

				}
				break;
			case 2:
				printf("Digite quanto quer aumentar: ");
				scanf("%f",&porcentagem);
	
				aumento = 1+(porcentagem/100);
			
				for (i = 0 ; i < MAX ; i++)
				{
					ant[i].codigo = vet[i].codigo;
					strcpy(ant[i].descricao, vet[i].descricao);
					ant[i].preco = vet[i].preco;
				
				}
			
				for (i = 0 ; i < MAX ; i++)
				{
					vet[i].preco = vet[i].preco * aumento;
				
				}
			
				break;
			
			case 3:
				printf("\t -- PRODUTO ANTERIOR --  \n");
			
				for (i = 0 ; i < MAX ; i++)
				{
					printf("-----\n");
					printf("Produto %d:\n",i+1);
					printf("Codigo:    %d\n",ant[i].codigo);
					printf("Descricao: %s\n",ant[i].descricao);
					printf("Preco:     %.2f\n",ant[i].preco);
				}	
			
				printf("\t -- PRODUTO ATUAL --  \n");
			
				for (i = 0 ; i < MAX ; i++)
				{
					printf("-----\n");
					printf("Produto %d:\n",i+1);
					printf("Codigo:    %d\n",vet[i].codigo);
					printf("Descricao: %s\n",vet[i].descricao);
					printf("Preco:     %.2f\n",vet[i].preco);
				}
			
				break;
			default:
				printf("\nNumero errado!\n");

				break;
		}
		
		printf("\n--------\n");
		printf("1 para: Cadastrar\n");
		printf("2 para: Reajustar preco\n");
		printf("3 para: Listar preco\n");
		printf("0 para: Sair menu\n");
		
		scanf("%d",&resposta);
		
	}

	system("PAUSE");
	return 0;
}
