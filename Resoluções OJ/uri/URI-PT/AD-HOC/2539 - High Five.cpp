// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: High Five
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2539

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define INF 0x3f3f3f3f
#define MAX 100123
#define pb push_back
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define vvii vector<vii>
#define vvi vector<vi>
#define fs first
#define sc second
#define int long long

using namespace std;

int n,bit[MAX],pos[MAX],x,ans;

void update(int idx, int val){
    while (idx<=n){
        bit[idx]+=val;
        idx += (idx & -idx);
    }
}

int query(int idx){
    int ans=0;
    while (idx>0){
        ans+=bit[idx];
        idx -= (idx & -idx);
    }
    return ans;
}

signed main(){_
    while (cin>>n){
        for (int i=n;i>=1;i--){
            cin>>x;
            pos[x]=i;
            bit[i]=0;
        }
        for (int i=1;i<=n;i++){
            update(i,1);
        }
        ans=0;
        for (int i=1;i<=n;i++){
            update(pos[i],-1);
            ans+=query(pos[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}

