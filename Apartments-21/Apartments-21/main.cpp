//  Created by Metin Çatal on 15.09.2023.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> applicants(n);
    vector<int> apartments(m);

    for (int i = 0; i < n; i++)
        cin >> applicants[i];

    for (int i = 0; i < m; i++)
        cin >> apartments[i];

    sort(applicants.begin(), applicants.end());
    sort(apartments.begin(), apartments.end());

    int result = 0;
    int j = 0;

    for (int i = 0; i < n; i++) {
        while (j < m && apartments[j] < applicants[i] - k)
            j++;

        if (j < m && apartments[j] <= applicants[i] + k) {
            result++;
            j++;
        }
    }

    cout << result << endl;

    return 0;
}
