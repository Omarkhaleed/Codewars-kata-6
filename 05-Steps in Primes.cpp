#include<cmath>
class StepInPrimes
{
public:
   static bool isprime(long long n){
   for(int i=2;i<=sqrt(n);i++){
   if(n%i==0)
   return false;
   }
   return true;
   }
    static std::pair <long long, long long> step(int g, long long m, long long n){
    for(long long x=m;x<=n;x++){
    if(isprime(x)&&isprime(x+g))
    return {x,x+g};
    
    } 
    return {0,0};
    }
};
/*class StepInPrimes
{
public:
    static bool isPrime(long long n) {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                return false;
            }
        }
    
        return true;
    }
    
    static std::pair <long long, long long> step(int g, long long m, long long n) {
        for(m; m <= n; m++) {
            if (isPrime(m) && isPrime(m + g)) 
                return {m, m + g};
        }
        return {0, 0};
    }
};
*/
