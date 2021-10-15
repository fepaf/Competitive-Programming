#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAX (1<<5)
#define i64 long long

using namespace std;

struct duende{
    string s;
    int i;
};

duende a[MAX];
int n;

int main(){_
    cin >> n;
    for (int i=0; i<n; ++i){
        cin >> a[i].s >> a[i].i;
    }
    sort(a, a+n, [](duende a, duende b){
        if (a.i != b.i) return a.i > b.i;
        return a.s < b.s;
    });
    for (int i=0; 3*i<n; ++i){
        if (i) cout << endl;
        cout << "Time " << (i+1) << endl;
        cout << a[i].s << ' ' << a[i].i << endl;
        cout << a[i+(n/3)].s << ' ' << a[i+(n/3)].i << endl;
        cout << a[i+2*(n/3)].s << ' ' << a[i+2*(n/3)].i << endl;
    }
    return 0;
}