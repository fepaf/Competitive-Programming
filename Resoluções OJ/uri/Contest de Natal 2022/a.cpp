#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
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

int cnt, di, dj;
char tab[8][8];

int main(){_
    for (int i=0; i<8; ++i){
        for (int j=0; j<8; ++j){
            cin >> tab[i][j];
        }
    }
    for (int i=0; i<8; ++i){
        for (int j=0; j<8; ++j){
            cnt = 0;
            for (int a=i-2; a<=i+2; ++a){
                if (a<0 || a>7) continue;
                for (int b=j-2; b<=j+2; ++b){
                    if (b<0 || b>7) continue;
                    di = abs(a-i); dj = abs(b-j);
                    cnt += (di*di + dj*dj == 5 && tab[a][b]=='*');
                }
            }
            cout << (char)(tab[i][j] == '.' ? cnt+'0' : tab[i][j]);    
        }
        cout << endl;
    }    
    return 0;
}
