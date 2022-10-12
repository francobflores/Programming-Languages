#include<stdio.h>
#include<stdlib.h>

typedef struct aluno
{
  float nota1, nota2, nota3,mediaAluno;
}Aluno;

int main()
{
  int tam;//variavel para guardar o tamanho da turma
  printf( "Informe o tamanho da turma: ");
  scanf("%d", &tam);
  Aluno turma[tam];//vetor que armazena as structs do tipo aluno
  float somaMedia, mediaTurma = 0 ;//para armazenar a soma das médias dos alunos e media dos alunos
  int contaMaiorMedia = 0; //contaodor para alunos acima da média
  int contaMenorMedia = 0; //contador para alunos abaixo da média
  float maiorMedia = 0;
  float menorMedia = 0;

       
  for(int i = 0; i < tam; i++)
  {
    printf("Informe 3 notas do aluno %d\n", i+1);
    scanf("%f %f %f", &turma[i].nota1,&turma[i].nota2, &turma[i].nota3);
    /*scanf("%f", &turma[i].nota1);
    scanf("%f", &turma[i].nota2);
    scanf("%f", &turma[i].nota3);*/
    turma[i].mediaAluno = (turma[i].nota1+turma[i].nota2+turma[i].nota3)/3;
          
    if(turma[i].mediaAluno >= 7) // verifica a media do aluno
    {
      contaMaiorMedia += 1;

    }
    else
    {
      contaMenorMedia += 1;

    }
  }

  for(int i = 0; i < tam; i++ )
  {
    if(turma[i].mediaAluno > turma[i+1].mediaAluno)
    {
        maiorMedia = turma[i].mediaAluno;
    }
    if(turma[i].mediaAluno < turma[i+1].mediaAluno)
    {
      menorMedia = turma[i].mediaAluno;
    }

  } 

  for(int i = 0; i< tam; i++) //soma das médias das turma
  {
    somaMedia += turma[i].mediaAluno;
  }

  mediaTurma = somaMedia / tam;//calculo da média das turma

  for(int i = 0; i < tam; i++)
  {
    printf("Aluno %d prova 1: %.2f\n", i+1, turma[i].nota1);
    printf("Aluno %d prova 2: %.2f\n", i+1, turma[i].nota2);
    printf("Aluno %d prova 3: %.2f\n", i+1, turma[i].nota3);
    printf("Aluno %d media: %.2f\n\n\n", i+1, turma[i].mediaAluno);

  }

  printf("MÉDIA DA TURMA: %.2f\n", mediaTurma);
  printf("ALUNOS ACIMA DA MÉDIA: %d\n", contaMaiorMedia);
  printf("ALUNOS ABAIXO DA MÉDIA: %d\n", contaMenorMedia);
  printf("MAIOR MÉDIA CALCULADA: %.2f\n", maiorMedia);
  printf("MENOR MÉDIA CALCULADA: %.2f\n", menorMedia);

  return 0;

}