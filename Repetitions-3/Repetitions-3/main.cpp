//  Created by Metin Çatal on 8.09.2023.

#include <iostream>
#define ll long long

using namespace std;

int main(int argc, const char * argv[]) {
    string a;
    cin >> a;
    
    char l = 'A';
    int ans = 1, c = 0;
    for(char d : a) {
        if (d == l) {
            c++;
            ans = max(ans, c);
        }else {
            l = d;
            c = 1;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}
