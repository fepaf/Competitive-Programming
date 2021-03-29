#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
#define MOD 1000000007
#define i64 long long
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
Problem: Tower of Hanoi
Link: https://cses.fi/problemset/task/2165
*/

i64 n;

void f(int ini, int aux, int fim, int n){
    if (!n) return;
    f(ini, fim, aux, n-1);
    cout << ini << ' ' << fim << endl;
    f(aux, ini, fim, n-1);
}

int main(){_
    cin >> n;
    cout << (1<<n)-1 << endl;
    f(1,2,3,n);
    return 0;
}
