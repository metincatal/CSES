//  Created by Metin Çatal on 16.09.2023.

#include <iostream>
#include <set>
#include <vector>

int main() {
    int n, m;
    std::cin >> n >> m;

    std::multiset<int> biletFiyatlari;
    
    for (int i = 0; i < n; i++) {
        int fiyat;
        std::cin >> fiyat;
        biletFiyatlari.insert(fiyat);
    }

    for (int i = 0; i < m; i++) {
        int maxFiyat;
        std::cin >> maxFiyat;

        auto it = biletFiyatlari.upper_bound(maxFiyat);
        
        if (it == biletFiyatlari.begin()) {
            std::cout << -1 << std::endl;
        } else {
            --it;
            std::cout << *it << std::endl;
            biletFiyatlari.erase(it);
        }
    }
    
    return 0;
}
