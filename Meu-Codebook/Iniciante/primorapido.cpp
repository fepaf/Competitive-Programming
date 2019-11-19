#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MOD int(10e9)+7
#define UNVISITED -1
#define VISITED 1
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii>
#define vd vector<double>
#define qi queue<int>
#define fs first
#define sc second

using namespace std;

int ehprimo(int n){
    if ((n<5) || (n%2==0) || (n%3==0)) return ((n==2)||(n==3));
    for (int i=5; i*i<=n; i+=6) if ((n%i==0)||(n%(i+2)==0)) return 0;
    return 1;
}

int n, x;

int main(){_
    for (cin>>n;n--;){
        cin>>x;
        cout<<(ehprimo(x) ? "Prime" : "Not Prime")<<endl;
    }
    return 0;
}
