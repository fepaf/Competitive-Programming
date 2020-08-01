#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAX (1<<10) // aproximdamente 1000,
#define MOD (int)(1e9+7)
#define i64 long long
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

i64 ans, d, n;
string s;

int main(){_
    while (cin >> s){
        n=0;
        for (char c : s){
            d = c - 'A';
            n = (n*26LL+d)%MOD;
        }
        cout << n << endl;
    }
    return 0;        
}