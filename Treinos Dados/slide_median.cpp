#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
#define MOD 1000000007
#define i64 long long
#define all(x) (x).begin() , (x).end()
#define sz(x) (int)(x).size()
#define ii pair<int, int>
#define fs first
#define sc second
#define eb emplace_back
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define lsb(x) ((x) & (-x))
#define gcd(x,y) __gcd((x),(y))
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

/*
CSES 1076
Slide Median
*/

int n, k, a[MAX];
priority_queue<ii, vii, greater<ii> > baixo;
priority_queue<ii> cima;


int main(){_
    cin >> n >> k;

    for (int i=0; i<n; ++i){
        cin >> a[i];
    }

    for (int i=0; i<k; ++i){
        baixo.push(ii(a[i], i));
    }
    for (int i=0; i<(k>>1); ++i){
        cima.push(baixo.top());
        baixo.pop();
    }

    if (k&1) cout << baixo.top().fs << endl;
    else cout << min(baixo.top().fs, cima.top().fs);

    for (int i=k; i<n; ++i){
        
        if (a[i] <= cima.top().fs){
            cima.push(ii(a[i],i));
            baixo.push(cima.top());
            cima.pop();
        } else {
            baixo.push(ii(a[i],i));
            cima.push(baixo.top());
            baixo.pop();
        }

        while (!cima.empty() && (cima.top().sc <= (i-k))){
            cima.pop();
        }

        while (!baixo.empty() && (baixo.top().sc <= (i-k))) {
            baixo.pop();
        }

        if (k&1) cout << ' ' << baixo.top().fs;
        else cout << ' ' << min(baixo.top().fs, cima.top().fs);
    }
    cout << endl;

    // while (!cima.empty()){
    //     cout << cima.top().fs << ' ' << cima.top().sc << endl;
    //     cima.pop();
    // }
    // cout << "----" << endl;
    // while (!baixo.empty()){
    //     cout << baixo.top().fs << ' ' << baixo.top().sc << endl;
    //     baixo.pop();
    // }
    return 0;
}
