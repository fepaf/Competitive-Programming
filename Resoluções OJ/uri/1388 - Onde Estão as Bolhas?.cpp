#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define INF 0x3f3f3f3f
#define endl '\n'
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
#define lsb(x) ((x) & -(x))
#define gcd(x,y) __gcd((x),(y))
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

int n, m, idx, pos;
vi x;
vi ans;

vi ft;
void ft_update(int idx, int val){
    while (idx <= n){
        ft[idx] += val;
        idx += lsb(idx); 
    }
}

int ft_lower_bound(int val){ //retorna indice do primeiro x >= ans
    int idx = 0, jump, msb;
    for (int i=17; i>=0; --i){
        jump = (1<<i);
        if ((idx + jump <= n) && (ft[idx + jump] < val)){
            idx += jump;
            val -= ft[idx];
        }
    }
    return (idx + 1);
}


int main(){_
    while ((cin >> n >> m) && (n | m)){

        ft = vi(n+1);
        for (int i=1; i<=n; ++i){
            ft_update(i, 1);
        }
        idx = 1;
        x = vi(m); ans = vi(n);
        for (int &xi : x){
            cin >> xi;
            pos = ft_lower_bound(xi);
            ans[pos] = idx++;
            ft_update(pos, -1);
        }
        for (int i=0; i<n; ++i){
            cout << (ans[i] ? ans[i] : idx++);
            if (i < n-1) cout << ' ';
        }
        cout << endl;
    }
    return 0;
}