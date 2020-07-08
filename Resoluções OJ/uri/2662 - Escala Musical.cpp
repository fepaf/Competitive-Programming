// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Escala Musical
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2662

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

int n,x,ivt[]={2,2,1,2,2,2,1},tons[12],music,k,idx;
string ans[]={"do","do#","re","re#","mi","fa","fa#","sol","sol#","la","la#","si"};

int main(){
    cin>>n;
    for (int i=0;i<12;i++){
        k = i;
        for (int j=0;j<7;j++){
            tons[i] |= (1<<k);
            k = (k+ivt[j])%12;
        }
    }
    while (n--){
        cin>>x;
        x=(x-1)%12;
        music |= (1<<x);
    }
    idx = -1;
    for (int i=0;i<12;i++){
        if ((music | tons[i]) == tons[i]){
            idx = i;
            break;
        }
    }
    if (idx == -1){
        cout<<"desafinado"<<endl;
    }
    else {
        cout<<ans[idx]<<endl;
    }
}

