#include <bits/stdc++.h>

// #include <bits/stdc++.h>が使えなかったら
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <stack>
#include <iterator>

// いらないかも？？？
#include <cassert>
#include <cmath>
#include <complex>
#include <cstdint>
#include <functional>
#include <iomanip>
#include <limits>
#include <list>
#include <random>
#include <regex>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <utility>

using namespace std;

// 以下は開始直後に書こうと思っています
using ll = long long;
using vl = vector<ll>;
using vvl = vector<vl>;
using vvvl = vector<vvl>;

#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define Rep(i, a, b) for (ll i = (a); i < (b); ++i)

#define ALL(x) (x).begin(), (x).end()
#define rALL(x) (x).rbegin(), (x).rend()

constexpr ll INF = 1000000011;
constexpr ll LINF = 1001002003004005006ll;

template <class T, class U>
inline bool chmax(T &a, const U &b) {
  if (a < b) {
    a = b;
    return 1;
  }
  return 0;
}
template <class T, class U>
inline bool chmin(T &a, const U &b) {
  if (a > b) {
    a = b;
    return 1;
  }
  return 0;
}



// 適宜必要になったら各自で書いてほしいコードです
using vi = vector<int>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
using ld = long double;
using vld = vector<ld>;
using vvld = vector<vld>;
using vvvld = vector<vvld>;
using vb = vector<bool>;
using vvb = vector<vb>;
using vvvb = vector<vvb>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vpll = vector<pll>;
using vvpll = vector<vector<pll>>;
using vvvpll = vector<vector<vector<pll>>>;

#define rrep(i, n) for (ll i = n - 1; i >= 0; i--)
#define rRep(i, a, b) for (ll i = a; i >= b; i--)

#define drep(i, a, b, d) for (ll i = (a); i <= (b); i += d)
#define drrep(i, a, b, d) for (ll i = (a); i >= (b); i -= d)

template <class T> using max_heap = priority_queue<T>;
template <class T> using min_heap = priority_queue<T, vector<T>, greater<T>>;

struct setup_main {
  setup_main() {
    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);
    std::cout << fixed << setprecision(15);
  }
} setup_main_;
