//Questão D, Maratona SBC de Programação 2026

#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    char mat[n][m];
    int cont = 0;
    bool conte = true;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }

    if (n == m)
    {

        // 100  001 direita
        // 000  000
        // 000  000

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (mat[i][j] != mat[m - j - 1][i])
                {
                    conte = false;
                }
            }
        }
        if (conte)
        {
            cont++;
        }
        conte = true;

        // 100  000 esquerda
        // 000  000
        // 000  100

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (mat[i][j] != mat[j][n - 1 - i])
                {
                    conte = false;
                }
            }
        }
        if (conte)
        {
            cont++;
        }
        conte = true;

        // 100  000 direita e translada
        // 000  000
        // 000  100

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (mat[i][j] != mat[j][i])
                {
                    conte = false;
                }
            }
        }
        if (conte)
        {
            cont++;
        }
        conte = true;

        // 100  000 esquerda e translada
        // 000  000
        // 000  100

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (mat[i][j] != mat[m - 1 - j][n - i - 1])
                {
                    conte = false;
                }
            }
        }
        if (conte)
        {
            cont++;
        }
        conte = true;
    }

    // 100  100 ele mesmo
    // 000  000

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] != mat[i][j])
            {
                conte = false;
            }
        }
    }
    if (conte)
    {
        cont++;
    }
    conte = true;

    // 100  001 troca lado horizontalmente
    // 000  000
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] != mat[i][m - j - 1])
            {
                conte = false;
            }
        }
    }
    if (conte)
    {
        cont++;
    }
    conte = true;

    // 100  000 troca lado verticalmente
    // 000  100
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] != mat[n - i - 1][j])
            {
                conte = false;
            }
        }
    }
    if (conte)
    {
        cont++;
    }
    conte = true;

    // 100  000 troca lado vertical e horizontal
    // 000  001
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] != mat[n - i - 1][m - j - 1])
            {
                conte = false;
            }
        }
    }
    if (conte)
    {
        cont++;
    }
    conte = true;

    cout << cont << endl;

    return 0;
}
