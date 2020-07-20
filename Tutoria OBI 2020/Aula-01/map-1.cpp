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

/*
crescente idd
descrecente alt
crescente indice
*/

map<int, int> f;
map<int, int>::iterator it;
int x, n;

int main(){_
    cin >> n;
    while (n--){
        cin >> x;
        f[x]++;
    }
    for (it = f.begin(); it != f.end(); it++){
        int k = it->fs, v = it->sc;
        cout << k << " :" << v << endl;
    }
    return 0;
}