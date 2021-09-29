#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAX (1<<18)
#define i64 long long
#define all(x) (x).begin, (x).end()
#define eb emplace_back
#define sz(x) ((int) (x).size())

using namespace std;

struct tvector{//p, q
    i64 x, y;

    tvector operator +(tvector q) const{
        return {x + q.x, y + q.y};
    }
    tvector operator -(tvector q) const{
        return {x - q.x, y - q.y};
    }
    i64 operator ~() const {
        return hypot(x, y);
    }
    i64 operator *(tvector q) const {
        return (x*q.x + y*q.y);
    }
    i64 operator ^(tvector q) const {
        return (x*q.y - y*q.x);
    }
    int operator <(tvector q) const{
        return (x<q.x || (x==q.x && y < q.y));
    }
};

int cmp(tvector a, tvector b){
    if (a.x != b.x) return (a.x < b.x);
    return (a.y < b.y);
}

int cw(tvector a, tvector b, tvector c){
    return (((b-a)^(c-b)) < 0);
}

int ccw(tvector a, tvector b, tvector c){
    return (((b-a)^(c-b)) > 0);
}

int doInserct(tvector a, tvector b, tvector c, tvector d){
    int x = (cw(a, b, c) != cw(a, b, d));
    int y = (cw(c, d, a) != cw(c, d, b));
    return x && y;
}

tvector a, b, c, d;

int main(){_

    while (cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y >> d.x >> d.y){
        cout << doInserct(a,b,c,d) << endl;
    }
    return 0;
}