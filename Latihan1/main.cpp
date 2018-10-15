#include <iostream>

using namespace std;

int main() {
    int A, B, C;

    cout << "Masukkan bilangan 1: ";
    cin >> A;

    cout << "Masukkan bilangsn 2: ";
    cin >> B;

    cout << "Masukkan bilangan 3: ";
    cin >> C;

    if (A > B) {
        if (A > C)
            cout << "Bilangan terbesar adalah: " << A << endl;
    else
            cout << "Bilangan terbesar adalah: " << C << endl;
    } else {
        if (B > C)
            cout << "Bilangan terbesar adalah; " << B << endl;
        else
            cout << "Bilangan terbesar adalah; " << C << endl;
    }
}


