// 加減乗除のみmodint

template <std::uint_fast64_t Modulus>
class modint {
  using u64 = std::uint_fast64_t;

 public:
  u64 a;

  constexpr modint(u64 x = 0) noexcept : a(x % Modulus) {}
  u64 &value() { return a; }
  modint operator-() { return modint() - *this; }
  modint operator+(modint rhs) { return modint(*this) += rhs; }
  modint operator-(modint rhs) { return modint(*this) -= rhs; }
  modint operator*(modint rhs) { return modint(*this) *= rhs; }
  modint operator/(modint rhs) { return modint(*this) /= rhs; }
  modint &operator+=(modint rhs) {
    a += rhs.a;
    if (a >= Modulus) {
      a -= Modulus;
    }
    return *this;
  }
  modint &operator-=(modint rhs) {
    if (a < rhs.a) {
      a += Modulus;
    }
    a -= rhs.a;
    return *this;
  }
  modint &operator*=(modint rhs) {
    a = a * rhs.a % Modulus;
    return *this;
  }
  modint &operator/=(modint rhs) {
    return *this = *this * pow(Modulus - 2)
  }
  modint pow(u64 n){
    modint x = *this, r = 1;
    while (n) {
      if (n % 2) r *= x;
      x *= x;
      n /= 2;
    }
    return r;
  }
};

// 使用例

int main() {
  // mod 7 の変数を定義
  modint<7> A, B, C, D, G = 4;
  // mod 998244353 の変数を定義
  modint<998244353> X;
  // ACL での .val() は .a で表す
  cin >> A.a >> B.a >> C.a >> D.a;
  cout << ((A * B + C) / D).a << endl;
  auto E = (A * B + C);
  G = (A * B + C).a;
  cout << (E / D).a << endl;
  cout << (G / D).a << endl;
}

// 動作は確認したが、普段使っている modint から
// 文字数を減らしたので、念の為元のmodintを

template <std::uint_fast64_t Modulus>
class modint {
  using u64 = std::uint_fast64_t;

 public:
  u64 a;

  constexpr modint(const u64 x = 0) noexcept : a(x % Modulus) {}
  constexpr u64 &value() noexcept { return a; }
  constexpr const u64 &value() const noexcept { return a; }
  constexpr modint operator+(const modint rhs) const noexcept {
    return modint(*this) += rhs;
  }
  constexpr modint operator-(const modint rhs) const noexcept {
    return modint(*this) -= rhs;
  }
  constexpr modint operator*(const modint rhs) const noexcept {
    return modint(*this) *= rhs;
  }
  constexpr modint operator/(const modint rhs) const noexcept {
    return modint(*this) /= rhs;
  }
  constexpr modint &operator+=(const modint rhs) noexcept {
    a += rhs.a;
    if (a >= Modulus) {
      a -= Modulus;
    }
    return *this;
  }
  constexpr modint &operator-=(const modint rhs) noexcept {
    if (a < rhs.a) {
      a += Modulus;
    }
    a -= rhs.a;
    return *this;
  }
  constexpr modint &operator*=(const modint rhs) noexcept {
    a = a * rhs.a % Modulus;
    return *this;
  }
  constexpr modint &operator/=(modint rhs) noexcept {
    u64 exp = Modulus - 2;
    while (exp) {
      if (exp % 2) {
        *this *= rhs;
      }
      rhs *= rhs;
      exp /= 2;
    }
    return *this;
  }
};
