#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define sz(x) (int)(x).size()
#define fs first
#define sc second
#define pb push_back
#define eb emplace_back
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii>
#define all(x) (x).begin(), (x).end()

using namespace std;

set<ii> cj;
// set<ii, greater<ii> > cj; // decrescente
set<ii>::iterator it;
int n, x, y;

/*
proibidos
x0
x1
y0
i0
i1
j0
j1
*/

int main(){_
    cin >> n;
    for (int i=n; i--;){
        cin >> x >> y;
        cj.insert({x, y});
        // cj.insert(ii(x, y));
    }
    
    cout << "tamanho :" << sz(cj) << endl;
    for (it = cj.begin(); it != cj.end(); it++){
        ii par = (*it);
        cout << par.fs << " " << par.sc << endl;
        // cout << it->fs << " " << it->sc << endl;
    }

    // for (auto [x, y] : cj){
    //     cout << x << " " << y << endl;
    // }

    cj.erase({3,1});
    // cj.erase(cj.begin());
    // cj.erase(cj.find({3,2}));

    cout << "primeiro elemento: " << (cj.begin()->fs) << " " << (cj.begin()->sc) << endl;

    cout << cj.count({2,3}) << endl;
    cout << cj.count({3,2}) << endl;

    cj.clear();
    cout << "tamanho :" << sz(cj) << endl;

    return 0;        
}