#include<bits/stdc++.h>

using namespace std;

int x, y, n, i; // -2**31 <= x < 2**31 ~ 10a9
float a, b; // 6 casas de precisao
char c; 
string s, r;

int main(){
    cin >> n;
    // imprime se é positivo, ou se é negativo e multiplo de 5, ou se ele é igual a zero
    if (n>0 || (n<0 && n%5==0) || !(n!=0) ){
        cout << "bom" << endl;
    }
    else {
        cout << "mal" << endl;
    } 
    return 0;
}