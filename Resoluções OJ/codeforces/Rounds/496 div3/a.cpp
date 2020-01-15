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

int n;
int a[MAX];
int ans[MAX];
int c;

int main(){_
    cin >> n;
    int tam = 1;
    ans[0] = 1;
    for (int i=0; i<n; ++i){
        cin >> a[i];
        if (i){
            if (a[i] <= a[i-1]){
                ans[tam++]=1;
            }
            else{
                ++ans[tam-1];
            }
        }
    }
    cout << tam << endl;
    for (int i=0;i<tam;++i){
        cout << ans[i]<< ' ';
    }
    cout << endl;
	return 0;
}
