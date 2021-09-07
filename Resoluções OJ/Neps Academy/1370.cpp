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

vector<tvector> cima, baixo, a;
set<tvector> pontos;
tvector p1, p2, p;
int n, ans, r;


int main(){_

    while (cin >> p1.x >> p1.y >> p2.x >> p2.y){
        if ((p1^p2)>0){
            cout << "Angulo maior que 180 graus" << endl;
        }
        else if ((p1^p2)<0){
            cout << "Angulo menor que 180 graus" << endl;
        }
        else {
            cout << "Produto vetorial paralelo" << endl;
        }
    }
    return 0;
}