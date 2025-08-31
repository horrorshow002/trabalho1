#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() 
{
    srand(time(0));

    ifstream arquivo("grafo.txt");

    if(!arquivo.is_open())
    {
        cerr << "Erro ao tentar abrir o arquivo" << endl;
        return 1;
    }

    int n, m;
    arquivo >> n >> m;
    
    vector<vector<int>> grafo(n);

    for(int i = 0; i < m; i++)
    {
        int u, v;
        arquivo >> u >> v;
        grafo[u].push_back(v);
    }

    for (int i = 0; i < 10; i++)
    {
        
    }

    return 0;
}