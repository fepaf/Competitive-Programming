// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Saco do Papai Noel
// Nível: 3
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1767

#include<stdio.h>
#define maxn 100
#define maxp 50
   
typedef struct tipo{
    int v,t;
}tipo;
   
tipo pac[maxn+1];
int best[maxn+1][maxp+1],arm[maxn+1][maxp+1],rest[maxn+1][maxp+1];
   
int main(){
    int n,p,i,j;
      
    scanf("%i",&n);
    while (n--){
        scanf("%i",&p);
          
        for (i=1;i<=p;i++){scanf("%i %i",&pac[i].v,&pac[i].t);}
           
        for (i=0;i<=50;i++) best[0][i]=arm[0][i]=rest[0][i]=0;
           
        for (i=1;i<=p;i++){
            best[i][0]=arm[i][0]=rest[i][0]=0;
            for (j=1;j<=50;j++){
                if (pac[i].t<=j){
                    if (best[i-1][j-pac[i].t]+pac[i].v>best[i-1][j]){
                        best[i][j]=best[i-1][j-pac[i].t]+pac[i].v;
                        arm[i][j]=arm[i-1][j-pac[i].t]+pac[i].t;
                        rest[i][j]=rest[i-1][j-pac[i].t]+1;
                    }
                    else{
                        best[i][j]=best[i-1][j];
                        arm[i][j]=arm[i-1][j];
                        rest[i][j]=rest[i-1][j];
                    }
                          
                }
                else {
                    best[i][j]=best[i-1][j];
                    arm[i][j]=arm[i-1][j];
                    rest[i][j]=rest[i-1][j];
                }
  
            }
        }
           
        printf("%i brinquedos\nPeso: %i kg\nsobra(m) %i pacote(s)\n\n",best[p][50],arm[p][50],p-rest[p][50]);
    }
    return 0;
}
