// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: O Grande Problema
// Nível: 6
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1563

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'

using namespace std;

long long num,den,r,q,i,n;

long long sum_rest(long long n){
    r=sqrt(n);
    long long ssd=0;
    for (long long i=1;i<=r;i++){
        q=n/i;
        ssd+=i*(q-r)+(q*(q+1))/2;
    }
    return n*n-ssd;
}

int main(){_
     while (cin>>n){
        num=sum_rest(n);
        den=n*n;
        cout<<num/__gcd(num,den)<<"/"<<(n>2 ? den/__gcd(num,den) : 1)<<endl;
     }
}

