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


int fexpo(i64 b, i64 e, i64 m){
    if (e  == 0){
        return 1 % m;
    }

    i64 raiz = fexpo(b, e/2, m);

    i64 ans = (raiz * raiz) %  m;
    
    if (e % 2 == 1){
        ans = (ans * b) % m;
    }

    return ans;
}

int fast(int b, int e, int m){
    int ans = 1;

    while (e != 0){ // e
        if (e % 2 == 1) ans = (ans * b) % m; // if (e & 1) ans = ans * b;
        b = (b * b) % m;
        e /= 2;  // e = (e >> 1) // e >>= 1
    }

    return ans;
}


/*
(a + b) % m  == ((a%m) + (b%m)) % m
(a * b) % m  == ((a%m) * (b%m)) % m
*/

int b, e, m;

int main(){_
    while (cin >> b >> e >> m){
        cout << fexpo(b,e,m) << endl;
    }
    return 0;
}
