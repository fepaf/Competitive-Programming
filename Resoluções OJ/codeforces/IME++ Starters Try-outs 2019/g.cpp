#include<bits/stdc++.h>
#define MAX 100123
#define endl '\n'
#define left(u) (2*u)
#define right(u) (2*u+1)
#define mid(i,j) ((i+j)/2)
#define _ ios_base::sync_with_stdio(0);
#define INF 0x3f3f3f3f

using namespace std;

int n,q,t;
int a[MAX], i, v, l, r;
int tsum[4*MAX], tmin[4*MAX], tmax[4*MAX];

void build(int u, int i, int j){
    if (i == j){
        tsum[u] = tmin[u] = tmax[u] = a[i];
        return;
    }

    build(left(u), i, mid(i,j));
    build(right(u), mid(i,j) +1, j);

    tsum[u] = tsum[left(u)] + tsum[right(u)];
    tmin[u] = min(tmin[left(u)],tmin[right(u)]);
    tmax[u] = max(tmax[left(u)],tmax[right(u)]);
}

void update(int u, int i, int j, int idx, int val){
    if (i == j){
        tsum[u] = tmin[u] = tmax[u] = val;
        return;
    }

    if (i<=idx && idx<=mid(i,j)){
        update(left(u), i, mid(i,j), idx, val);
    }
    if (mid(i,j)+1<=idx && idx<=j){
        update(right(u), mid(i,j)+1, j, idx, val);
    }

    tsum[u] = tsum[left(u)] + tsum[right(u)];
    tmin[u] = min(tmin[left(u)],tmin[right(u)]);
    tmax[u] = max(tmax[left(u)],tmax[right(u)]);
}

int qsum(int u, int i, int j, int l, int r){
    if (l<=i && j<=r){
        return tsum[u];
    }

    if (j<l || i>r){
        return 0;
    }

    int ans_esq = qsum(left(u), i, mid(i,j), l, r);
    int ans_dir = qsum(right(u), mid(i,j)+1 , j, l, r);

    return ans_esq + ans_dir;
}

int qmin(int u, int i, int j, int l, int r){
    if (l<=i && j<=r){
        return tmin[u];
    }

    if (j<l || i>r){
        return INF;
    }

    int ans_esq = qmin(left(u), i, mid(i,j), l, r);
    int ans_dir = qmin(right(u), mid(i,j)+1 , j, l, r);

    return min(ans_esq, ans_dir);
}

int qmax(int u, int i, int j, int l, int r){
    if (l<=i && j<=r){
        return tmax[u];
    }

    if (j<l || i>r){
        return -INF;
    }

    int ans_esq = qmax(left(u), i, mid(i,j), l, r);
    int ans_dir = qmax(right(u), mid(i,j)+1 , j, l, r);

    return max(ans_esq, ans_dir);
}


int main(){_
    cin >> n >> q;
    for(int i=1;i<=n;i++){
        cin >> a[i]; 
    }
    build(1,1,n);
    while (q--){
        cin >> t >> l >> r;
        if (t==1){
            cout << (qsum(1,1,n,l,r) - qmin(1,1,n,l,r)- qmax(1,1,n,l,r)) << endl;
        }
        else{
            update(1,1,n,l,r);
        }
    }
    cout << endl;

    return 0;  
}