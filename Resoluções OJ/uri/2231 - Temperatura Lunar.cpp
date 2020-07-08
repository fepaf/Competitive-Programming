// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Temperatura Lunar
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2231

    #include <stdio.h>
     
    main (){
    	int t,i,n,k,s,x,y,med,temp[10000];
    	
    	for (t=1;;t++){
    		scanf("%i %i",&n,&k);
    		
    		if (!(n)&&!(k)) break;
    		
    		s=0;
    		x=+201;
    		y=-201;
    		for (i=0;i<n;i++){
    			scanf("%i",&temp[i]);
    			
    			if (i<k) s+=temp[i];
    			else s+=temp[i]-temp[i-k];
    			
    			if (i>=k-1){
    				med=s/k;
    				if (x > med) x=med;
    				if (y < med) y=med;
    			}
    		}
    		
    		printf("Teste %i\n%i %i\n\n",t,x,y);
    	}
    	
    	return 0;
    }
     
