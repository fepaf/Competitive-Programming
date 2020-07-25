#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
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
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

int ler(){
    int n;
    scanf("%i",&n);
    return n;
}

int n, x, t, y, z, a ,b , c;
vi e;

int main(){_
    cin >> t;
    while (t--){
        cin >> x >> y >> z;
        e= {x,y,z};
        sort(all(e));

        if (e[1]==e[2] ){
            if (x == y){
                a = x;
                b = z;
                c = z;
            }
            if (x == z){
                a = y;
                b = x;
                c = y;
            }
            if ( y == z){
                a = x;
                b = x;
                c = y;
            }
            cout << "YES" << endl << a << " "<< b << " "<< c << endl;

        }else {
            cout << "NO" << endl;
        }


    }
    return 0;
}
