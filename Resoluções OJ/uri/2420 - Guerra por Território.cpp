// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Guerra por Território
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2420

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX 100123
#define MOD 1000000007
#define UNVISITED -1
#define VISITED 1
#define ull unsigned long long
#define ll long long
#define ii pair<int, int>
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vd vector<double>
#define qi queue<int>
#define fs first
#define sc second
#define pb push_back

using namespace std;

int n,lo,hi,med,a[MAX];

int main(){_
    while (cin>>n){
        a[0]=0;
        for (int i=1;i<=n;i++){
            cin>>a[i];
            a[i]+=a[i-1];
        }
        lo=1, hi=n;
        while (lo<hi){
            med=lo+(hi-lo)/2;
            if (a[med]>=(a[n]>>1)) hi=med;
            else lo=med+1;
        }
        cout<<lo<<endl;
    }
    return 0;
}

