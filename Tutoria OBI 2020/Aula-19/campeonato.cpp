#include<bits/stdc++.h>
#define i64 long long
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

i64 c, b, lo, hi, md;

i64 f(i64 n, i64 c){
    if (n >= c) return f((n/c)+n%c, c) + (n/c);
    return (n>=2);
}

int main(){
	while (cin >> c >> b){
        lo = 1LL; hi = 1000000000000000000LL;
        while (lo < hi){
            md = lo + (hi - lo)/2;
            if (f(md, c) >= b) hi = md;
            else lo = md+1;
        }
        cout << lo << endl;
    }
	return 0;
}