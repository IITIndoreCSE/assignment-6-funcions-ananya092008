#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i =2; i * <= n; i++){
        if (n % i == 0) return false;
    }
    return true;
}

bool isPalindrome(int n) {
  int original = n, reversed = 0  ;
    while (n > 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10}
    return original == reversed;
}

bool primePalindrome(int n) {
    return isprime(n) && ispalindrome(n);
    
}

int main() {
    int n; cin >> n;
    cout << (primePalindrome(n) ? 1 : 0) << "\n";
    return 0;
}

