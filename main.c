#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printar_vetor(int* vetor, int n) 
{
    for(int i = 0; i < n; i++)
    {
        printf("%d \n", vetor[i]);
    }
}

int main(void)
{
    srand(time(0));

    FILE *arquivo;

    arquivo = fopen("grafo2.txt", "r");

    if(!arquivo) 
    {
        printf("Erro ao tentar abrir o arquivo");
        return 1;
    }

    int n, m;
    m = 0;

    fscanf(arquivo, "%d", &n);

    int *vertices = (int*) malloc(sizeof(int) * n);

    for(int i = 0; i < n; i++)
    {
        fscanf(arquivo, "%d", &vertices[i]);
    }

    printf("Vértices: \n");
    printar_vetor(vertices, n);

    
    int **arestas = NULL;
    
    int a, b, i, j;
    j = 0;
    i = 0;

    while(fscanf(arquivo, "%d %d", &a, &b) == 2) 
    {

        arestas = realloc(arestas, sizeof(int*) * (i + 1));

        arestas[i] = (int*) malloc(sizeof(int) * 2);
        arestas[i][0] = a;
        arestas[i][1] = b;
        m++;
        i++;
    }
    fclose(arquivo);

    printf("Arestas: \n");

   for(i = 0; i < m; i++)
   {
    for(j = 0; j < 2; j++)
    {
        printf("%d ", arestas[i][j]);
    }
    printf("\n");
   }

   //A partir daqui começa o sistema de randomização
   printf("Insira o vértice de início: ");
   int input;
   scanf("%d", &input);
   int canditatos[100];
   int controle = 0;
   int k;

   for(k = 0; k < 100; k++){
   for(i = 0; i < m; i++) 
   {
        if(arestas[i][0] == input)
        {
            canditatos[controle] = arestas[i][1];
            controle++;
        }
    
   }

   if(controle == 0)
   {
    printf("%d \n", input);
    break;
   }

    printf("%d -> ", input);
    input = canditatos[rand() % controle];
    controle = 0;
    
   }

   //Liberando a memória
   for(i = 0; i < m; i++)
        free(arestas[i]);
    free(arestas);
    free(vertices);

    return 0;

}