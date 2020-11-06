#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define i64 long long
#define MAX (1<<20)
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

i64 n, f[10], ans, x;
char o;

int main(){_
    cin >> n;
    while (n--){
        cin >> x >> o;
        while (x%2==0){
            f[2] += (o == '*' ? 1 : -1);
            x/=2;
        }
        while (x%3==0){
            f[3] += (o == '*' ? 1 : -1);
            x/=3;
        }
        while (x%5==0){
            f[5] += (o == '*' ? 1 : -1);
            x/=5;
        }
        while (x%7==0){
            f[7] += (o == '*' ? 1 : -1);
            x/=7;
        }
    }
    ans = 1;
    for (int i=10; i-- > 0;){
        for (int j=f[i]; j--;){
            ans *= i;
        }
    }
    cout << ans << endl;
    return 0;
}