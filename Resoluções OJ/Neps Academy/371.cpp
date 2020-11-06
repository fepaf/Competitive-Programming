#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAX (1<<20)
#define dir(x) ((x)<<1)
#define esq(x) (((x)<<1)|1)
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

int tmin[MAX], tmax[MAX];
int a[MAX], b[MAX];

int comb_min(int x, int y){
    return a[x] <= a[y] ? x : y;
}

int comb_max(int x, int y){
    return b[x] >= b[y] ? x : y;
}

void build(int u, int i, int j){
    if (i == j){
        tmin[u] = tmax[u] = i;
        return;
    } 
    if (i<j) {
        int md = ((i+j)>>1);
        build(esq(u), i, md);
        build(dir(u), md+1, j);
        tmin[u] = comb_min(tmin[dir(u)], tmin[esq(u)]);
        tmax[u] = comb_max(tmax[dir(u)], tmax[esq(u)]);
    }
}

void update(int u, int i, int j, int idx, int val){
    if (i==j){
        if (val <= a[idx]){
            tmin[u] = idx;
            a[idx] = val;
        }
        if (val >= b[idx]){
            tmax[u] = idx;
            b[idx] = val;
        }
        return;
    }
    int md = ((i+j)>>1);
    if (i<=idx && idx<=md) update(esq(u), i, md, idx, val);
    if (md<idx && idx<=j) update(dir(u), md+1, j, idx, val);
    tmin[u] = comb_min(tmin[dir(u)], tmin[esq(u)]);
    tmax[u] = comb_max(tmax[dir(u)], tmax[esq(u)]);
}

int query_min(int u, int i, int j, int l, int r){
    if (l<=i && j<=r){
        return tmin[u];
    }
    if (j<l || r<i){
        return 0;
    }
    int md = ((i+j)>>1);
    int ans_esq = query_min(esq(u), i, md, l, r);
    int ans_dir = query_min(dir(u), md+1, j, l, r);

    if (!ans_esq) return ans_dir;
    if (!ans_dir) return ans_esq;
    return comb_min(ans_esq, ans_dir);
}

int query_max(int u, int i, int j, int l, int r){
    if (l<=i && j<=r){
        return tmax[u];
    }
    if (j<l || r<i){
        return 0;
    }
    int md = ((i+j)>>1);
    int ans_esq = query_max(esq(u), i, md, l, r);
    int ans_dir = query_max(dir(u), md+1, j, l, r);

    if (!ans_esq) return ans_dir;
    if (!ans_dir) return ans_esq;
    return comb_max(ans_esq, ans_dir);
}

int n, m, l, r, op, imin, imax, pt1, pt2, ans;

int main(){_
    cin >> n >> m;
    
    for (int i=1; i<=n; ++i){
        cin >> a[i];
        b[i] = a[i];if (l>r) return 0;
    }

    build(1, 1, n);
    a[0] = INT_MAX;
    b[0] = INT_MIN;
    
    while (m--){
        cin >> op >> l >> r;
        if (op == 1){
            update(1, 1, n, r, l);
        }
        if (op == 2){
            imin = query_min(1, 1, n, l, r);
            pt1 = query_max(1, 1, n, l, imin-1);
            pt2 = query_max(1, 1, n, imin+1, r);
            ans = b[comb_max(pt1, pt2)] - a[imin];

            imax = query_max(1, 1, n, l, r);
            pt1 = query_min(1, 1, n, l, imax-1);
            pt2 = query_min(1, 1, n, imax+1, r);
            ans = max(ans, b[imax] - a[comb_min(pt1, pt2)]);
            cout << ans << '\n';
        }
    }
    return 0;
}