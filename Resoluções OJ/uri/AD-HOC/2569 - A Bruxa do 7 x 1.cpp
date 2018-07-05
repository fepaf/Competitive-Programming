// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: A Bruxa do 7 x 1
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2569

#include<bits/stdc++.h>
#define MAX (1<<10)
#define vi  vector <int>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int no7(int n){
    if (!n) return n;
    else return no7(n/10)*10 + (n%10==7 ? 0 : n%10);
}

int a,b;
char op;

int main(){
    while (cin>>a>>op>>b){
        cout<<(op=='+' ? (no7(no7(a)+no7(b))) : (no7(no7(a)*no7(b))))<<endl;
    }
    return 0;
}

