#include <bits/stdc++.h>

#include <algorithm>
#include <cassert>
#include <cmath>
#include <complex>
#include <cstdint>
#include <functional>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <limits>
#include <list>
#include <map>
#include <queue>
#include <random>
#include <regex>
#include <set>
#include <stack>
#include <string>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vl = vector<ll>;
using vvl = vector<vector<ll>>;
using vvvl = vector<vector<vector<ll>>>;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vvvi = vector<vector<vector<int>>>;
using vld = vector<ld>;
using vvld = vector<vector<ld>>;
using vvvld = vector<vector<vector<ld>>>;
using vb = vector<bool>;
using vvb = vector<vector<bool>>;
using vvvb = vector<vector<vector<bool>>>;
using vpll = vector<pll>;
using vvpll = vector<vector<pll>>;
using vvvpll = vector<vector<vector<pll>>>;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define Rep(i, a, b) for (ll i = (a); i < (b); ++i)
#define rrep(i, n) for (ll i = n - 1; i >= 0; i--)
#define rRep(i, a, b) for (ll i = a; i >= b; i--)

#define drep(i, a, b, d) for (ll i = (a); i <= (b); i += d)
#define drrep(i, a, b, d) for (ll i = (a); i >= (b); i -= d)

#define ALL(x) (x).begin(), (x).end()
#define rALL(x) (x).rbegin(), (x).rend()

constexpr ll INF = 1000000011;
constexpr ll LINF = 1001002003004005006ll;

template <class T>
using max_heap = priority_queue<T>;
template <class T>
using min_heap = priority_queue<T, vector<T>, greater<T>>;

template <class T, class U>
inline bool chmax(T &lhs, const U &rhs) {
  if (lhs < rhs) {
    lhs = rhs;
    return 1;
  }
  return 0;
}
template <class T, class U>
inline bool chmin(T &lhs, const U &rhs) {
  if (lhs > rhs) {
    lhs = rhs;
    return 1;
  }
  return 0;
}

struct setup_main {
  setup_main() {
    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);
    std::cout << fixed << setprecision(15);
  }
} setup_main_;
