// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Frota de Táxi
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2295

    #include <stdio.h>
     
    main (){
    	float a,g,ra,rg;
    	scanf("%f %f %f %f",&a,&g,&ra,&rg);
    	printf("%c\n",((ra/a)>(rg/g)?'A':'G'));
    	return 0;
    }
     
