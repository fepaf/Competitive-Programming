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

int m, r, x, b;
string n;

// imprima N%M, sendo a representação de N dada na base B

int main(){_
    cin >> n >> m >> b;
    
    // x = 0;
    r = 0;
    for (int i=0; i<n.size(); ++i){
        // x = b*x+(n[i]-'0');
        r = (((b%m)*(r%m))%m+(n[i]-'0')%m)%m;
    }

    // cout << (x) << endl;
    cout << r <<  endl;
    return 0;
}
