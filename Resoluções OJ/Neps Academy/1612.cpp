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

vector<tvector> p;
i64 n, ans;

int main(){_

    cin >> n;
    p = vector<tvector>(n);

    for (int i=0; i<n; ++i){
        cin >> p[i].x >> p[i].y;
    }
    if (cw(p[0], p[1], p[2])){
        reverse(p.begin(), p.end());
    }
    for (int i=2; i<n; i++){
        ans += ((p[i]-p[0])^(p[i-1]-p[0]))/2;
    }
    cout << abs(ans) << endl;
    return 0;
}