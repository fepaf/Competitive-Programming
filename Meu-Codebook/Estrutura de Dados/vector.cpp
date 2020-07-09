#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

vector<int> v;
vector<string> a;
int n;

int main(){_
    while (cin>>n){
        v = vector<int>(n);
        for (int i=0;i<n;i++){
            cin>>v[i];
        }
        for (int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
