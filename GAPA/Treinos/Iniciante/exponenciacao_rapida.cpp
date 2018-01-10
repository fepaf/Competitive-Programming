#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define i64 long long

using namespace std;

i64 fexp(i64 base, i64 expoente, i64 modulo){
    i64 ans = 1;
    while (expoente){
        if (expoente&1) ans = (ans * base) % modulo;
        base = (base * base) % modulo;
        expoente >>= 1;
    }
    return ans;
}


int x, y, z;

int main(){_
    while (cin>>x>>y>>z){
        cout<<fexp(x,y,z)<<endl; // calcula x elevado a y modulo z
    }
    return 0;
}
