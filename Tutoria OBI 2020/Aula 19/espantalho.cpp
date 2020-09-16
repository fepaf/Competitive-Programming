#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);  cout.tie(0);
#define i64 long long
#define MAX (1<<10)
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

int n, m, p[MAX][MAX], a, ans, s1, s2, s3, s4;

int main(){_
	while (scanf("%d %d",&n, &m)!=EOF){
        for (int i=1; i<=n; ++i){
            for (int j=1; j<=m; ++j){
                scanf("%d",&p[i][j]);
                p[i][j] += p[i-1][j] + p[i][j-1] - p[i-1][j-1];
            }
        }
        for (int i=1; i<=n; ++i){
            for (int j=1; j<=m; ++j){
                s1 = p[i][j];
                s2 = p[i][m] - s1;
                s3 = p[n][j] - s1;
                s4 = p[n][m] - s2 - s3 - s1;
                if (s1==s2 && s2==s3 && s3==s4){
                    printf("%d %d\n",i,j);
                    ans = 1;
                }
            }
        }
        if (!ans) printf("-1\n");
    }
	return 0;
}