//  Created by Metin Çatal on 11.09.2023.

#include <iostream>
#include <string>
#include <algorithm>
#define ll long long

using namespace std;

int main(int argc, const char * argv[]) {
    string a;
    cin >> a;
    
    sort(a.begin(), a.end());
    
    int k = 0;
    do {
        k++;
    } while(next_permutation(a.begin(), a.end()));
    
    cout << k << endl;
    
    do {
        for(char i : a)
            cout << i;
        cout << endl;
    } while(next_permutation(a.begin(), a.end()));
    
    return 0;
}
