// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Pão a Metro
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2329

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX 10123
#define EPS (1e-7)
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

int n,k,m[MAX],lo,hi,mid,p;

int main(){_
    while (cin>>n>>k){
        hi=0;
        for (int i=k;i--;){
            cin>>m[i];
            hi=max(m[i],hi);
        }
        lo=1;
        while (lo<hi){
            mid=lo+(hi-lo)/2;
            p=0;
            for (int i=k;i--;){
                p+=(m[i]/mid);
            }
            if (p>=n) lo=mid+1;
            else hi=mid;
        }
        cout<<lo-1<<endl;
    }
    return 0;
}

