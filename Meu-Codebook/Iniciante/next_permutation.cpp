#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define i64 long long
#define si pair<int,string>
#define vsi vector<si>
#define vi vector<int>
#define fs first
#define sc second
#define eb emplace_back
#define ALL(x) (x).begin() , (x).end()

using namespace std;

/*imprime todas as permutações de S*/

string s;

int main(){_
    while (cin>>s){
        sort(ALL(s));
        do{
            cout<<s<<endl;
        }while(next_permutation(ALL(s)));
        cout<<endl;
    }
    return 0;
}
