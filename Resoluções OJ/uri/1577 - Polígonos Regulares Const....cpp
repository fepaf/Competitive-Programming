// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Polígonos Regulares Const...
// Nível: 3
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1577

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define ll long long
#define EPS (1e-10)

using namespace std;

int n,lo,hi,mid,t;
int sim[]={1,2,3,4,5,6,8,10,12,15,16,17,20,24,30,32,34,40,48,51,60,64,68,80,85,96,102,120,128,136,160,170,192,204,240,255,256,257,272,320,340,384,408,480,510,512,514,544,640,680,768,771,816,960,1020,1024,1028,1088,1280,1285,1360,1536,1542,1632,1920,2040,2048,2056,2176,2560,2570,2720,3072,3084,3264,3840,3855,4080,4096,4112,4352,4369,5120,5140,5440,6144,6168,6528,7680,7710,8160,8192,8224,8704,8738,10240,10280,10880,12288,12336,13056,13107,15360,15420,16320,16384,16448,17408,17476,20480,20560,21760,21845,24576,24672,26112,26214,30720,30840,32640,32768,32896,34816,34952,40960,41120,43520,43690,49152,49344,52224,52428,61440,61680,65280,65535,65536,65537,65792,69632,69904,81920,82240,87040,87380,98304,98688,104448,104856,122880,123360,130560,131070,131072,131074,131584,139264,139808,163840,164480,174080,174760,196608,196611,197376,208896,209712,245760,246720,261120,262140,262144,262148,263168,278528,279616,327680,327685,328960,348160,349520,393216,393222,394752,417792,419424,491520,493440,522240,524280,524288,524296,526336,557056,559232,655360,655370,657920,696320,699040,786432,786444,789504,835584,838848,983040,983055,986880};

/*int can(int n){
    for (int i=6; i--;){
        while (n%f[i]==0){
            n/=f[i];
        }
    }
    return 0;
}*/

int main(){_
    /*f[0]=(1<<(1<<0))+1;
    f[1]=(1<<(1<<1))+1;
    f[2]=(1<<(1<<2))+1;
    f[3]=(1<<(1<<3))+1;
    f[4]=(1<<(1<<4))+1;
    for (int i=(1<<5);i--;){
        num = 1;
        for (int j=5;j--;){
            if (i&(1<<j)){
                num *= f[j];
            }
        }
        if (0<=num && num<=1000000){
            cj.insert(num);
        }
    }
    for (int x : cj){
        yes.insert(x);
        for (int i=0; i<20; i++){
            if ((x*(1LL<<i))<=1000000){
                yes.insert((x*(1LL<<i)));
            }
        }
    }
    for (int x : yes){
        cout<<x<<',';
    }
    cout<<endl<<endl<<"size="<<yes.size()<<endl;*/
    for (cin>>t;t--;){
        cin>>n;
        lo=0 , hi=207;
        while (lo<hi){
            mid = lo + (hi-lo)/2;
            if (sim[mid]>=n) hi = mid;
            else lo = mid+1;
        }
        cout<<(sim[lo]==n ? "Yes" : "No")<<endl;
    }
    return 0;
}
/*
O teorema de Gauss–Wantzel afirma que um polígono regular de n lados é
construtível com régua e compasso, se, e somente se, n pode ser escrito como uma
potência de 2 ou como o produto de uma potência de 2 por números de Fermat
primos distintos.

Até hoje só são conhecidos cinco números primos de Fermat
(1<<(1<<0))+1;
(1<<(1<<1))+1;
(1<<(1<<2))+1;
(1<<(1<<3))+1;
(1<<(1<<4))+1;
*/

