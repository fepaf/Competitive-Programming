// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Sudoku
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1383

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

int l[9],c[9],q[9],sdk,n,ans,caso;

int main(){_
    cin>>n;
    while (n--){
        for (int i=0;i<9;i++){
            for (int j=0;j<9;j++){
                cin>>sdk;
                --sdk;
                l[i]|=(1<<sdk);
                c[j]|=(1<<sdk);
                q[(i/3)*3+(j/3)]|=(1<<sdk);;
            }
        }
        ans=1;
        for (int i=9;i--;){
            ans&=(c[i]==l[i] && l[i]==q[i] && q[i]==(1<<9)-1);
            l[i]=c[i]=q[i]=0;
        }
        cout<<"Instancia "<<++caso<<endl<<(ans ? "SIM" : "NAO")<<endl<<endl;
    }
    return 0;
}

