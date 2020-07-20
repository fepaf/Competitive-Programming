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

vi v;
int n;

int main(){_
    cin >> n;
    v = vi(n);
    
    for (int i=0; i<n; ++i){
        cin >> v[i];
    }

    sort(all(v), greater<int>()); //não-crescente
    
    for (int i=0; i<n; ++i){
        cout << v[i] << " ";
    }
    cout << endl;

    v.clear();
    return 0;
}