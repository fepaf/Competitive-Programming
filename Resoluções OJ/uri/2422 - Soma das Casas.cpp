// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Soma das Casas
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2422

/*WA*/
#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX 102
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

int n, k, x, lo, hi, med, s, b, a;
vi c;

int main(){_
    while (cin>>n){
        c=vi(n,0);
        for (int i=0;i<n;i++){
            cin>>c[i];
        }
        cin>>k;
        for (int i=0;i<n-1;i++){
            lo=i+1, hi=n-1, a=c[i], b=k-c[i];
            while (lo<hi){
                med=lo+(hi-lo)/2;
                if (c[med]>=b) hi=med;
                else lo=med+1;
            }
            if (c[lo]==b){
                cout<<a<<" "<<b<<endl;
                break;
            }
        }
    }
    return 0;
}

