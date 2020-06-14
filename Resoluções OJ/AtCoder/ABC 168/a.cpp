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

using namespace std;

int n;

int main(){_
    cin >> n;
    n %=10;
    if (n==2 || n==4 || n==5 || n==7 || n==9) cout << "hon"<< endl;
    else if (n==0 || n==1 || n==6 || n==8) cout << "pon"<< endl;
    else cout << "bon" << endl;
    return 0;
}