// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Frequencia na Aula
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2410

    #include <stdio.h>
     
    int f[1000000];
     
    main (){
    	int n,v,res=0;
    	scanf("%i",&n);
    	while (n--){
    		scanf("%i",&v);	
    		if (f[v]==0){
    			f[v]=1;
    			res++;
    		}
    	}
    	printf("%i\n",res);
    	return 0;
    }
     
