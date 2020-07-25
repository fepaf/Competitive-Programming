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

int m, n, s;
vi a;

int main(){_
    cin >> n >> m;
    a = vi(n);
    for (int &ai : a){
        cin >> ai;
        s = (s-(ai%m)+m)%m;
    }
    cout << s << endl;
    
    return 0;        
}