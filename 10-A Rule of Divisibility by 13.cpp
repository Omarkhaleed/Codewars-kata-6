class Thirteen
{
public:
    static long long thirt(long long n);
};

long long Thirteen::thirt(long long n)
{
    long long original = n;                  // Store argument for comparison before return.
    std::vector<int> arr = {1,10,9,12,3,4};  
    int count = arr.size();                  // Start count at the arr size so mod in while loop will work.
    long long sum = 0;
    
    while(n>0)
    {
        sum += (n % 10) * arr[(count % 6)];
        n = n / 10;
        count++;
    }
    if(sum == original) return sum;
    else return thirt(sum);
}
