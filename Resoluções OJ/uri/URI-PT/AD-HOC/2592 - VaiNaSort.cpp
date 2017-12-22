// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: VaiNaSort
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2592

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define INF 0x3f3f3f3f
#define pb push_back
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define vvii vector<vii>
#define vvi vector<vi>
#define fs first
#define sc second

using namespace std;

int n,x,ord,ans;

int main(){_
    while (cin>>n && n){
        ans=0;
        do{
            ord=1;
            for (int i=1;i<=n;i++){
                cin>>x;
                ord&=(x==i);
            }
            ans++;
        }while (!ord);
        cout<<ans<<endl;
    }
    return 0;
}

