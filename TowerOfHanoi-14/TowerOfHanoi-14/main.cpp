//
//  main.cpp
//  TowerOfHanoi-14
//
//  Created by Metin Çatal on 10.02.2024.
//

#include <iostream>
#include <cmath>
using namespace std;

void hanoi(int n, int kaynak, int yardimci, int hedef) {
    if (n == 1) {
        cout << kaynak << " " << hedef << endl;
        return;
    }
    hanoi(n - 1, kaynak, hedef, yardimci);
    cout << kaynak << " " << hedef << endl;
    hanoi(n - 1, yardimci, kaynak, hedef);
}

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;

    int hamleSayisi = pow(2, n) - 1;
    cout << hamleSayisi << endl;

    hanoi(n, 1, 2, 3);

    return 0;
}
