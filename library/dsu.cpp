using namespace std;
#include <bits/stdc++.h>

struct dsu {
  public:
    dsu() : _n(0) {}
    dsu(int n) : _n(n), data(n, -1) {}

    int merge(int a, int b) {
        int x = leader(a), y = leader(b);
        if (x == y) return x;
        if (-data[x] < -data[y]) swap(x, y);
        data[x] += data[y];
        data[y] = x;
        return x;
    }

    bool same(int a, int b) {
        return leader(a) == leader(b);
    }

    int leader(int a) {
        if (data[a] < 0) return a;
        return data[a] = leader(data[a]);
    }

    int size(int a) {
        return -data[leader(a)];
    }

    // なくてもいいかも？？？
    vector<vector<int>> groups() {
        vector<int> leader_buf(_n), group_size(_n);
        for (int i = 0; i < _n; i++) {
            leader_buf[i] = leader(i);
            group_size[leader_buf[i]]++;
        }
        vector<vector<int>> result(_n);
        for (int i = 0; i < _n; i++) {
            result[i].reserve(group_size[i]);
        }
        for (int i = 0; i < _n; i++) {
            result[leader_buf[i]].push_back(i);
        }
        result.erase(
            remove_if(result.begin(), result.end(),
                           [&](const vector<int>& v) { return v.empty(); }),
            result.end());
        return result;
    }

  private:
    int _n;
    vector<int> data;
};