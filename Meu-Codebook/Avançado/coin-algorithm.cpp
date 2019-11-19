#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define vi vector<int>
#define MAXN 1010
#define MAXM 1020
#define INF 0x3f3f3f3f

using namespace std;

int nota[1<<20], n, ans, m;
vi minimo;

int main(){_
    while (cin>>n>>m){
        minimo = vi(m+1,0);
        
        for (int i=1;i<=n;i++){
            cin>>nota[i];
        }
        
        minimo[0] = 0;
        for (int i=1; i<=m; i++){//para cada troco possivel
            minimo[i] = INF;
            for (int j=1; j<=n; j++){//para cada tipo de nota possivel
                if (nota[j] <= i){
                    minimo[i] = min(minimo[i], minimo[i-nota[j]]+1);
                }
            }
        }
        
        cout<<(minimo[m])<<endl;
        
        
    }
    return 0;
}
