// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: DJ da Computação
// Nível: 5
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1265

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX 100000000
#define vs vector<string>
#define pb push_back
#define ll long long

using namespace std;

int n,q,k,dig,i;
ll spow[35];
string musica[1<<5];

string conv(ll n, ll b, ll qdig, ll pos){
    vs number;
    while (qdig--){
        number.insert(number.begin(),musica[n%b]);
        n/=b;
    }
    return number[pos];
}

int main(){_
    while (cin>>n>>q && (n+q)){
        for (i=0;i<n;i++){
            cin>>musica[i];
        }
        for (spow[0]=0 , i=1; spow[i]<=MAX; i++) spow[i]=spow[i-1]+pow(n,i)*i;//danger
        while(q--){
            cin>>k;
            for (dig=1;spow[dig]<k;dig++);
            k-=spow[dig-1]+1;
            cout<<conv(k/dig,n,dig,k%dig)<<endl;
            // cout<<i<<" :"<<dig<<" -> "<<spow[dig-1]<<" -> "<<k/dig<<"-"<<k%dig<<endl;//debug
        }
        cout<<endl;
    }
    return 0;
}

