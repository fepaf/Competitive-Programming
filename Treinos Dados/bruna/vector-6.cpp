#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define sz(x) (int)(x).size()
#define pb push_back
#define vi vector<int>

using namespace std;

vi a;
int ai;

/*
Problema: Ler vários números até ser digitado um número negativo, ordenar os números lidos.
obs: desconsiderar a flag.
*/

int main(){_

    while ((cin >> ai) && (ai>=0)){
        a.pb(ai);
    }

    sort(a.begin(), a.end());

    cout << sz(a) << " elementos:" << endl;
    for (int x : a){
        cout << x << ' ';
    }
    
    cout << endl;
    return 0;
}
