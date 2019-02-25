#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define ii pair<int>
#define vii vector<ii>
#define MAX (1<<6)

int t;
int mo,it;
char a;

int main(){
   int n, m;

   for (cin >> t; t--;){
       cin >> n >> m;
       mo = it = 0;
       for(int i=0; i<n; i++){
           for(int j=0; j<m; j++){
               cin >> a;
               if (i==0 || i==n-1 || j==0 || j==m-1){
                   mo+=(a=='1');
               }
               else {
                   it+=(a=='1');
               }
           }
       }

       if (mo+it<2*m+2*n-4){
           cout << -1 << endl;
       }
       else {
           cout << (2*m+2*n-4 - mo) << endl;
       }
   }

   return 0;
}
