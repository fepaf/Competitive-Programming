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

int h1,m1, h2, m2, t1, t2, tot;

int main(){_
    tot = 24*60;
    while ((cin >> h1 >> m1 >> h2 >> m2) && (h1 || m1 || h2 || m2)){
        t1 = h1*60+m1;
        t2 = h2*60+m2;
        cout << (t2-t1 + tot)%tot << endl;
    }
    return 0;        
}