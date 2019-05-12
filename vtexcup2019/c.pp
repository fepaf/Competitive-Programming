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

struct tfunc{
    int tin, tout;
};

int n;

int cmp(tfunc a, tfunc b){
    if (a.tin != b.tin) return a.tin < b.tin;
    return a.tout < b.tout;
}

tfunc func[MAX];

int main(){_
    while (cin >> n){
        for (int i=n; i--;){
            cin >> func[i].tin >> func[i].tout;
        }
        sort(func, func+n, cmp);

    }
    return 0;
}
