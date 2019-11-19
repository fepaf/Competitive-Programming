#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX (1<<20)

using namespace std;

/*ordena um array de string em ordem crescente*/

string a[MAX];
int n;

int main(){_
    while (cin>>n){
        for (int i=0; i<n; ++i){
            cin>>a[i];
        }
        sort(a,a+n);
        for (int i=0;i<n; ++i){
            cout<<a[i]<<endl;
        }
        cout<<endl;
    }
    return 0;
}
