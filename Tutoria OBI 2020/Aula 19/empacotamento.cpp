#include<bits/stdc++.h>
#define i64 long long
#define MAX (1<<17)
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

int n, m, r, l, a, p, d[MAX], e[MAX];

int main(){
	cin >> n >> m;
    for (int i=0; i<n; ++i){
        cin >> l >> a >> p;
        d[i] = l*l+a*a+p*p;
    }
    for (int i=0; i<m; ++i){
        cin >> r;
        e[i] = 4*r*r;
    }
    sort(d,d+n);
    sort(e,e+m);
    int i, j;
    for (i = j = 0; i<n && j<m;){
        W(i)
        W(d[i])
        W(j)
        W(e[j])
        if (d[i] <= e[j]){
            ++i;
            ++j;
        } else{
            ++j;
        }
    }
    cout << i << endl;
	return 0;
}