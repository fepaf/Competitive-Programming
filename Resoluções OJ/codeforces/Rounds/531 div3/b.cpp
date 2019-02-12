#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define INF 0x3f3f3f3f
#define MAX 200123
#define i64 long long
#define vi vector<int>
#define vvi vector<vi>
#define all(x) (x).begin() , (x).end()
#define eb emplace_back
#define fs first
#define sc second
#define lsb(x) ((x)&-(x))

using namespace std;

int n,k,ok;
map<int,int> f;
map<int, set<int> > used;
set<int> cj;
vi a;

int main(){_
    while (cin >> n >> k){
        a = vi(n); ok = 1; cj.clear(); f.clear(); used.clear();

        for (int i=0; i<n; ++i){
            cin >> a[i];
            // cj.insert(a[i]);
            ok &= ((++f[a[i]]) <= k);
        }

        //ok &= ((int)(cj.size()) >= k);

        if (ok){
            f.clear();
            cout << "YES" << endl;
            int cod = 0;
            for (int i=0; i<n; ++i){
                while (used[a[i]].count(cod)){
                    cod = (cod+1)%k;
                }
                cout << cod+1 << ' ';
                used[a[i]].insert(cod);
                cod = (cod+1)%k;
            }
            cout << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

}
