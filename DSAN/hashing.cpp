#include <iostream>
#include <map>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    map<int, int> hash; 
    // <key,value/frequency>

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        hash[x]++; 
    }

    int q;
    cin >> q;

    while (q--) {
        int number;
        cin >> number;
        cout << hash[number] << endl;
    }
    return 0;
}
