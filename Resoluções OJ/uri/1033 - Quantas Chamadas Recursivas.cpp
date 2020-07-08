// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Quantas Chamadas Recursivas?
// Nível: 4
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1033

#include <stdio.h>

void multiply(int F[2][2], int M[2][2],int m);
 
void power(int F[2][2], long long int n,int m);
 
int fib(long long int n,int m)
{
  int F[2][2] = {{1,1},{1,0}};
  
  power(F, n, m);
  return ((2*F[0][0])+m-1)%m;
}

void power(int F[2][2], long long int n, int m)
{
  if( n == 0 || n == 1)
      return;
  int M[2][2] = {{1,1},{1,0}};
 
  power(F, n/2, m);
  multiply(F, F, m);
 
  if (n%2 != 0)
     multiply(F, M, m);
}
 
void multiply(int F[2][2], int M[2][2], int m)
{
  int x =  (((F[0][0]%m)*(M[0][0]%m))%m + ((F[0][1]%m)*(M[1][0]%m))%m)%m;
  int y =  (((F[0][0]%m)*(M[0][1]%m))%m + ((F[0][1]%m)*(M[1][1]%m))%m)%m;
  int z =  (((F[1][0]%m)*(M[0][0]%m))%m + ((F[1][1]%m)*(M[1][0]%m))%m)%m;
  int w =  (((F[1][0]%m)*(M[0][1]%m))%m + ((F[1][1]%m)*(M[1][1]%m))%m)%m; 
  F[0][0] = x;
  F[0][1] = y;
  F[1][0] = z;
  F[1][1] = w;
}
 
int main()
{
  int b,c,t=1;
  long long int n;
  while (scanf("%lli %i",&n,&b)==2 && (n||b)){printf("Case %i: %lli %i %i\n",t++,n,b,fib(n,b));}
  return 0;
}
  

