#include <iostream>
#include <algorithm>

using namespace std;

bool isPrime(int n) {
  if (n < 2) {
    return false;
  }
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int n;
  cin >> n;
  int sum = 0;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if (isPrime(a)) {
      sum += a;
    }
  }
  cout << sum << endl;
  return 0;
}

