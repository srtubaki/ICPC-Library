bool comp(ll a, ll b) { return a < b; }

ll binaly(ll key, ll n, vl &dp) {
  ll ok = 0, ng = n + 1;
  while (ok < ng) {
    ll mid = (ok + ng) / 2;
    if (comp(dp[mid], key)) {
      ok = mid + 1;
    } else {
      ng = mid;
    }
  }
  return ok;
}

template <class T>
int LIS(vector<T> a) {
  int n = (int)a.size();
  vl dp(n + 1, LINF);
  for (int i = 0; i < n; ++i) {
    dp[binaly(a[i], n, dp)] = a[i];
  }
  return lower_bound(dp.begin(), dp.end(), LINF, comp) - dp.begin();
}

// 配列aの最長増加部分列の長さを求める関数