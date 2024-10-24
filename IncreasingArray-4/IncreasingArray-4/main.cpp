//  Created by Metin Çatal on 8.09.2023.

#include <iostream>
#define ll long long

using namespace std;

int main(int argc, const char * argv[]) {
    int l;
    cin >> l;
    
    int mx = 0;
    ll ans = 0;
    for (int b=0; b<l; b++) {
        int x;
        cin >> x;
        mx = max(x, mx);
        ans += mx - x;
    }
    cout << ans << endl;
    
    return 0;
}
