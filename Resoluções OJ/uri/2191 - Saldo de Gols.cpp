// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Saldo de Gols
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2191

    #include<stdio.h>
     
    main(){
    	int n,x,y,soma,best,best_i,best_f,itemp,t,i;
    	
    	for (t=1;;t++){
    		scanf("%i",&n);
    		
    		if (!n) break;
    		
    		soma=0;
    		best=-1;
    		itemp=1;
    		for (i=1;i<=n;i++){
    			scanf("%i %i",&x,&y);
    			soma+=(x-y);
    			if (soma<0){
    				soma=0;
    				itemp=i+1;
    			}
    			else if (soma>0 && ((soma>best)||(soma==best && i-itemp>=best_f-best_i))){
    				best=soma;
    				best_i=itemp;
    				best_f=i;
    			}
    		}
    		
    		printf("Teste %i\n",t);
    		if (best==-1) printf("nenhum\n\n");
    		else printf("%i %i\n\n",best_i,best_f);
    	}
    	
    	return 0;
    }
     
