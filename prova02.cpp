/* ELABORAR UM PROGRAMA QUE CALCULE E ESCREVA O CR DO SEMESTRE PARA OS ALUNOS DE SI. EXISTEM 100 ALUNOS E PARA CADA UM DELES O PROGRAMA DEVERÁ LER O NUMERO
DA MATRICULA, A QUANTIDADE DE DISCIPLINAS CURSADAS E AS NOTAS DE CADA DISCIPLINA. ALEM DO CR DE CADA ALUNO, O PROGRAMA DEVERÁ ESCREVER O VALOR DO MAIOR CR E
A MATRICULA DO ALUNO ( QUE OBTEVE O MAIOR CR). CR = MEDIA ARITIMETICA DAS NOTAS DO ALUNO. */


#include <stdio.h>
#include <stdlib.h>

#define MAX 3

typedef struct ALUNOS {

	int matricula;
	int qtd_disciplina;
	float cr;

} ALUNO;



int main()

{
	  ALUNO maior;
	  maior.cr = 0;
      ALUNO aluno[MAX];
      int i,j;
      int matricula;
      int qtd = 0;
      float total = 0;
      float nota[qtd];
      for (i = 0; i < MAX ; i++)
      {
   
      	printf("Digite matricula: ");
      	scanf("%d",&matricula);
      	aluno[i].matricula = matricula;
      	

      	printf("Digite qtd disciplinas: ");
      	scanf("%i", &qtd);
      	aluno[i].qtd_disciplina = qtd;
		
      	for (j = 0 ; j < aluno[i].qtd_disciplina ; j++)
      	{
      		printf("Digite nota da disciplina[%d]: ", j+1);
 			scanf("%f",&nota[j]);
 			
 			total += nota[j];
      			
		}
		// fazer cr
		aluno[i].cr = total / qtd;

		//resetar o total
 		total = 0;
			
	  } // fim for
	  
	  for (i = 0 ; i < MAX; i++)
	  {
	  	if (aluno[i].cr > maior.cr)
	  	{
	  		maior.matricula = aluno[i].matricula;
	  		maior.cr = aluno[i].cr;
		}
	  }
	  printf("\n\n");
	  printf("Aluno com maior CR: \n");
	  printf("matricula: %d\n",maior.matricula);
	  printf("CR: %.1f\n",maior.cr);
	  
	  /*
	  imprimindo todos os alunos
	  for (i = 0 ; i < MAX; i++)
	  {
	  	printf("------------------\n");
	  	printf("Matricula aluno[%d]: %d\n", i+1,aluno[i].matricula);
	  	printf("QTD disciplina aluno[%d]: %d\n",i+1,aluno[i].qtd_disciplina);
	  	printf("CR aluno[%d]: %.1f\n",i+1, aluno[i].cr);
	  	printf("------------------\n");
	  }
	  	  
	  */
			
			
	system("PAUSE");
	return 0;
}
