#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF (2e18)
#define MAX (100)
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
#define branco 0
#define cinza -1
#define preto 1

using namespace std;

/*
Problem: Tasks and Deadlines
Link: https://cses.fi/problemset/task/1630
*/

i64 n, ans, t;
vii tasks;

int main(){_
    cin >> n;
    tasks = vii(n);
    for (int i=n; i--;){
        cin >> tasks[i].fs >> tasks[i].sc;
    }
    sort(all(tasks));
    t = 0;
    for (auto [a, d] : tasks){
        t += a;
        ans += d-t; 
    }
    cout << ans << endl;
    return 0;     
}
