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

double distPointVector(tvector p, tvector q, tvector r){
    if ((r-p)*(q-p)>=0 && (r-q)*(p-q)>=0){
        return ((r-p)^(q-p))/(~(q-p));
    }else {
        return min(~(r-p),~(r-q));
    }
}

double InTriangle(tvector a, tvector b, tvector c, tvector p){
    if ((b-a)*(p-a)<0) return 0;
    if ((a-b)*(p-b)<0) return 0;
    if ((c-b)*(p-b)<0) return 0;
    if ((b-c)*(p-c)<0) return 0;
    if ((c-a)*(p-a)<0) return 0;
    if ((a-c)*(p-c)<0) return 0;
    return 1;
}

tvector u, v, r;

int main(){_
    u = {0, 0};
    v = {3, 3};
    r = {2, 2};
    cout << distPointVector(u, v, r) << endl;
    cout << r.x << ' ' << r.y << endl;
    cout << (u*v) << endl;
    cout << (u^v) << endl;
    return 0;
}