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

using namespace std;

int ler(){
    int n;
    scanf("%i",&n);
    return n;
}


map<int,int> cost;
int n, p, ans;
vi cmd;

int main(){_
    while ((cin >> n) && n){
        cmd = vi(n);
        for (int &p : cmd){
            cin >> p;
            cost[p] = p;
        }
        ans = 0;
        for (int p : cmd){
            ans += cost[p];
            cost[p] = 0;
            for (auto &[x, q] : cost){
                ++q;
            }
        }
        cout << ans << endl;
        cost.clear();
    }
    return 0;
}
