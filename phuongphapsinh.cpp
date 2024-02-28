#include <iostream>
using namespace std;

int n, b[20];
bool stop = false;

void Init() {
    cout << endl << "Nhap n = "; 
    cin >> n;
    for (int i = 1; i <= n; i++) 
        b[i] = 0;
}

void Next_Bit_String() {
    int i = n;
    while (i > 0 && b[i] == 1) {
        b[i] = 0;
        i--;
    }
    if (i == 0) 
        stop = true; 
    else 
        b[i] = 1;
}

void Generate() {
    Init();
    while (!stop) {
        for (int i = 1; i <= n; i++) 
            cout << b[i];
        cout << endl;
        Next_Bit_String();
    }
}

int main() {
    Generate();
    return 0;
}

