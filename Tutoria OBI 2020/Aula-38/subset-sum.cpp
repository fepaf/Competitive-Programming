#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX (1<<10)
#define MAXS (1<<10)

using namespace std;

int n; // quantidade de elementos no A[]
int a[MAX];
int s;
int dp[MAXS];// dp[i]=1 diz se a soma i é possível, dp[i]=0 caso contrario

int main(){_
    cin >> n >> s;
    for (int i=0; i<n; ++i){
        cin >> a[i];
    }

    dp[0] = 1;
    for (int i=0; i<n; i++){
        for (int soma=s; soma>=a[i]; --soma){
            if (dp[soma]==1 || dp[soma-a[i]]==1){
                dp[soma] = 1;
            }
        }
    }

    cout << (dp[s] ? "sim" : "nao") << endl;
}