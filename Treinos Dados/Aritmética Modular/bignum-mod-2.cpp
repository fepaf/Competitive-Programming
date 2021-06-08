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

// Problema:  qual o resto da divisão de de N por M
// N <= 10 a (10 a 6)

int m;
int n;
string s;

int main(){_
    cin >> s >> m;
    for (int i=0; i<s.size(); ++i){
        int pot10 = ((10%m * n%m)%m);
        n = ( pot10%m + (s[i]-'0')%m) %m;
    }
    cout <<  (n%m) << endl;
    return 0;
}


