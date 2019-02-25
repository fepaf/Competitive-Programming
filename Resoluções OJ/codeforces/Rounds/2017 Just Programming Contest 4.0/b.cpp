#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define ii pair<int>
#define vii vector<ii>
#define MAX (1<<10)

int t;
int v[MAX],a0;

int main(){
   int n, m;

   for (cin >> t; t--;){
       cin >> n >> m;

       for(int i=0; i<n; i++){
           cin >> v[i];
       }

       int idx;

       for(idx = 0; v[idx]==-1 && idx<n; idx++);

//		cout << v[idx] << endl;

       a0 = (v[idx]-idx+m)%m;


       for (int i=0; i<n; ++i){
           cout << (a0 + i) % m<< ' '	;
       }

       cout << endl;
   }

   return 0;
}
