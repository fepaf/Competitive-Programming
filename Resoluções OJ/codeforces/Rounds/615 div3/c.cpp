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

int t;
int n;

vi primos;
int ehcomposto[1000123];

void crivo(int n){
    primos.eb(2);
    for (int i=3; i*i<=n; i+=2){
        if (!ehcomposto[i]){
            primos.eb(i);
            for (int j = i*i; j<=n; j+=2*i){
                ehcomposto[j]=1;
            }
        }
    }
    int t = primos.size();
    for (int i=primos[t-1]+2; i<=n; i+=2){
        if (!ehcomposto[i]){
            primos.eb(i);
        }
    }
}

int e,a, b,c;
vi fat;
vi expo;
vi ans;
vi dcp;

int main(){_
    crivo(100000);
    cin >> t;
    while (t--){
        cin >> n;
        int m = n;
        for (int p : primos){
            if (m==1) break;
            if (m%p==0){
                fat.eb(p);
                e = 0;
                while(m%p==0){
                    ++e;
                    m/=p;
                    dcp.eb(p);
                }
                expo.eb(e);
            }
        }
        if (m!=1){
            expo.eb(1);
            fat.eb(m);
        }
        int s=0;
        for (int i=sz(fat); i--;){
            s += expo[i];
        }
/*        for (int x : dcp){
            cout << " " << x << endl;
        }
 */       int f = sz(fat);
        if ((f==1 && s>=6) || (f==2 && s>=4) || f>=3){
            cout << "YES" << endl;
            a = dcp[0];
            b = (dcp[0] != dcp[1] ? dcp[1] : dcp[1]*dcp[2]);
            n /= a;
            n /= b;
            c = n;
            cout << a << ' ' << b << ' ' << c << endl;
        }
        else {
            cout << "NO" << endl;
        }

        fat.clear();
        expo.clear();
        dcp.clear();
    }
	return 0;
}
