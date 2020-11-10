#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAX (1<<20)
#define esq(x) ((x)<<1)
#define dir(x) (((x)<<1)|1)
#define FLAG 0

using namespace std;

int a[MAX]; //a[i] menor peso do balde i
int b[MAX]; //b[i] maior peso do balsde i

int tmin[MAX], tmax[MAX];

int comb_min(int x, int y){
    return a[x] < a[y] ? x : y;
}

int comb_max(int x, int y){
    return b[x] > b[y] ? x : y;
}

void build(int u, int i, int j){
    if (i == j){
        tmin[u] = tmax[u] = i;
        return;
    }
    int md = ((i+j)>>1);

    build(esq(u), i, md);
    build(dir(u), md+1, j);

    tmin[u] = comb_min(tmin[esq(u)], tmin[dir(u)]);
    tmax[u] = comb_max(tmax[esq(u)], tmax[dir(u)]);
}

void update(int u, int i, int j, int idx, int val){
    if (i == j){
        if (val < a[idx]){
            a[idx] = val;
        }
        if (val > b[idx]){
            b[idx] = val;
        }
        return;
    }

    int md = ((i+j)>>1);

    if (i<=idx && idx<=md) update(esq(u), i, md, idx, val);
    if (md<idx && idx<=j) update(dir(u), md+1, j, idx, val);

    tmin[u] = comb_min(tmin[esq(u)], tmin[dir(u)]);
    tmax[u] = comb_max(tmax[esq(u)], tmax[dir(u)]);
}

int query_min(int u, int i, int j, int l, int r){

    if (l<=i && j<=r){
        return tmin[u];
    }

    if (r<i || j<l){
        return FLAG;
    }

    int md = ((i+j)>>1);

    int ans_esq = query_min(esq(u), i, md, l, r);
    int ans_dir = query_min(dir(u), md+1, j, l, r);

    if (ans_esq == FLAG) return ans_dir;
    if (ans_dir == FLAG) return ans_esq;

    return comb_min(ans_esq, ans_dir);
}

int query_max(int u, int i, int j, int l, int r){
    
    if (l<=i && j<=r){
        return tmax[u];
    }

    if (r<i || j<l){
        return FLAG;
    }

    int md = ((i+j)>>1);

    int ans_esq = query_max(esq(u), i, md, l, r);
    int ans_dir = query_max(dir(u), md+1, j, l, r);

    if (ans_esq == FLAG) return ans_dir;
    if (ans_dir == FLAG) return ans_esq;

    return comb_max(ans_esq, ans_dir);
}



int op, ans, imin, imax, q1, q2, n, m, l, r;

int main(){_
    cin >> n >> m;

    for (int i=1; i<=n; i++){
        cin >> a[i];
        b[i] = a[i];
    }

    build(1, 1, n);

    a[0] = INT_MAX;
    b[0] = INT_MIN;

    while (m--){
        cin >> op >> l >> r;
        if (op == 1){
            update(1, 1, n, r, l);
        }else if (op == 2){
            imax = query_max(1, 1, n, l, r);
            q1 = query_min(1, 1, n, l, imax-1);
            q2 = query_min(1, 1, n, imax+1, r);
            ans = b[imax]-min(a[q1], a[q2]); 

            imin = query_min(1, 1, n, l, r);
            q1 = query_max(1, 1, n, l, imin-1);
            q2 = query_max(1, 1, n, imin+1, r);

            ans = max(ans, max(b[q1], b[q2]) - a[imin]);

            cout <<  ans << endl;
        }
    }
    return 0;
}
