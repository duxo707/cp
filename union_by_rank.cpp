#include <bits/stdc++.h>
using namespace std;

class DisjointSet {
    vector<int> parent, rank;
    public:
    DisjointSet(int n) {
        parent.resize(n + 1);
        rank.resize(n + 1, 0);
        for (int i = 0; i <= n; i++)
        parent[i] = i;
    }
    int findParent(int n) {
        if (n == parent[n])
        return n;
        return parent[n] = findParent(parent[n]);
    }
    void unionByRank(int u, int v) {
        int up = findParent(u), vp = findParent(v);
        if (up == vp)
        return;
        if (rank[up] > rank[vp])
        parent[vp] = up;
        else if (rank[up] < rank[vp])
        parent[up] = vp;
        else {
            parent[vp] = up;
            rank[up]++;
        }
    }
};