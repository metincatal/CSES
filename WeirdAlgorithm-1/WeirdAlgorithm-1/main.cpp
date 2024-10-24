//  Created by Metin Çatal on 8.09.2023.

#include <iostream>
#define ll long long

using namespace std;

int main(int argc, const char * argv[]) {
    ll a;
    cin >> a;
    cout << a;
    while (a!=1) {
        if (a%2==0) {
            a /= 2;
            cout << " " << a;
        }
        else {
            a = a*3 + 1;
            cout << " " << a;
        }
    }
    return 0;
}
