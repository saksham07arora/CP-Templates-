// Code for checking if a number is prime.
// Time Complexity - O(sqrt(n)) where n is the number to be checked.



bool isPrime(int n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)  // The number need to be checked till under-root n
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
