//  Created by Metin Çatal on 10.09.2023.

#include <iostream>
#define ll long long

using namespace std;

int main(int argc, const char * argv[]) {
    ll t;
    cin >> t;
    
    while (t--) {
        ll a, b;
        cin >> a >> b;
        
        ll min = (a+b) / 3;
        if ((a >= min && b >= min) && ((a+b) % 3 == 0))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
    return 0;
}
