#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define vi vector<int>
#define MAXN 1010
#define MAXM 1020

using namespace std;

int v[1<<20], n, ans, m;
vi pode;

//subset-sum com repetição de elemento

int main(){_
    while (cin>>n>>m){
        pode = vi(m+1,0);
        
        for (int i=1;i<=n;i++){
            cin>>v[i];
        }
        
        pode[0] = 1;
        for (int i=1;i<=n; i++){
            for (int j=v[i]; j<=m; j++){//mudou a ordem desse for
                if (pode[j-v[i]]) pode[j] = 1;
            }
        }
        
        cout<<(pode[m] ? "SIM" : "NAO")<<endl;
        
        
    }
    return 0;
}
