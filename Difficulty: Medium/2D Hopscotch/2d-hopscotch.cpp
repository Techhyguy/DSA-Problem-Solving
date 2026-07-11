class Solution {
  public:
    int hopscotch(vector<vector<int>> mat, int d, int i, int j) {
        int n = mat.size();
        int m = mat[0].size();
        int sum = 0;

        auto valid = [&](int x, int y) {
            return x >= 0 && x < n && y >= 0 && y < m;
        };

        if (d == 0) {
            // 1 step away
            if (j % 2 == 0) {
                int dx[] = {-1, -1, -1, 0, 0, 1};
                int dy[] = {-1,  0,  1, -1, 1, 0};

                for (int k = 0; k < 6; k++) {
                    int x = i + dx[k];
                    int y = j + dy[k];

                    if (valid(x, y))
                        sum += mat[x][y];
                }
            }
            else {
                int dx[] = {-1, 0, 0, 1, 1, 1};
                int dy[] = { 0, -1, 1, -1, 0, 1};

                for (int k = 0; k < 6; k++) {
                    int x = i + dx[k];
                    int y = j + dy[k];

                    if (valid(x, y))
                        sum += mat[x][y];
                }
            }
        }
        else {
            // 2 steps away
            if (j % 2 == 0) {
                int dx[] = {
                    -2, -2, -2,
                    -1, -1,
                     0,  0,
                     1,  1, 1, 1,
                     2
                };

                int dy[] = {
                    -1, 0, 1,
                    -2, 2,
                    -2, 2,
                    -2, -1, 1, 2,
                    0
                };

                for (int k = 0; k < 12; k++) {
                    int x = i + dx[k];
                    int y = j + dy[k];

                    if (valid(x, y))
                        sum += mat[x][y];
                }
            }
            else {
                int dx[] = {
                    -1, -1, -2, -1, -1,
                     0,  0,
                     1,  1,
                     2,  2, 2
                };

                int dy[] = {
                    -2, -1, 0, 1, 2,
                    -2, 2,
                    -2, 2,
                    -1, 0, 1
                };

                for (int k = 0; k < 12; k++) {
                    int x = i + dx[k];
                    int y = j + dy[k];

                    if (valid(x, y))
                        sum += mat[x][y];
                }
            }
        }

        return sum;
    }
};