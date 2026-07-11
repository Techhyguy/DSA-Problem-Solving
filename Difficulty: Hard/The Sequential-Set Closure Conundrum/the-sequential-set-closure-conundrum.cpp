class Solution {
    vector<int> parent, sz;

    int findParent(int x) {
        if (parent[x] == x)
            return x;

        return parent[x] = findParent(parent[x]);
    }

    void unite(int a, int b) {
        a = findParent(a);
        b = findParent(b);

        if (a == b)
            return;

        if (sz[a] < sz[b])
            swap(a, b);

        parent[b] = a;
        sz[a] += sz[b];
    }

  public:
    int findComponents(int n, int m, vector<vector<int>> query) {
        parent.resize(n + 1);
        sz.assign(n + 1, 1);

        iota(parent.begin(), parent.end(), 0);

        vector<vector<int>> reach(11, vector<int>(n + 1, 0));

        for (auto &q : query) {
            int a = q[0];
            int d = q[1];
            int k = q[2];

            if (a > n)
                continue;

            long long endpoint = 1LL * a + 1LL * d * k;

            endpoint = min(endpoint, 1LL * n);

            reach[d][a] = max(reach[d][a], (int)endpoint);
        }

        for (int d = 1; d <= 10; d++) {
            for (int start = 1; start <= d && start <= n; start++) {

                int farthest = 0;

                for (int x = start; x <= n; x += d) {
                    farthest = max(farthest, reach[d][x]);

                    if (x + d <= n && x + d <= farthest) {
                        unite(x, x + d);
                    }
                }
            }
        }

        int components = 0;

        for (int i = 1; i <= n; i++) {
            if (findParent(i) == i) {
                components++;
            }
        }

        return components;
    }
};