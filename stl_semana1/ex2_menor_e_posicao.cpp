#include <bits/stdc++.h> 

using namespace std; 

int main() 
{   
    ios::sync_with_stdio(false);   
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> vet(n);
    for(int i = 0; i < n; i++)
    {
        cin >> vet[i];
    }
    auto minimo = min_element(vet.begin(), vet.end());
    cout << "Menor valor: " << *minimo << '\n';
    cout << "Posicao: " << minimo - vet.begin() << '\n';
    return 0;
}