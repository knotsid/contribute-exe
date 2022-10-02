#include <bits/stdc++.h>
using namespace std;

struct DSU
{
    vector<int> parent, rank;
    DSU(int n)
    {
        parent.resize(n + 1);
        rank.resize(n + 1);
        for (int i = 0; i < n + 1; i++)
        {
            parent[i] = i;
            rank[i] = 1;
        }
    }

    int find(int x)
    {
        while (x != parent[x])
        {
            x = parent[x];
        }
        return x;
    }
    bool same(int a, int b)
    {
        return find(a) == find(b);
    }
    void Unite(int a, int b)
    {
        a = find(a);
        b = find(b);
        if (a == b)
        {
            return;
        }
        if (rank[a] < rank[b])
        {
            swap(a, b);
        }
        parent[b] = a;
        rank[a] += rank[b];
    }
};

void solve()
{
    int n, m;
    cin>>n>>m;
    vector<pair<int, pair<int, int>>> edges;
    for (int i = 0; i < m; i++)
    {
        int x, y, w;
        cin >> x >> y >> w;
        edges.push_back({w, {x, y}});
    }
    DSU obj(n + 1);
    sort(edges.begin(), edges.end());
    int ans = 0;
    for (auto &edge : edges)
    {
        int wt = edge.first;
        int u = edge.second.first;
        int v = edge.second.second;
        if (obj.same(u, v))
            continue;
        obj.Unite(u, v);
        ans += wt;
    }
    cout<<ans<<endl;
}
int main()
{
    solve();
    return 0;
}