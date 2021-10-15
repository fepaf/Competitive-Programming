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

int t, n, fq[5], parcial, ans, sum;
string s;

struct word{
    int f[5];
};

word words[MAX];

int cmp1(word a, word b){
    return a.f[0] > b.f[0];
}

int cmp2(word a, word b){
    return a.f[1] > b.f[1];
}

int cmp3(word a, word b){
    return a.f[2] > b.f[2];
}

int cmp4(word a, word b){
    return a.f[3] > b.f[3];
}

int cmp5(word a, word b){
    return a.f[4] > b.f[4];
}



int main(){_
    for (cin >> t; t--;){
        cin >> n;
        for (int i=0; i<n; ++i){
            cin >> s;
            for (char c : s){
                ++fq[c-'a'];
            }
            for (int j=0; j<5; ++j){
                words[i].f[j] = fq[j]-(sz(s)-fq[j]);
                fq[j] = 0;
            }
        }

        ans = 0;
        
        parcial = sum = 0;
        sort(words, words+n, cmp1);
        for (int i=0; i<n; ++i){    
            if (sum + words[i].f[0] > 0){
                sum += words[i].f[0];
                ++parcial;
            } else{
                break;
            }
        }
        ans = max(ans, parcial);

        parcial = sum = 0;
        sort(words, words+n, cmp2);
        for (int i=0; i<n; ++i){    
            if (sum + words[i].f[1] > 0){
                sum += words[i].f[1];
                ++parcial;
            } else{
                break;
            }
        }
        ans = max(ans, parcial);

        parcial = sum = 0;
        sort(words, words+n, cmp3);
        for (int i=0; i<n; ++i){    
            if (sum + words[i].f[2] > 0){
                sum += words[i].f[2];
                ++parcial;
            } else{
                break;
            }
        }
        ans = max(ans, parcial);

        parcial = sum = 0;
        sort(words, words+n, cmp4);
        for (int i=0; i<n; ++i){    
            if (sum + words[i].f[3] > 0){
                sum += words[i].f[3];
                ++parcial;
            } else{
                break;
            }
        }
        ans = max(ans, parcial);

        parcial = sum = 0;
        sort(words, words+n, cmp5);
        for (int i=0; i<n; ++i){    
            if (sum + words[i].f[4] > 0){
                sum += words[i].f[4];
                ++parcial;
            } else{
                break;
            }
        }
        ans = max(ans, parcial);

        cout << ans << endl;       
    }
    return 0;
}
