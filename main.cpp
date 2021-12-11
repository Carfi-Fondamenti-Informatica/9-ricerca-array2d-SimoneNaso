
#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int pos;
    char a[10][20], b[1][20];
    cout << "Inserisci i nomi propri da mettere nell'insieme" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }
    cout << "Inserisci il nome proprio" << endl;
    cin >> b[0];

    if (find(a, b, pos)) {
        cout << pos << endl;
    } else {
        cout << "non presente" << endl;
    }
    return 0;
}
