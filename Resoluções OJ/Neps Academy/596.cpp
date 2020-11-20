#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

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

double distPointLine(tvector p, tvector q, tvector r){
        return fabs((r-p)^(q-p))/(~(q-p));
}


int n, xc, yc, r, xa, ya, xb, yb, ans;
tvector a, b, c;

int main(){_
    cin >> n >> c.x >> c.y >> r;

    while (n--){
        cin >> a.x >> a.y >> b.x >> b.y;
        ans += (distPointLine(a, b, c) <= r*1.0);
    }

    cout <<  ans << endl;
    return 0;
}