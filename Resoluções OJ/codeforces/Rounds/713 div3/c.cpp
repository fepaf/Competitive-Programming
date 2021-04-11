#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
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

int t, n, a, b, sim, c[256];
string s;
map<int, int> f;

int ok(string s){
    for (auto c : s){
        if (c=='?') return 0;
    }
    return 1;
}

int main(){_
    for (cin >> t; t--;){
        f.clear();
        cin >> a >> b >> s;
        // W(a)
        // W(b)
        c['0'] = a;
        c['1'] = b;
        n = a+b;
        sim = 1;
        for (int i=0; i<n; ++i){
            f[s[i]]++;
            if (s[i]=='0'){
                sim &= (s[n-1-i]!='1');
            }
            if (s[i]=='1'){
                sim &= (s[n-1-i]!='0');
            }
        }
        c['0'] -= f['0'];
        c['1'] -= f['1'];
        // W(c['0'])
        // W(c['1'])
        if (((a&1) && (b&1)) || !sim){
            cout << -1 << endl;
            continue;
        }
        for (int i=0; i<n; ++i){
            if (s[i]!='?' && c[s[i]] && s[n-1-i]=='?'){
                s[n-1-i] = s[i];
                --c[s[i]];
            } else if (s[n-1-i]!='?' && c[s[n-1-i]] && s[i]=='?'){
                s[i] = s[n-1-i];
                --c[s[n-1-i]];
            }
        }
        // W(s)
        // W(c['0'])
        // W(c['1'])
        for (int i=0; i<n; ++i){
            if ((n&1) && (i==((n-1)>>1))) continue;
            if (s[i]=='?' && s[n-1-i]=='?'){
                if (c['0']>=2){
                    s[i] = s[n-1-i] = '0';
                    c['0']-=2;
                } else if (c['1']>=2){
                    s[i] = s[n-1-i] = '1';
                    c['1']-=2;
                }
            }
        }
        // W(s)
        if ((n&1)){
            if (c['0']) s[((n-1)>>1)] = '0', c['0']--;
            else if (c['1']) s[((n-1)>>1)] = '1', c['1']--;
        }
        // W(s)
        if (ok(s) && !c['0'] && !c['1']) cout << s << endl;
        else cout << -1 << endl;
    }
    return 0;
}
