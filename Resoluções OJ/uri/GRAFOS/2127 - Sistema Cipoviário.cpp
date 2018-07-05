// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Sistema Cipoviário
// Nível: 6
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2127

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
    #define maxv 1000
    #define maxa 2000000
     
    using namespace std;
     
    struct a{
    	long long int c;
    	int u,v;
    }cipo[maxa];
     
    int arv[maxv],tam[maxv];
     
    int find(int n){
    	if (arv[n]!=n) return (arv[n]=find(arv[n]));
    	return arv[n];
    }
     
    void join(int u,int v){
    	int v1=find(u);
    	int v2=find(v);
    	int aux;
    	
    	if (tam[v1]<tam[v2]){
    		aux=v1;
    		v1=v2;
    		v2=aux;
    	}
    	
    	arv[v2]=v1;
    	tam[v1]+=tam[v2];
    }
     
    bool cmp(const struct a u,const struct a v){
    	return u.c<v.c;
    }
     
    int main(){_
    	int n,m,t=1,i,j,u,v;
    	long long int resp;
    	while (scanf("%i",&n)!=EOF){
    		scanf("%i",&m);
    		
    		resp=0;
    		
    		for (i=0;i<n;i++){
    			arv[i]=i;
    			tam[i]=1;
    		}
    		
    		for (i=0;i<m;i++){
    			scanf("%i %i %lld",&cipo[i].u,&cipo[i].v,&cipo[i].c);
    			cipo[i].u-- , cipo[i].v--;
    		}
    		
    		sort(cipo,cipo+m,cmp);
    		
    		for (i=0,j=1;i<m && j<n;i++){
    			u=find(cipo[i].u);
    			v=find(cipo[i].v);
    			
    			if (u!=v){
    				resp+=cipo[i].c;
    				join(u,v);
    				j++;
    			}
    		}
    		
    		printf("Instancia %i\n%lld\n\n",t++,resp);
    	}
    	return 0;
    } 
