#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long range;
    range = 10000000;
    
    // Use a vector of boolean values instead of an array
    vector<bool> isPrime(range + 1, true);

    isPrime[0] = isPrime[1] = false;
    long long count = 0;

    for (long long multiple = 2; multiple * multiple <= range; multiple++) {
        if (isPrime[multiple]) {
            for (long long i = multiple * multiple; i <= range; i += multiple) {
                isPrime[i] = false;
            }
        }
    }

    for (long long i = 2; i <= range; i++) {
        if (isPrime[i]) {
            count++;
        }
    }

    cout << "Count: " << count << endl;

    return 0;
}

