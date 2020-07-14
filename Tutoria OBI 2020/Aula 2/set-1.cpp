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

set<int> cj;
set<int>::iterator it;
int n, x;

int main(){_
    cin >> n;
    for (int i=n; i--;){
        cin >> x;
        cj.insert(x);
    }
    for (it = cj.begin(); it != cj.end(); it++){
        x = (*it);
        cout << x << endl;
    }
    return 0;        
}