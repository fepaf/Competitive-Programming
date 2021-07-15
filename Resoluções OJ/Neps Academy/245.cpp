#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
#define INF 0x3f3f3f3f
#define MAX 102
#define OUT MAX
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
#define esq(x) (x<<1)
#define dir(x) ((x<<1)|1)
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

int g, p, s, q, v[MAX], pt[MAX], pos[MAX][MAX], x, winner;
set<int> camp;

int main(){_
    while ((cin >> g >> p) && (g || p)){
        for (int i=0; i<g; ++i){
            for (int j=1; j<=p; ++j){
                cin >> x;
                pos[i][x] = j;
            }
        }
        cin >> s;
        while (s--){
            cin >> q;
            for (int i=1; i<=q; ++i){
                cin >> v[i];
                for (int j=0; j<g; j++){
                    pt[pos[j][i]] += v[i];
                }
            }
            winner = 0;
            for (int i=1; i<=p; ++i){
                winner = pt[i] > pt[winner] ? i : winner; 
            }
            for (int i=1; i<=p; ++i){
                if (pt[i] == pt[winner]){
                    camp.insert(i);
                }
            }
            for (int i=1; i<=p; ++i){
                pt[i] = 0;
            }
            
            for (int x : camp){
                cout << x << ' ';
            }
            cout << endl;
            camp.clear();
        }
    }
    return 0;
}
