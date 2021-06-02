#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define sz(x) (int)(x).size()
#define pb push_back
#define vi vector<int>

using namespace std;

vi a, b;
int n, ai;

int main(){_

    cin >> n;
    a = vi(n, -1);
    for (int i=0; i<n; ++i){
        cin >> a[i];
    }

    cin >> n;
    for (int i=0; i<n; ++i){
        cin >> ai;
        b.pb(ai);
    }

    for (int i=0; i<sz(a); ++i){
        cout << a[i] << ' ';
    }
    cout <<  endl;


    for (int i=0; i<sz(b); ++i){
        cout << b[i] << ' ';
    }
    cout <<  endl;

    return 0;
}
