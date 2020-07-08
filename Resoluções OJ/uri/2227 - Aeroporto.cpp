// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Aeroporto
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2227

    #include <stdio.h>
    #include <string.h>
    int traf[100],x,y,a,v,ma,t,i,qr;
     
    main (){
    	for (t=1;;t++){
    		memset(traf,0,sizeof(traf));
    		ma=0;
    		scanf("%i %i",&a,&v);
    		if ((!a)&&(!v)) break;
    		while (v--){
    			scanf("%i %i",&x,&y);
    			x-- , y--;
    			traf[x]++ , traf[y]++;
    			if (traf[x]>ma) ma=traf[x];
    			if (traf[y]>ma) ma=traf[y];
    		}
    		printf("Teste %i\n",t);
    		for (i=0;i<a;i++) if (traf[i]==ma) printf("%i ",i+1);
    		printf("\n\n");
    	}
    	return 0;
    }
     
