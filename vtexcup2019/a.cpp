#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX 100123
#define i64 long long
#define all(x) (x).begin(),(x).end()
#define eb emplace_back
#define ii pair<int, int>
#define vi vector<int>
#define vvi vector<vi>
#define lsb(x) ((x) & -(x))
#define sz(x) ((int)(x).size())
#define fs first
#define sc second

using namespace std;

struct tfc{
    int tin, tout;
};

int n, x, ind, tin, tout;
tfc fc[MAX];

int cmp(tfc a, tfc b){
    if (a.tin != b.tin) return a.tin < b.tin;
    return a.tout < b.tout;
}

int main(){_
    while (cin >> n){

        for (int i=n; i--;){
            cin >> tin >> tout;
            fc[i] = {tin,tout};
        }

        sort(fc, fc+n, cmp);

        x = 0;
        fc[n] = {INF, INF};
        for (int i=0; i<n; ++i){
            // cout << fc[i].tin << " " << fc[i].tout << endl;
            x = max(x, min((fc[i+1].tin - fc[i].tin) , (fc[i].tout - fc[i].tin)));
            fc[i+1].tout = max(fc[i+1].tout, fc[i].tout);
            // cout << "->" << min(fc[i+1].tin - fc[i].tin , fc[i].tout - fc[i].tin) << endl;
        }
        cout << x << endl;
    }
    return 0;
}
