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

int fexpo(int b, int e, int m){
    int ans = 1;
    while (e){
        if (e&1) ans = (ans*b)%m;
        b = (b*b)%m;
        e >>=1;
    }
    return ans;
}

/*
a**(p-1) % p = 1;
a**(p-2) % p = inv(a, p);
*/

int m, r;
int n;

int main(){_
    cin >> n >> m;
    cout << fexpo(n, m-2, m) << endl;
    return 0;        
}