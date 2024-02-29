#include <iostream>

using namespace std;

int findMaxRowSum(int arr[][100], int m, int n) {
    int maxRowSum = 0;
    for (int i = 0; i < m; i++) {
        int rowSum = 0;
        int maxElement = arr[i][0];

        for (int j = 0; j < n; j++) {
            rowSum += arr[i][j];
            if (arr[i][j] > maxElement) {
                maxElement = arr[i][j];
            }
        }
        maxRowSum += maxElement;
    }
    return maxRowSum;
}
int main() {
    int m, n;
    int arr[100][100];
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    int sum = findMaxRowSum(arr, m, n);
    cout << sum << endl;

    return 0;
}
