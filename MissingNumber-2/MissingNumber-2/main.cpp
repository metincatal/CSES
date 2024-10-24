//  Created by Metin Çatal on 8.09.2023.
//

#include <iostream>
#define ll long long

using namespace std;

int main(int argc, const char * argv[]) {
    ll a;
    cin >> a;
    
    ll sum = 0;
    for (int i=1; i<a; ++i) {
        int c;
        cin >> c;
        sum += c;
    }
    cout << a*(a+1)/2 - sum << endl;
    
    return 0;
}
