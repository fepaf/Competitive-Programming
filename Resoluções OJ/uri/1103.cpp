#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int h1,m1,h2,m2,t1,t2;

int main(){_
    while ((cin>>h1>>m1>>h2>>m2) && (h1 || m1 || h2 || m2)){
        t1=h1*60+m1;
        t2=h2*60+m2;
        cout<<((t2-t1)+1440)%1440<<endl;
    }
    return 0;
}

// n%m
// ((n%m)+m)%m
