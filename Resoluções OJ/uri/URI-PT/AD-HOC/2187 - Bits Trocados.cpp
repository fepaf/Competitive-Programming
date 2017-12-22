// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Bits Trocados
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2187

    #include<stdio.h>
     
    main (){
        int v,i,j,k,l,t;
     
        for (t=1;;t++){
            scanf("%i",&v);
     
            if (!v) break;
     
            i=v/50;
            j=(v%50)/10;
            k=((v%50)%10)/5;
            l=(((v%50)%10)%5);
     
            printf("Teste %i\n%i %i %i %i\n\n",t,i,j,k,l);
        }
     
        return 0;
    }
     
