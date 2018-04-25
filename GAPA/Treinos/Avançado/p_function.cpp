#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define vi vector<int>
#define eb emplace_back
#define sz(x) (int)(x).size()

using namespace std;


vi p_function(vi t){
    int n = sz(t);
    vi p = vi(n);
    p[0] = 0;
    for (int i=1; i<n; i++){
        p[i] = p[i-1];
        while (t[i] != t[p[i]] && p[i]) p[i] = p[p[i]-1];
        p[i] += (t[i] == t[p[i]]);
    }
    return p;
}

int n;
vi a, p;

int main(){_
    while (cin >> n){
        a = vi(n);
        for (int i=0; i<n; ++i){
            cin >> a[i];
        }

        p = p_function(a);

        for (int i=0; i<n; ++i){
            cout << a[i] << ' ';
        }
        cout << endl;

        for (int i=0; i<n; ++i){
            cout << p[i] << ' ';
        }
        cout << endl;

    }
    return 0;
}
