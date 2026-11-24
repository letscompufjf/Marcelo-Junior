#include <bits/stdc++.h> 

using namespace std; 
//para ser beautiful, o indice do 1 deve ser (2, 2)
int main() 
{   
    ios::sync_with_stdio(false);   
    cin.tie(nullptr);   
    vector<vector<int>> vet(5, vector<int>(5));
    long long lin, col;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cin >> vet[i][j];
            if(vet[i][j] == 1)
            {
            lin = i;
            col = j;
            }
        }
    }
    int trocas = abs(lin - 2) + abs(col - 2);
    cout << trocas << '\n';
}
