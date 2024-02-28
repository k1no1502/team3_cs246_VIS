#include <iostream>

using namespace std;

int main() {
  int n;
  cout << "Nhap so dong cua ma tran: ";
  cin >> n;
  int A[n][n], B[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << "A[" << i << "][" << j << "] = ";
      cin >> A[i][j];
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << "B[" << i << "][" << j << "] = ";
      cin >> B[i][j];
    }
  }
  int C[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      C[i][j] = A[i][j] + B[i][j];
    }
  }
  int D[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < n; k++) {
        D[i][j] += A[i][k] * B[k][j];
      }
    }
  }

  cout << "Ma tran tong A + B la: " << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << C[i][j] << " ";
    }
    cout << endl;
  }
  cout << "Ma tran tich A + B la: " << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << D[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}

