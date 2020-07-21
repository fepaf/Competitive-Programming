#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ii pair<int, int>
#define fs first
#define sc second
#define vi vector<int>
#define vii vector<ii>
#define eb emplace_back
#define pb push_back

using namespace std;

/*
complexidade linear
*/
int n, m, v[1000123], a[1000123];

int main(){_
    cin >> n >> m;
    for (int i=0; i<n; ++i){
        cin >> v[i];
    }
    for (int i=0; i<m; ++i){
        cin >> a[i];
    }
    return 0;
}

/*
o(3+n+m) - > o(n+m) 
*/
