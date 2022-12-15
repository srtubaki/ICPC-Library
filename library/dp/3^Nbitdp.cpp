rep(S_, 1 << N) {
  for (int T_ = S_; --T_ &= S_;) {
    int U_ = S_ ^ T_;
    chmin(dp[S_], dp[T_] + dp[U_]);  // 遷移の例
  }
}

// 状態SをSの部分集合T,U(T^U==S)から求めるbitdp
// Sの部分集合Tの列挙。T=SとT=0は検討されないことに注意
