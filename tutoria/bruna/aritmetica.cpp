#include<bits/stdc++.h>

using namespace std;

int x, y, n; // -2**31 <= x < 2**31 ~ 10a9
float a, b; // 6 casas de precisao
char c; 

int main(){

    cin >> x >> y;

    cout << "Teste " << endl;

    int soma = x+y;
    cout << soma << endl;

    int subtracao = x-y;
    cout << subtracao << endl;

    long long int multiplicacao = (1LL * x)*y;
    cout << multiplicacao << endl;

    int divisao = x/y; // -2**63 <= n < 2**63 ~ 10a18
    cout << divisao << endl;
    
    return 0;
}