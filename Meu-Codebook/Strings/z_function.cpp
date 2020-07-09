#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define vi vector<int>
#define eb emplace_back
#define sz(x) (int)(x).size()

using namespace std;


vi z_function(vi t){
    vi z;
    int l , r, n;
    l = r = 0; n = sz(t); z = vi(n);
    z[0] = 0;//whatever
    for (int i=1; i<n; i++){
        if (i>r) l = r = i;
        z[i] = min(z[i-l],r-i);
        while (i+z[i]<n && t[i+z[i]] == t[z[i]]){
            ++z[i];
            l = i;
            r = i+z[i];
        }
    }
    return z;
}

int n;
vi a, z;

int main(){_
    while (cin >> n){
        a = vi(n);
        for (int i=0; i<n; ++i){
            cin >> a[i];
        }

        z = z_function(a);

        for (int i=0; i<n; ++i){
            cout << a[i] << ' ';
        }
        cout << endl;

        for (int i=0; i<n; ++i){
            cout << z[i] << ' ';
        }
        cout << endl;

    }
    return 0;
}
