class Solution {
public:
    vector<bool> sieve(int right) {
        vector<bool> isPrime(right + 1, true); 
        isPrime[0] = isPrime[1] = false; 
        for (int i = 2; i * i <= right; i++) { 
            if (isPrime[i]) {
                for (int j = i * i; j <= right; j += i) {
                    isPrime[j] = false; 
                }
            }
        }
        return isPrime;
    }

public:
    vector<int> closestPrimes(int left, int right) {
        vector<bool> isPrime = sieve(right);
        vector<int> primes;
        for (int i = left; i <= right; i++) {
            if (isPrime[i]) {
                primes.push_back(i);
            }
        }
        int n = primes.size();
        if (n < 2) {
            return {-1, -1};
        }
        int minGap = INT_MAX; 
        vector<int> result;
        for (int i = 0; i < n - 1; i++) {
            int gap = primes[i + 1] - primes[i]; 
            if (gap < minGap) {
                minGap = gap;
                result = {primes[i], primes[i + 1]}; 
            }
        }

        return result;
    }
};
