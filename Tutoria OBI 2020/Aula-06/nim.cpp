#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAX (1<<20)
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

int a[MAX], n, l, r, ans;
/*

*/
int main(){_
    while (cin >> n){
        ans = 0;
        for (int i=1; i<=n; ++i){
            cin >> a[i];
            ans ^= a[i];
        }
        if (ans != 0){
            cout << "Quem joga primeiro vence" << endl;
        }else {
            cout << "Quem joga por segundo vence" << endl;
        }
    }
    return 0;        
}