#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;


int main() {
    ll n, k;
    cin >> n;
    ll sum = 0;
    while (cin >> k) {
        sum += k % 1000000007;
        sum = sum % 1000000007;
    }
    cout << sum;

    return 0;
}
