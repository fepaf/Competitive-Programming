#include<bits/stdc++.h>
#define i64 long long
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

int l, c, x, ans;

int main(){
	cin >> l >> c;
    for (int i=2*l*c-1; i--;){
        cin >> x;
        ans ^= x;
    }
    cout << ans << endl;
	return 0;
}