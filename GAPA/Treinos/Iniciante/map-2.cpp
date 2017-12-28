#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define i64 long long
#define ii pair<int,int>
#define ll pair<i64,i64>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define vvii vector<vii>
#define eb emplace_back

/*frequencia de um nome digitado*/

using namespace std;

int n,x,m;
string s;
map<string,int> id;

int main(){_

    while (cin>>s){
        cout<<id[s]<<endl;
        id[s]++;
    }

    return 0;
}
