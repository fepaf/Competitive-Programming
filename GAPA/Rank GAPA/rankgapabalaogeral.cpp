#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MOD 1000000007
#define MAX 100123
#define INF 0x3f3f3f3f
#define MAXT 52
#define ii pair<ll,ll>
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define eb emplace_back
#define fs first
#define sc second
#define ll long long

using namespace std;

struct user{
    int rating, new_rating, in_contest, upsolving, tempo;
    char nome[51],pos[51];
};

user usuario[100], usuario_do_rank;
int n,big,inround=0,total_problemas=8,m;
string s,entrada,saida,rank_anterior;
float ea,eb,sa,sb,ra,rb,fa,fb;
float baloes_a,baloes_b;
FILE *arq;

bool cmp(user a, user b){
    return a.rating>b.rating;
}

int main(){
    for (int rd = 1; rd <= 14; rd++){
        total_problemas=(rd==5 ? 8 : 7);
        entrada = "prerankgeral";
        entrada += to_string(rd);
        entrada += ".in";
        if ((arq = fopen(entrada.c_str(),"r"))==NULL){
            printf("Falhou abertura de entrada %i\n",rd-1);
            break;
        }

        fscanf(arq,"%i",&n);
        for (int i=0;i<n;i++){
            fscanf(arq,"%s %s %i %i %i %i",usuario[i].pos,usuario[i].nome,&usuario[i].rating,&usuario[i].in_contest,&usuario[i].upsolving,&usuario[i].tempo);
        }
        fclose(arq);

        rank_anterior = "rankgeral";
        rank_anterior += to_string(rd-1);
        rank_anterior += ".in";
        if ((arq = fopen(rank_anterior.c_str(),"r"))==NULL){
            printf("Falhou abertura de rank anterior %i\n",rd-1);
            break;
        }

        printf("<<<<<ROUND %c>>>>>>>\n",rd);

        fscanf(arq,"%i",&m);
        for (int i=0;i<m;i++){
            fscanf(arq,"%s %s %i",usuario_do_rank.pos,usuario_do_rank.nome,&usuario_do_rank.rating);
            for (int j=0;j<n;j++){
                if (strcmp(usuario[j].nome,usuario_do_rank.nome)==0){
                    usuario[j].rating = usuario_do_rank.rating;
                    // printf("%s\n",usuario_do_rank.nome);
                }
            }
        }
        fclose(arq);

        for (int i=0;i<n;i++){
            // if (strcmp(usuario[i].pos,"00:")==0) continue;
            ra = usuario[i].rating;
            ea = fa = 0;
            baloes_a = usuario[i].in_contest + ((usuario[i].upsolving)/3.0) + (usuario[i].in_contest==total_problemas);
            for (int j=0;j<n;j++){
                if (i==j || (strcmp(usuario[j].pos,"00:")==0)) continue;//|| usuario[j].in_contest==0
                rb = usuario[j].rating;
                baloes_b = usuario[j].in_contest + ((usuario[j].upsolving)/3.0) + (usuario[j].in_contest==total_problemas);
                ea += 1/(1+pow(10,(rb-ra)/400));
                if (baloes_a!=baloes_b){
                    fa += (baloes_a/(baloes_a+baloes_b));
                }
                else if (usuario[i].in_contest!=usuario[j].in_contest){
                    fa += ((1.0*usuario[i].in_contest)/(usuario[i].in_contest+usuario[j].in_contest));
                }
                else if (usuario[i].tempo && usuario[j].tempo){
                    fa += ((1.0*usuario[j].tempo)/(usuario[i].tempo+usuario[j].tempo));
                }
                else{
                    fa += (usuario[i].tempo!=0)*1.0;
                }
            }
            // printf("%s %.2lf %.2lf %.2lf\n",usuario[i].nome,baloes_a,fa,ea);
            printf("%10s %4.2f %4.2f %4.2f\n",usuario[i].nome,baloes_a,fa,ea);
            if ((strcmp(usuario[i].pos,"00:")==0) && fa<=ea) {
                usuario[i].new_rating = ra + (usuario[i].upsolving)/3;
                //printf("%s\n",usuario[i].nome);
            }
            else usuario[i].new_rating = ra + (1<<(4+(ra<2000)))*(fa-ea);
        }
        for (int i=0;i<n;i++){
            usuario[i].rating = usuario[i].new_rating;
        }
        stable_sort(usuario,usuario+n,cmp);

        saida = "rankgeral";
        saida += to_string(rd);
        saida += ".in";
        if ((arq = fopen(saida.c_str(),"w"))==NULL){
            printf("Falhou abertura de saida %i\n",rd-1);
            break;
        }
        fprintf(arq,"%i\n",n);
        for (int i=0;i<n;i++){
            usuario[i].rating = ((strcmp(usuario[i].pos,"00:")!=0) ? usuario[i].new_rating : usuario[i].rating);
            //cout<<setw(2)<<setfill('0')<<i+1<<": "<<setw(big)<<setfill(' ')<<usuario[i].nome<<" - "<<usuario[i].rating<<endl;
            fprintf(arq,"%02i: %s %i \n",i+1,usuario[i].nome,usuario[i].rating);
        }
        fclose(arq);
        printf("\n");
    }
    return 0;
}
