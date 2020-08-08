#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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

string s;
int ans;
stack<char> p;
char o[1<<8];

int main(){_
    o['B'] = 'S';
    o['C'] = 'F';
    o['F'] = 'C';
    o['S'] = 'B';
    while (cin >> s){
        ans = 0;
         for (char c : s){
             if (!p.empty() && c==o[p.top()]){
                 ++ans;
                 p.pop();
             } else{
                 p.push(c);
             }
         }
         while (!p.empty()) p.pop();
         cout << ans << endl;
    }
    return 0;
}
