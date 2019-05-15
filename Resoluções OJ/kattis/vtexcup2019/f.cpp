#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX 1123
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

int n,dim;
vvi boxs;

int cmp(vi a, vi b){
    for (int i=0; i<3; ++i){
        if (a[i] != b[i]) return a[i] < b[i];
    }
    return a[0] < b[0];
}

char ans(){
    for (int i=1; i<n; i++){
        for (int j=0; j<3; ++j){
            if (boxs[i][j] <= boxs[i-1][j]) return 'N';
        }
    }
    return 'S';
}

int main(){_
    while (cin >> n){
        boxs = vvi(n,vi(3));
        for (int i=0; i<n; ++i){
            for (int j=0; j<3; ++j){
                cin >> boxs[i][j];
            }
            sort(all(boxs[i]));
        }

        sort(all(boxs), cmp);

        cout << ans() << endl;

    }
    return 0;
}
