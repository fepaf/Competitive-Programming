// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Fase
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2663

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MOD 1000000007
#define MAX 100123
#define INF 0x3f3f3f3f
#define MAXT 52
#define ii pair<ll,ll>
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define eb emplace_back
#define fs first
#define sc second
#define ll long long

using namespace std;

int n,k,a[1<<10],ans;

bool cmp(int a, int b){
    return a>b;
}

int main(){_
    cin>>n>>k;
    for (int i=n;i--;){
        cin>>a[i];
    }
    sort(a,a+n, cmp);
    ans = k;
    for (int i=k; i<n; i++){
        if (a[i] == a[i-1]) {
            ++ans;
        }
        else {
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}

