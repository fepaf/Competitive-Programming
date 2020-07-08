// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Tobogan de Bolinhas
// Nível: 5
// Categoria: GEOMETRIA COMPUTACIONAL
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1223

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define double long double

using namespace std;

struct tpoint{
    int x, y;
    tpoint (){}
    tpoint (int x, int y) : x(x) , y(y) {}
    tpoint operator +(tpoint q) {return {x+q.x,y+q.y};}
    tpoint operator -(tpoint q) {return {x-q.x,y-q.y};}
    double operator *(tpoint q) {return x*q.x + y*q.y;}
    double operator ^(tpoint q) {return x*q.y - y*q.x;}
    double operator ~() {return hypot(x,y);}
};

double dist_point_to_segment(tpoint r, tpoint p, tpoint q){
    if ((r-p)*(q-p)>=0 && (r-q)*(p-q)>=0){
        return fabs(((q-p)^(r-p))/~(p-q));//perigoso
    }
    else {
        return min(~(r-p),~(r-q));
    }
}

int xi, yi, xf, yf, n, l, h;
tpoint ponta, ant;
double ans;
int yin, yang;

int main(){_
    cout<<fixed<<setprecision(2);
    while (cin>>n>>l>>h){
        cin>>yi>>xf>>yf;
        ant = {xf,yf};
        ans = dist_point_to_segment(ant,{l,0},{l,h});
        for (int i = 1; i < n; ++i){
            yin = (i&1); yang = (yin^1);
            cin>>yi>>xf>>yf;
            ans = min(ans, dist_point_to_segment(ant,{yin*l,yi},{xf,yf}));
            ans = min(ans, dist_point_to_segment({xf,yf},{yang*l,0},{yang*l,h}));
            ant = {xf,yf};
        }
        cout<<ans<<endl;
    }
    return 0;
}

