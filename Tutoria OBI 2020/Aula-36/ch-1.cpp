#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) (x).begin, (x).end()
#define eb emplace_back
#define sz(x) ((int) (x).size())

using namespace std;

struct tvector{//p, q
    double x, y;

    tvector operator +(tvector q) const{
        return {x + q.x, y + q.y};
    }
    tvector operator -(tvector q) const{
        return {x - q.x, y - q.y};
    }
    double operator ~() const {
        return hypot(x, y);
    }
    double operator *(tvector q) const {
        return (x*q.x + y*q.y);
    }
    double operator ^(tvector q) const {
        return (x*q.y - y*q.x);
    }
    int operator <(tvector q) const {
        return (x<q.x || (x == q.x && y < q.y));
    }
};


int cw(tvector a, tvector b, tvector c){
    return (((b-a)^(c-b)) < 0);
}

int ccw(tvector a, tvector b, tvector c){
    return (((b-a)^(c-b)) > 0);
}

tvector p1, p2, p;
vector<tvector> cima, baixo, a, convex_hull;
int n;
set<tvector> pontos;

int main(){_

    cin >> n;

    for (int i=n; i--;){
        cin >> p.x >> p.y;
        pontos.insert(p);
    }

    for (auto p : pontos){
        a.eb(p);
    }
    
    n = sz(a);

    sort(a.begin(), a.end());

    p1 = a[0]; p2 = a.back();

    cima.eb(p1);
    baixo.eb(p1);

    for (int i=1; i<n; ++i){
        if (i==n-1 || cw(cima[sz(cima)-1], a[i], p2)){
            while (sz(cima) >=2 && !cw(cima[sz(cima)-2] , cima[sz(cima)-1], a[i])){
                cima.pop_back();
            }
            cima.eb(a[i]);
        }
        if (i==n-1 || ccw(baixo[sz(baixo)-1], a[i], p2)){
            while (sz(baixo) >=2 && !ccw(baixo[sz(baixo)-2] , baixo[sz(baixo)-1], a[i])){
                baixo.pop_back();
            }
            baixo.eb(a[i]);
        }
    }

    for (int i=0; i<sz(cima); ++i){
        convex_hull.eb(cima[i]);
    }
    for (int i=sz(baixo)-2; i>0; --i){ //P1 e P2 está tanto em CIMA quanto em BAIXO
        convex_hull.eb(baixo[i]);
    }

    cout << sz(convex_hull) << endl;
    for (int i=0; i<sz(convex_hull); ++i){
        cout << convex_hull[i].x << ' ' << convex_hull[i].y << endl;
    }


    return 0;
}