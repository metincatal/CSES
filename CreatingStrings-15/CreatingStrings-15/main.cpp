//  Created by Metin Çatal on 11.09.2023.

#include <iostream>
#include <string>
#define ll long long

using namespace std;

unsigned ll factoriel(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factoriel(n - 1);
}

int main(int argc, const char * argv[]) {
    string n;
    cin >> n;
    
    int hashMap[26] = {0}, length = 0;
    for(char l : n) {
        hashMap[l - 'a']++;
        length++;
    }
    
    string t;
    ll ans_l = factoriel(length);
    for(int i = 0; i<26; i++)
        if(hashMap[i] > 0) {
            ans_l /= factoriel(hashMap[i]);
            for(int j = 0; j < hashMap[i]; j++)
                t += hashMap[i] + 'a';
        }
    
    cout << ans_l << endl;
    
    for(int i = 0; i < ans_l; i++) {
        string ans;
        for(int j = 0; j < length; j++) {
            ans += t[j];
            for(int k = 1; k < length; k++) {
                
            }
        }
    }
    
    return 0;
}
