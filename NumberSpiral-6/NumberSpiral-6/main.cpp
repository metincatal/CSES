//  Created by Metin Çatal on 8.09.2023.

#include <iostream>
#define ll long long

using namespace std;

int main(int argc, const char * argv[]) {
    int t;
    cin >> t;
    while(t--) {
        ll y, x, ans;
        cin >> y >> x; // Rows, Column
        ll z = max(y, x);
        ll z2 = (z-1)*(z-1);
        
        if(z%2) {
            if(y==z)
                ans = z2+x;
            else
                ans = z2+2*z-y;
        }else {
            if(x==z)
                ans = z2+y;
            else
                ans = z2+2*z-x;
        }
        cout << ans << endl;
    }
    
    return 0;
}
