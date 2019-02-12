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

int n,x,y,menores,b;

int main(){_
    while (cin >> n >> x >> y){
        menores = 0;
        for (int i=n; i--;){
            cin >> b;
            menores += (b<=x);
        }
        if (x>y){
            cout << n << endl;
        }
        else {
            cout << (menores+1)/2 << endl;
        }
    }
    return 0;
}
