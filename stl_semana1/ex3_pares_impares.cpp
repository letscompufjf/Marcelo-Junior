#include <bits/stdc++.h> 

using namespace std; 

int main() 
{   
    ios::sync_with_stdio(false);   
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int>pares;
    vector<int>impares;
    for(int i = 0; i < n; i++)
    {
        int valor;
        cin >> valor;
        if(valor % 2 == 0)
            pares.push_back(valor);
        else
            impares.push_back(valor);
    }
    sort(pares.begin(), pares.end());
    sort(impares.begin(), impares.end(), greater<>());
    for(int x : pares)
        cout << x << '\n';
    for(int x : impares)
        cout << x << '\n';
    return 0;   
}