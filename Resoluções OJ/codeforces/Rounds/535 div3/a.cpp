#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define INF 0x3f3f3f3f
#define eb emplace_back
#define lsb(x) ((x)&-(x))

using namespace std;

int q,l1,r1,l2,r2;

int main(){_
    cin >> q;
    while (q--){
        cin >> l1 >> r1 >> l2 >> r2;
        if (r2 != l1){
            cout << l1 << " " << r2 << endl;
        }
        else if (l2 != l1){
            cout << l1 << " " << l2 << endl;
        }
        else if (l2 != r1){
            cout << r1 << " " << l2 << endl;
        }
        else if (r1 != r2){
            cout << r1 << " " << r2 << endl;
        }
    

    }
    return 0;
}
