#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
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

using namespace std;

int n, k;
vi a;

int f(int n, int k){
    if (!n) return 0;
    else return (f(n-1,k)+k)%n;
}

int main(){_
    cin >> n;
    a = vi(n);
    for (int &k : a){
        cin >> k;
    }
    for (int k : a){
        if (f(n,k)==0){
            cout << k << endl;
            return 0;
        }
    }
    cout << "Nao quero mais brincar!" << endl;
    return 0;
}
