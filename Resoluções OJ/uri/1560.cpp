#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define double long double
#define i64 long long
#define MAX 1<<8

using namespace std;


struct tvector{
    int x, y;
    tvector (){}
    tvector (int x, int y) : x(x), y(y) {}
    tvector operator +(tvector q) {return {x+q.x, y+q.y};}
    tvector operator -(tvector q) {return {x-q.x, y-q.y};}
    i64 operator *(tvector q) {return x*q.x+y*q.y;}
    i64 operator ^(tvector q) {return x*q.y-y*q.x;}
    double operator~() {return hypot(x,y);}
};


inline int inTriangle(tvector p, tvector a, tvector b, tvector c){
    return (((((p-a)^(b-a))>=0) && (((p-b)^(c-b))>=0) && (((p-c)^(a-c))>=0)) || ((((p-a)^(b-a))<=0) && (((p-b)^(c-b))<=0) && (((p-c)^(a-c))<=0)));
}

tvector white[MAX], black[MAX];
int n, m, poder;
i64 ans;

signed main(){_
    while (cin>>n>>m){
        ans = 0;
        for (int i=n; i--;){
            cin >> black[i].x >> black[i].y;
        }
        for (int i=m; i--;){
            cin >> white[i].x >> white[i].y;
        }
        for (int i=0; i<n; ++i){
            for (int j=i+1; j<n; ++j){
                for (int k=j+1; k<n; ++k){
                    poder = 0;
                    for (int l=m; l--;){
                        poder += inTriangle(white[l] , black[i] , black[j] , black[k]);
                    }
                    ans += poder*poder;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
