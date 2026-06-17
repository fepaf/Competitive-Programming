#include <bits/stdc++.h>
using namespace std;
 
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAX 200005

/*
Problem: Path Queries II
Link: https://cses.fi/problemset/task/2134
*/
 
int n, q;
int val[MAX]; 
vector<int> g[MAX];
 
int parent[MAX], depth[MAX], heavy[MAX], head[MAX], pos[MAX];
int cur_pos;
 

int tree[2 * MAX]; 
 
 
void update_seg(int p, int value) {
    for (tree[p += n] = value; p > 1; p >>= 1)
        tree[p >> 1] = max(tree[p], tree[p ^ 1]);
}
 
int query_seg(int l, int r) {
    int res = 0;
    for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
        if (l & 1) res = max(res, tree[l++]);
        if (r & 1) res = max(res, tree[--r]);
    }
    return res;
}
 
int dfs_sz(int u) {
    int size = 1;
    int max_sz = 0;
    heavy[u] = -1;
    
    // Itera sobre os vizinhos
    for (int &v : g[u]) {
        if (v != parent[u]) {
            parent[v] = u;
            depth[v] = depth[u] + 1;
            int child_sz = dfs_sz(v);
            size += child_sz;
            if (child_sz > max_sz) {
                max_sz = child_sz;
                heavy[u] = v;
            }
        }
    }
    return size;
}
 
void dfs_hld(int u, int h) {
    head[u] = h;
    pos[u] = cur_pos++; 
    update_seg(pos[u], val[u]); 
 
    if (heavy[u] != -1) {
        dfs_hld(heavy[u], h);
    }
    
    for (int v : g[u]) {
        if (v != parent[u] && v != heavy[u]) {
            dfs_hld(v, v); // Começa uma nova cadeia
        }
    }
}
 
int query_path(int a, int b) {
    int res = 0;
    while (head[a] != head[b]) {
        if (depth[head[a]] < depth[head[b]]) swap(a, b);
        res = max(res, query_seg(pos[head[a]], pos[a] + 1)); 
        a = parent[head[a]];
    }
    if (depth[a] > depth[b]) swap(a, b);
    res = max(res, query_seg(pos[a], pos[b] + 1));
    return res;
}
 
void update_val(int u, int x) {
    val[u] = x;
    update_seg(pos[u], x);
}
 
int main() {
    fastio; 
    
    cin >> n >> q;
    
    for (int i = 1; i <= n; i++) {
        cin >> val[i];
    }
    
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
 
    cur_pos = 0;
    parent[1] = 0;
    depth[1] = 0;
    dfs_sz(1);
    dfs_hld(1, 1);
 
    while (q--) {
        int op;
        cin >> op;
        if (op == 1) {
            int s, x;
            cin >> s >> x;
            update_val(s, x);
        } else {
            int a, b;
            cin >> a >> b;
            cout << query_path(a, b) << " ";
        }
    }
    cout << "\n"; 
 
    return 0;
}