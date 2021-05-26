#include<bits/stdc++.h>

using namespace std;

int n, ans, m, s, x;

int main(){
    cin >> n;
    for (int i=0; i<n; ++i){
        cin >> x;
        s+=x;
    }
    cin >> m;
    for (int i=0; i<m; ++i){
        cin >> x;
        s+=x;
    }
    cout << s << endl;
    return 0;
}

//O(2*N+2*M+5)