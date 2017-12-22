// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Quem Vai Ser Reprovado?
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2134

    #include <string.h>
    #include <stdio.h>
    #include <stdlib.h>
     
    struct s{
        char nome[21];
        int nota;
    };
     
    struct s aluno[100];
     
    int cmp(const void *a,const void *b){
        int r=((struct s*)b)->nota-((struct s*)a)->nota;
        if (r!=0)
            return r;
        return(strcmp(((struct s*)a)->nome,((struct s*)b)->nome));
    }
     
    main(){
        int i,n,t;
         
        for (t=1;;t++){
            if ((scanf("%i",&n))==EOF) break;
             
            for (i=0;i<n;i++)
                scanf("%s %i",&aluno[i].nome,&aluno[i].nota);
             
            qsort(aluno,n,sizeof(struct s),cmp);
             
            printf("Instancia %i\n%s\n\n",t,aluno[n-1].nome);
        }
        return 0;      
    } 
