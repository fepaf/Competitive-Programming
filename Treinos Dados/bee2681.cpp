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

i64 fexpo(i64 b, i64 e, i64 m){
    i64 ans = 1;

    while (e){
        if (e & 1) ans = (ans * b) % m;
        b = (b * b) %m;
        e >>= 1;
    }

    return ans;
}


string x;
char xx[41];
i64 d, t, pot2, nt, h, m, s, ans;
set<i64> cj;

int main(){_
    d = 24*60*60;
    scanf("%s", xx);

    x = xx;

    pot2 = 1;
    cj.insert(1);
    for (int i=1; i<=d; ++i){
        pot2 = (pot2<<1)%d;
        if (cj.count(pot2)){
            t = i;
            break;
        }
        cj.insert(pot2);
    }


    t -= 7;
    
    if (x <= "6" && sz(x)==1){
        ans = fexpo(2, x[0]-'0', d)-1;
    } else {
        nt = 0;

        for (char dig : x){
            nt = (10*nt + (dig-'0'))%t;
        }
        
        // printf("nt %lld\n",nt);


        ans  = fexpo(2, nt, d) - 1;
    }

    // printf("%lld\n", ans);

    s = ans % 60;
    ans /= 60;
    m = ans % 60;
    ans /= 60;
    h = ans;

    printf("%02lld:%02lld:%02lld\n",h,m,s);
    return 0;
}
