// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Popularidade no Facebook
// Nível: 8
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1462

#include<bits/stdc++.h>
#define int long long
#define MAX 100123
#define lsb(x) ((x) & (-x))
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n,lo,hi,mid,a[MAX],acum[MAX],holds;

bool cmp(int a, int b){return a>b;}

signed main(){_
    while (cin>>n){
        holds=1;
        for (int i=1;i<=n;i++){
            cin>>a[i];
            holds&=(a[i]<n);
        }
        sort(a+1,a+n+1,cmp);
        for (int i=1;i<=n;i++){
            acum[i]=acum[i-1]+a[i];
        }
        holds&=!(acum[n]&1);
        for (int k=1;k<=n;k++){
            lo=k+1 , hi=n;
            // cout<<a[k]<<" ";
            while (lo<hi){
                mid=lo+(hi-lo)/2;
                if (a[mid]<k) hi=mid;
                else lo=mid+1;
            }
            // cout<<"("<<lo<<") [";
            holds&=(acum[k]<=k*(k-1)+(lo-k-1)*k+(acum[n]-acum[lo-1]));
            // cout<<acum[k]<<" "<<k*(k-1)<<" "<<(lo-k-1)*k<<" "<<(acum[n]-acum[lo-1])<<" "<<"] ";
        }
        // cout<<endl;
        cout<<(holds ? "possivel" : "impossivel")<<endl;
    }
    return 0;
}

