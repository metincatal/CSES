//  Created by Metin Çatal on 10.09.2023.

#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#define ll long long

using namespace std;

vector<string> generateGrayCode(int n) {
    if (n <= 0) {
        return {};
    }
    
    vector<string> grayCodes;
    grayCodes.push_back("0");
    grayCodes.push_back("1");
    
    for (int i = 2; i < (1 << n); i <<= 1) {
        for (int j = i - 1; j >= 0; j--) {
            grayCodes.push_back(grayCodes[j]);
        }
        for (int j = 0; j < i; j++) {
            grayCodes[j] = "0" + grayCodes[j];
        }
        for (int j = i; j < 2 * i; j++) {
            grayCodes[j] = "1" + grayCodes[j];
        }
    }
    
    return grayCodes;
}

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    
    vector<string> grayCodes = generateGrayCode(n);
    
    for (const string& code : grayCodes) {
        cout << code << endl;
    }
    
    return 0;
}
