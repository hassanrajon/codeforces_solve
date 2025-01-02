#include <bits/stdc++.h>
using namespace std;
const int n = 300000;
int prime[n], nPrime, isPrime[n];
//  prime array keeps prime numbers
// isPrime array for prime checking
//  n prime for how many primes are there
int main()
{
    int i, j, limit = sqrt(n * 1.0) + 2;
    isPrime[1] = 1, isPrime[0] = 1;
    // 2 is a prime
    prime[nPrime++] = 2;
    // almost all the evens are not prime
    for (i = 4; i <= n; i += 2)
        isPrime[i] = 1;
    // run loop for only odds
    for (i = 3; i <= n; i += 2)
        if (!isPrime[i])
        {
            // i is a prime
            prime[nPrime++] = i;
            if (i <= limit)
            {
                // loop through all odd multiples of i greater than i*i
                for (j = i * i; j <= n; j += i * 2)
                {
                    // mark j not prime
                    isPrime[j] = 1;
                }
            }
        }
for(int i=0;i<50;i++){
    cout<<prime[i]<<" ";
}
}