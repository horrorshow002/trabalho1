Escreva um programa em C que lê um grafo direcionado de um arquivo de texto e a partir de um vértice inicial indicado, imprime um caminho aleatório.

O formato do arquivo deve ser:

Um número indicando a quantidade de vértices.
Uma lista de vértices (números inteiros), um em cada linha.
Uma lista de arestas na representação de par ordenado.
O programa deve:

Usar um vetor alocado dinamicamente para guardar todos os vértices.
Usar uma matriz alocada dinamicamente para guardar as arestas, onde cada linha tem duas colunas: uma coluna representa o vértice de saída, e a outra representa o vértice de entrada da aresta.
Imprimir a lista de vértices e arestas lidos do arquivo.
A partir de um vértice escolhido pelo usuário, tentar acessar um caminho de tamanho aleatório.
      - Se um vértice tem mais de uma aresta de saída, escolher uma também de forma aleatória.
Guardar o caminho percorrido em um vetor, e imprimi-lo no final do programa.
Bônus:

Fazer com que a escolha do caminho evite ciclos.
Permitir que o usuário escolha qual caminho prosseguir se há mais de uma opção.
Exemplo de entrada:

6
0
1
2
3
4
5
0 2
0 4
0 5
1 4
1 5
2 3
2 4
4 5

Texto de resposta Questão 1
