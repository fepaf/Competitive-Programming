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

tvector a, b, c, d, u, v;

int main(){_
    cout << fixed << setprecision(10);
    cin >> a.x >> a.y >> b.x >> b.y;
    u = b-a;
    cin >> c.x >> c.y >> d.x >> d.y;
    v = d-c;
    cout << (~u) << ' ' << (~v) << endl;
    tvector s = u+v;
    cout << s.x << ' ' << s.y << endl;
    cout << (u*v) << ' ' << (u^v) << endl;
    cout << fabs((u^v)/2.0) << endl;
    return 0;
}