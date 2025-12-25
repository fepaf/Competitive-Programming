#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
#define INF 0x3f3f3f3f
#define MAX (1<<20)
#define OUT MAX
#define MOD 1000000007
#define i64 long long
#define all(x) (x).begin() , (x).end()
#define sz(x) (int)(x).size()
#define ii pair<int, int>
#define fs first
#define sc second
#define eb emplace_back
#define vi vector<i64>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define lsb(x) ((x) & (-x))
#define gcd(x,y) __gcd((x),(y))
#define esq(x) (x<<1)
#define dir(x) ((x<<1)|1)
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

i64 fexpo(i64 b, i64 e){
    i64 ans = 1LL;
    while (e){
        if (e&1) ans = (ans*b)%MOD;
        b = (b*b)%MOD;
        e >>= 1;
    }
    return ans;
}

i64 n, c, dvo, ans[101];
vi p;
map<i64, vi> fp;

int main(){_
    /*
    Acha os primos menores que 100
    */
    for (i64 i=1; i<=100; ++i){
        dvo = 0;
        for (i64 j=1; j<=i; ++j){
            dvo += (i%j==0);
        }
        if (dvo==2) p.eb(i);
    }
    //Para cada possível valor de entrada
    for (i64 i=1; i<=100; ++i){
        //Calcula a fatoração prima de cada entrada
        //Lembre: A FATORAÇÃO PRIMA DA ENTRADA SERVIRÁ PARA CALCULAR OS EXPOENTES
        //        FATORAÇÃO PRIMA DA SAÍDA  
        i64 x = i;
        for (i64 pi : p){
            for (;x%pi==0; x/=pi){
                fp[i].eb(pi); // Cada ocorrência de um fator primo é inserida separadamente
            }
        }


        //Distribui essa fatoração prima como expoentes e de forma gulosa
        //Maiores expoentes para os menores primos
        ans[i] = 1;
        reverse(all(fp[i]));
        i64 it = 0;
        for (i64 pi : fp[i]){
            ans[i] = (ans[i]*fexpo(p[it++], pi-1))%MOD; 
        }
    }
    /*
    Trick parte:
    Todos os multiploes de 16, menores que 100, vao falhar nessa logica
    porque ao inves de dar um 2 da decomposicao como expoente separadamente
    eh mais vantajoso juntar dois deles e ter um fator 4 que vira expoente 3

    Multiplos de 24 vao falhar por razao analoga, eh sempre melhor juntar
    um 2 e um 3, para formar um 6, e entao ter um expoente 5

    Ao juntar duas ocorrencias de um primo na fatoracao, ou seja, substituir
    ambos pelo seu produto,note que a quantidade de expoentes reduz em 1.
    De forma gulosa, eh como se tivessesmo eliminado o ultimo fator primo da
    decomposicao da resposta. E o aumento causado pelo fator que vai usar o 
    novo expoente aumentado, nao vai ser maior que o primo que foi cancelado
    reduzindo assim o numero.
    */
    
    //caso especial
    ans[8] = 24;

    //multiplos de 16 (Note que 48 eh tambem mutiplo de 24)
    ans[16] = 120;
    ans[32] = 840;
    ans[48] = 2520;
    ans[64] = 7560;
    ans[80] = 15120;
    ans[96] = 27720;

    //multiplos de 24
    ans[24] = 360;
    ans[72] = 10080;
    

    
    for (cin >> c; c--;){
        cin >> n;
        cout << ans[n] << endl;
    }
    return 0;
}


