 #include<string>
 using namespace std;
 unsigned int countBits(unsigned long long n){
 int count=0;
while(n>0){
if(n%2!=0)
count++;
 n/=2;
 }
 return count;
}
