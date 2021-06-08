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

int r13, r5, r9;
string n;

int main(){_
    
    cin >> n; //le na base 10, ou seja, "normal"

    r13 = 0;
    for (int i=0; i<n.size(); ++i){
        r13 = (r13*10 + (n[i]-'0'))%13;
    }
    cout << "resto por 13: " << r13 << endl;

    r5 = 0;
    for (int i=0; i<n.size(); ++i){
        r5 = (r5*10 + (n[i]-'0'))%5;
    }
    cout << "resto por 5: " << r5 << endl;

    r9 = 0;
    for (int i=0; i<n.size(); ++i){
        r9 = (r9*10 + (n[i]-'0'))%9;
    }
    cout << "resto por 9: " << r9 << endl;

    

    return 0;
}
