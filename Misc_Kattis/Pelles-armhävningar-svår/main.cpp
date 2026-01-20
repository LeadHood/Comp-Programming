// #include <boost/multiprecision/cpp_int.hpp>
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  unsigned long long n;
  cin >> n;
  cout << (n * (n + 1) / 2);

  return 0;
}

// #include <boost/multiprecision/cpp_int.hpp>

// using namespace boost::multiprecision;
// using namespace std;

// int128_t boost_product(long long A, long long B)
//{
//     int128_t ans = (int128_t)A * B;
//     return ans;
// }
//
// int main(){
//     long long n;
//     cin >> n;
//
//     long long m = n + 1;
//
//     if(n % 2 == 0){
//         n /= 2;
//     }
//     else{
//         m /= 2;
//     }
//
//     cout << boost_product(n, m);
// }
