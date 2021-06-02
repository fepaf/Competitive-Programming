#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define sz(x) (int)(x).size()
#define pb push_back
#define fs first
#define sc second
#define ii pair<int, int>
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<ii>

using namespace std;

/*
Problema: Vou receber começo e fim do intervalo, ordenar pelo começo, desempate pelo fim
*/

// vector<pair<int, int>> intervalos;
vii intervalos;
int x, y, n;

int main(){_
    cin >> n;
    for (int i=0; i<n; ++i){
        cin >> x >> y;
        intervalos.pb({x,y});
        // intervalos.pb(ii(x,y));
    }

    sort(intervalos.begin(), intervalos.end());

    // for (int i=0; i<n; ++i){
    //     cout << intervalos[i].fs << ' ' << intervalos[i].sc << endl;
    // }

    for (auto [i, j] : intervalos){
        cout << i << ' ' << j << endl;
    }

    return 0;
}
