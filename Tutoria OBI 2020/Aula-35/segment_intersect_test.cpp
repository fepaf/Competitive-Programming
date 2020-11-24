#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

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
};


double distPointToLine(tvector p, tvector q, tvector r){//distancia do ponto R à linha deerminada pelos pontos P e Q
    return fabs((r-p)^(q-p))/(~(q-p));
}

int sign(double x){
    /*
    1 - x positivo
    -1 - x negativo
    0 - x é zero
    */
    return (x>0 ? 1 : (x < 0 ? -1 : 0));
}

int inSeg(tvector a, tvector b, tvector m){
    return (min(a.x, b.x) <= m.x && m.x <= max(a.x, b.x)) && (min(a.y, b.y) <= m.y && m.y <= max(a.y, b.y));
}

int intersectSeg(tvector a, tvector b, tvector c, tvector d){
    tvector ab, ac, ad, cd, ca, cb;
    ab = b-a;
    ac = c-a;
    ad = d-a;
    cd = d-c;
    ca = a-c;
    cb = b-c;

    if ((ab^ac) == 0){
        return inSeg(a, b, c);
    }
    if ((ab^ad) == 0){
        return inSeg(a, b, d);
    }
    if ((cd^ca) == 0){
        return inSeg(c, d, a);
    }
    if ((cd^cb) == 0){
        return inSeg(c, d, b);
    }
    
    return ( (sign(ab^ac) != sign(ab^ad)) && (sign(cd^ca) != sign(cd^cb)) );
    
}


tvector a, b, c , d;
int n, ans, r;


int main(){_

    while (cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y >> d.x >> d.y){

        cout << (intersectSeg(a, b, c, d) ? 'S' : 'N') << endl;
    }

    return 0;
}