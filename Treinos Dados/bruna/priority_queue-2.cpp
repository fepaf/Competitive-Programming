#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
#define INF 0x3f3f3f3f
#define MAX (1<<20)
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

/*Problema: Dado vários alarmes e seus períodos de Bip em segundos, imprima
a ordem em que os alarmes irão bipar. Se vários alarmes biparem no mesmo segundo
imprime primeiro os de menor nome
*/

int n, nome, prd, t, id;
map<int, int> p;
priority_queue<ii, vii, greater<ii> > pq;

int main(){_
    cin >> n;
    for (int i=0; i<n; ++i){
        cin >> nome >> prd;
        p[nome] = prd;

        pq.push({prd, nome});
    }

    t=0;
    while (t<100){
        ii par = pq.top(); pq.pop();
        t = par.fs, id = par.sc;
        cout << t << ' ' << id << endl;
        pq.push({t+p[id], id});
    }
    return 0;
}
