#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define INF 0x3f3f3f3f
#define MAX 200123
#define i64 long long
#define vi vector<int>
#define vvi vector<vi>
#define all(x) (x).begin() , (x).end()
#define eb emplace_back
#define fs first
#define sc second
#define lsb(x) ((x)&-(x))

using namespace std;

i64 n;

int main(){_
    cin >> n;
    if (((n*(n+1))/2)&1){
        cout << 1 << endl;
    }
    else {
        cout << 0 << endl;
    }
    return 0;
}
