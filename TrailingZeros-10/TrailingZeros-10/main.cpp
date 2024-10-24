//  Created by Metin Çatal on 9.09.2023.

#include <iostream>
#define ll long long

using namespace std;

int main(int argc, const char * argv[]) {
    ll n;
    cin >> n;
    
    int zeros = 0;
    
    for(int i = 5; i <= n; i *= 5) {
        zeros += n / i;
    }
    
    cout << zeros << endl;
    
    return 0;
}
