// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Sequencia Completa de Nae...
// Nível: 5
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2697

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define vi vector<int>
#define pb push_back
#define fs first
#define sc second

using namespace std;

vi f;
int x,k,n,low,high;
set<int> ok;

int main(){_
    while (cin>>k>>n){
        f = vi(k+1,0);
        while (n--){
            cin>>x;
            f[x]++;
        }

        low=high=1;
        for (int i=1; i<=k; i++){
            if (f[i]<f[low]) {
                low = i;
            }
            if (f[i]>f[high]){
                high = i;
            }
        }

        f[low]++;
        for (int i=1; i<=k; i++){
            ok.insert(f[i]);
        }
        f[low]--;

        if (ok.size()==1){
            cout<<'+'<<low<<endl;
            continue;
        }
        ok.clear();

        f[high]--;
        for (int i=1; i<=k; i++){
            ok.insert(f[i]);
        }
        f[high]++;

        if (ok.size()==1){
            cout<<'-'<<high<<endl;
            continue;
        }
        ok.clear();

        f[low]++;
        f[high]--;
        for (int i=1; i<=k; i++){
            ok.insert(f[i]);
        }
        f[low]--;
        f[high]++;

        if (ok.size()==1){
            cout<<'-'<<high<<" +"<<low<<endl;
            continue;
        }
        ok.clear();

        cout<<"*"<<endl;
    }

    return 0;
}

