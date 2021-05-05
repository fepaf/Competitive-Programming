#include<bits/stdc++.h>

using namespace std;

int x, y, n; // -2**31 <= x < 2**31 ~ 10a9
float a, b; // 6 casas de precisao
char c; 
string s, r;

int main(){
    // se sei que vou ler com cin antes de um getline, limpo o buffer
    cin >> n;
    getchar();
    getline(cin, s);
    getline(cin, r);

    cout << "inteiro " << n << endl;

    cout << "nome " << s << endl;
    cout << "tamanho " << s.size() << endl;
   
    cout << "nome " << r << endl;
    cout << "tamanho " << r.size() << endl;
    return 0;
}