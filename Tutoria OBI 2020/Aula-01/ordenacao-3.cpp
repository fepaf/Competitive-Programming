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
ler N pares (A,B)
ordem crescente de A,
desempate ordem crecente de B
*/

vii v;
int n, a, b;

int main(){_
    cin >> n;
    
    v = vii(n);
    
    for (int i=0; i<n; ++i){
        cin >> v[i].fs >> v[i].sc;
    }

    sort(all(v)); //não-descrescente nos dois campos
    
    for (int i=0; i<n; ++i){
        cout << v[i].fs << " " << v[i].sc << endl;
    }
    cout << endl;

    v.clear();
    return 0;
}