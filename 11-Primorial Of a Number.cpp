#include<cmath>
int checkprime(int x){
for(int i=2;i<=sqrt(x);i++){
if(x%i==0){
return false;
}
}
return true;
}
unsigned long long numPrimorial (unsigned short int number )
{
  int res=2,x=3,count=1;
  while(count!=number){
  if(checkprime(x)){
  res*=x;
  count++;
  }
  x++;
  }
  return res ;
}
