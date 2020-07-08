// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Copa do Mundo
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2459

    #include <iostream>
    #include <algorithm>
    #include <cstdio>
    #define max_a 4950
    #define max_v 100
     
    using namespace std;
     
    typedef struct aresta{
    	int u,v,c;
    }aresta;
     
    aresta a[max_a];
    int tam[max_v],arv[max_v];
     
    bool cmp(const aresta a1,const aresta a2){
    	return	a1.c < a2.c;
    }
     
    int find(int n){
    	if (n!=arv[n]) return arv[n]=find(arv[n]);// fica atento
    	return arv[n];
    }
     
    void join(int a,int b){
    	int c1,c2,aux;
    	c1 = find(a);
    	c2 = find(b);
    	if (tam[c1]<tam[c2]){
    		aux=c1;
    		c1=c2;
    		c2=aux;
    	}
    	arv[c2]=c1;
    	tam[c1]+=tam[c2];
    }
     
    main (){
    	int n,f,r,i,j,res=0;
    	scanf("%i %i %i",&n,&f,&r);
    	for (i=0;i<n;i++){
    		arv[i]=i;
    		tam[i]=1;
    	}
    	for (i=0;i<f;i++){
    		scanf("%i %i %i",&a[i].u,&a[i].v,&a[i].c);
    		a[i].u-- , a[i].v--;
    	}
    	sort(a,a+f,cmp);
    	for (i=f;i<f+r;i++){
    		scanf("%i %i %i",&a[i].u,&a[i].v,&a[i].c);
    		a[i].u-- , a[i].v--;
    	}
    	sort(a+f,a+f+r,cmp);
    	for (i=0,j=1;i<f+r && j<n;i++){
    		if (find(arv[a[i].u])!=find(arv[a[i].v])){
    			join(a[i].u,a[i].v);
    			res+=a[i].c;
    			j++;
    		}
    	}
    	printf("%i\n",res);
    	return 0;
    }
     
