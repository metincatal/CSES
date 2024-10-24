//  Created by Metin Çatal on 9.09.2023.

#include <iostream>
#include <math.h>
#define ll long long

using namespace std;

int main(int argc, const char * argv[]) {
    ll n, s=1;
    cin >> n;
    for(int i=0; i<n; i++)
        s=2*s%((int)1e9+7);
    cout << s << endl;
    
    return 0;
}
