#include<stdio.h>
#include<stdlib.h>

typedef struct aluno
{
  float nota1, nota2, nota3,mediaAluno;
}Aluno;

int main()
{
       int tam;
       printf( "Informe o tamanho da turma: ");
       scanf("%d", &tam);
       Aluno turma[tam];

       for(int i = 0; i < tam; i++)
       {    
        printf("Informe 3 notas do aluno %d\n", i+1);
        scanf("%f", &turma[i].nota1);
        scanf("%f", &turma[i].nota2);
        scanf("%f", &turma[i].nota3);
        turma[i].mediaAluno = (turma[i].nota1+turma[i].nota2+turma[i].nota3)/3;
        
       }

       for(int i = 0; i < tam; i++)
       {
        printf("Aluno %d prova 1: %.2f\n", i+1, turma[i].nota1);
        printf("Aluno %d prova 2: %.2f\n", i+1, turma[i].nota2);
        printf("Aluno %d prova 3: %.2f\n", i+1, turma[i].nota3);
        printf("Aluno %d media: %.2f\n\n\n", i+1, turma[i].mediaAluno);

       
       }






       return 0;

}