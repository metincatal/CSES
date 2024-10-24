//  Created by Metin Çatal on 10.09.2023.

#include <iostream>
#include <string>
#include <algorithm>
#define ll long long

using namespace std;

int main(int argc, const char * argv[]) {
    string n;
    cin >> n;
    
    int hashMap[26] = {}, sum = 0;
    for (char d : n)
        hashMap[d - 'A']++;
    
    for (int i = 0; i < 26; i++)
        sum += hashMap[i]&1;
    if (sum>1) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    
    string t;
    for (int i = 0; i < 26; i++)
        if (hashMap[i]&1^1)
            for (int j = 0; j < hashMap[i] / 2; j++)
                t += (char)('A' + i);
    cout << t;
    for (int i=0; i<26; i++)
        if (hashMap[i] & 1)
            for (int j = 0; j < hashMap[i]; j++)
                cout << (char)('A' + i);
    
    reverse(t.begin(), t.end());
    cout << t;
    
    return 0;
}
