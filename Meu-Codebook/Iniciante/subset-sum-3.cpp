#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define vi vector<long long>//pode crescer muito
#define MAXN 1010
#define MAXM 1020

using namespace std;

int v[1<<20], n, ans, m;
vi ways;

//subset-sum  quantas formas de obter a soma sem repetição de elemento

int main(){_
    while (cin>>n>>m){
        ways = vi(m+1,0);
        
        for (int i=1;i<=n;i++){
            cin>>v[i];
        }
        
        ways[0] = 1;
        for (int i=1;i<=n; i++){
            for (int j=m; j>=v[i]; j++){//sem repetir elemento
                ways[j] += ways[j-v[i]];
            }
        }
        
        cout<<(ways[m] ? "SIM" : "NAO")<<endl;
        
        
    }
    return 0;
}