/*
Tabela no formato:
N : <fatoracao prima de N> | ans = <Menor inteiro com N divisores>

1: | ans = 1
2: 2 | ans = 2
3: 3 | ans = 4
4: 2 2 | ans = 6
5: 5 | ans = 16
6: 3 2 | ans = 12
7: 7 | ans = 64
8: 2 2 2 | ans = 30 (ERRADO) 8: 4 2
9: 3 3 | ans = 36
10: 5 2 | ans = 48
11: 11 | ans = 1024
12: 3 2 2 | ans = 60
13: 13 | ans = 4096
14: 7 2 | ans = 192
15: 5 3 | ans = 144
16: 2 2 2 2 | ans = 210 (ERRADO) 16: 4 2 2
17: 17 | ans = 65536
18: 3 3 2 | ans = 180
19: 19 | ans = 262144
20: 5 2 2 | ans = 240
21: 7 3 | ans = 576
22: 11 2 | ans = 3072
23: 23 | ans = 4194304
24: 3 2 2 2 | ans = 420 (ERRADO) 24: 4 3 2
25: 5 5 | ans = 1296
26: 13 2 | ans = 12288
27: 3 3 3 | ans = 900
28: 7 2 2 | ans = 960
29: 29 | ans = 268435456
30: 5 3 2 | ans = 720
31: 31 | ans = 73741817
32: 2 2 2 2 2 | ans = 2310 (ERRADO) 32: 4 2 2 2
33: 11 3 | ans = 9216
34: 17 2 | ans = 196608
35: 7 5 | ans = 5184
36: 3 3 2 2 | ans = 1260
37: 37 | ans = 719476260
38: 19 2 | ans = 786432
39: 13 3 | ans = 36864
40: 5 2 2 2 | ans = 1680
41: 41 | ans = 511620083
42: 7 3 2 | ans = 2880
43: 43 | ans = 46480318
44: 11 2 2 | ans = 15360
45: 5 3 3 | ans = 3600
46: 23 2 | ans = 12582912
47: 47 | ans = 743685088
48: 3 2 2 2 2 | ans = 4620 (ERRADO) 48: 4 3 2 2 
49: 7 7 | ans = 46656
50: 5 5 2 | ans = 6480
51: 17 3 | ans = 589824
52: 13 2 2 | ans = 61440
53: 53 | ans = 595845303
54: 3 3 3 2 | ans = 6300
55: 11 5 | ans = 82944
56: 7 2 2 2 | ans = 6720
57: 19 3 | ans = 2359296
58: 29 2 | ans = 805306368
59: 59 | ans = 134099126
60: 5 3 2 2 | ans = 5040
61: 61 | ans = 536396504
62: 31 2 | ans = 221225451
63: 7 3 3 | ans = 14400
64: 2 2 2 2 2 2 | ans = 30030 (ERRADO) 64: 4 4 2 2
65: 13 5 | ans = 331776
66: 11 3 2 | ans = 46080
67: 67 | ans = 329376018
68: 17 2 2 | ans = 983040
69: 23 3 | ans = 37748736
70: 7 5 2 | ans = 25920
71: 71 | ans = 270016253
72: 3 3 2 2 2 | ans = 13860 (ERRADO) 72: 6 3 2 2
73: 73 | ans = 80065005
74: 37 2 | ans = 158428766
75: 5 5 3 | ans = 32400
76: 19 2 2 | ans = 3932160
77: 11 7 | ans = 746496
78: 13 3 2 | ans = 184320
79: 79 | ans = 124160285
80: 5 2 2 2 2 | ans = 18480 (ERRADO) 80: 5 4 2 2
81: 3 3 3 3 | ans = 44100
82: 41 2 | ans = 534860242
83: 83 | ans = 986564553
84: 7 3 2 2 | ans = 20160
85: 17 5 | ans = 5308416
86: 43 2 | ans = 139440954
87: 29 3 | ans = 415919090
88: 11 2 2 2 | ans = 107520
89: 89 | ans = 140130951
90: 5 3 3 2 | ans = 25200
91: 13 7 | ans = 2985984
92: 23 2 2 | ans = 62914560
93: 31 3 | ans = 663676353
94: 47 2 | ans = 231055250
95: 19 5 | ans = 21233664
96: 3 2 2 2 2 2 | ans = 60060 (ERRADO) 96: 4 3 2 2 2
97: 97 | ans = 873523211
98: 7 7 2 | ans = 233280
99: 11 3 3 | ans = 230400
100: 5 5 2 2 | ans = 45360
*/