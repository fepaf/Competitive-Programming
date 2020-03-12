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

int a, b, a1, b1, a2, b2;

int main(){_
    cin >> a >> b >> a1 >> b1 >> a2 >> b2;
    int menor = min(a, b);
    int maior = max(a, b);
    int ans = 0;
    ans |= (min(a1+a2, max(b1, b2)) <= menor && max(a1+a2, max(b1, b2)) <= maior);
    ans |= (min(a1+b2, max(b1, a2)) <= menor && max(a1+b2, max(b1, a2)) <= maior);
    ans |= (min(b1+a2, max(a1, b2)) <= menor && max(b1+a2, max(a1, b2)) <= maior);
    ans |= (min(b1+b2, max(a1, a2)) <= menor && max(b1+b2, max(a1, a2)) <= maior);
    cout << (ans ? "YES" : "NO") << endl;
    return 0;
}
