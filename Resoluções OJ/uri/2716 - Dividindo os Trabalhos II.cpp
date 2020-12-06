#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAX 1500001

using namespace std;

bitset<MAX> can;
int n, x, sum, ans, tam;

int main(){_
    tam = can.size();
    while (cin>>n){
        can[0] = true;
        sum = 0;
        for (int i=0; i<n; ++i){
            cin >> x;
            sum += x;
            can |= (can<<x);
        }
        ans = sum+1;
        for (int i=can._Find_first(); i<tam; i=can._Find_next(i)){
            if (can.test(i) && can.test(sum-i) && abs(sum-i-i)<=ans){
                ans = abs(sum-i-i);
            }
        }
        cout << ans << endl;
        can.reset();
    }
    return 0;
}