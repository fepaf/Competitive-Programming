#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
#define MOD 1000000007
#define i64 unsigned long long
#define all(x) (x).begin() , (x).end()
#define sz(x) (int)(x).size()
#define ii antr<int, int>
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
Problem: Grid Paths
Link: https://cses.fi/problemset/task/1625
*/

string s;
set<i64> rep;
map<i64, int> vis;

int count(i64 mask,int last, int idx){
    W(bitset<49>(mask))

    if (mask == ((1LL<<48)-1)) return 1;
    
    i64 ans = 0;
    if (last % 7 != 6 && !(mask & (1LL<<(last+1))) && (s[idx]=='?' || s[idx]=='R')){
        ans += count(mask|(1LL<<(last+1)), last+1, idx+1);
    }
    if (last % 7 != 0 && !(mask & (1LL<<(last-1))) && (s[idx]=='?' || s[idx]=='L')){
        ans += count(mask|(1LL<<(last-1)), last-1, idx+1);
    }
    if (last / 7 != 6 && !(mask & (1LL<<(last+7))) && (s[idx]=='?' || s[idx]=='D')){
        ans += count(mask|(1LL<<(last+7)), last+7, idx+1);
    }
    if (last / 7 != 0 && !(mask & (1LL<<(last-7))) && (s[idx]=='?' || s[idx]=='U')){
        ans += count(mask|(1LL<<(last-7)), last-7, idx+1);
    }

    return ans;
}

int main(){_
    cin >> s;
    cout << count(1, 0, 0) << endl;
}
