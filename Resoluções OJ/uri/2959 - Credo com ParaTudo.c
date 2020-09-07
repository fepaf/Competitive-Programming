#include<stdio.h>
#define MAX (1<<9)
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))

int n, m, p, u, v, i, j, k, d[MAX][MAX];

int main(){
    scanf("%d %d %d", &n, &m , &p);
    for (i=n+1; i--;){
        for (j=n+1; j--;){
            d[i][j] = (i==j);
        }
    }
    while (m--){
        scanf("%d %d", &u, &v);
        d[u][v] = d[v][u] = 1;
    }
    for (k=n+1; --k;){
        for (i=n+1; i--;){
            for (j=n+1; j--;){
                d[i][j] |= (d[i][k]&d[k][j]);
            }
        }
    }
    while (p--){
        scanf("%d %d", &u, &v);
        printf("%s\n", (d[u][v] ? "Lets que lets" : "Deu ruim"));
    }
    return 0;
}