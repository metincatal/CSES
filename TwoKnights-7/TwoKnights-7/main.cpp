//  Created by Metin Çatal on 8.09.2023.

#include <iostream>
#define ll long long

using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    
    for (int k=1; k<=n; k++) {
        ll k1 = k*k, k2 = k1*(k1-1)/2;
        if(k>2)
            k2 -= 4*(k-1)*(k-2);
        cout << k2 << endl;
    }
    
    return 0;
}
