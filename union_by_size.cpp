#include <bits/stdc++.h>
using namespace std;

class DisjointSet {
    vector<int> parent, size;
    public:
    DisjointSet(int n) {
        parent.resize(n + 1);
        size.resize(n + 1, 1);
        for (int i = 0; i <= n; i++)
        parent[i] = i;
    }
    int findParent(int n) {
        if (n == parent[n])
        return n;
        return parent[n] = findParent(parent[n]);
    }
    void unionBySize(int u, int v) {
        int up = findParent(u), vp = findParent(v);
        if (up == vp)
        return;
        if (size[up] > size[vp]) {
            parent[vp] = up;
            size[up] += size[vp];
        } else {
            parent[up] = vp;
            size[vp] += size[up];
        }
    }
};