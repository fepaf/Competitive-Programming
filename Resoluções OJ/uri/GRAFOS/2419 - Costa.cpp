// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Costa
// Nível: 5
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2419

    #include<stdio.h>
    #include<string.h>
     
    int i,j,m,n,qtd=0,map[1002][1002];
    char c;
     
    main (){
    	scanf("%i %i",&m,&n);
    	
    	for (i=1;i<=m;i++){
    		for (j=1;j<=n;j++){ 
    			scanf(" %c",&c);
    			if (c=='#') map[i][j]=1;
    		}
    	}
    	
    	for (i=1;i<=m;i++){
    		for (j=1;j<=n;j++){
    			if ((map[i][j])&&!((map[i-1][j])&&(map[i][j-1])&&(map[i+1][j])&&(map[i][j+1]))) qtd++;
    		}
    	}
    	
    	printf("%i\n",qtd);
    	
    	return 0;
    }
     
