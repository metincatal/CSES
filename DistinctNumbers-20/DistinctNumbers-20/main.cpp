//  Created by Metin Çatal on 15.09.2023.

#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long

using namespace std;

int main(int argc, const char * argv[]) {
    int n, ans = 0;
    cin >> n;
    vector<ll> s;
    while(n--) {
        ll x;
        cin >> x;
        s.push_back(x);
    }
    sort(s.begin(), s.end());
    ll s_length = s.size();
    for(int i = 0; i < s_length; i++)
        if(s[i+1] != s[i])
            ans++;
    
    cout << ans << endl;
    
    return 0;
}
