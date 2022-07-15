#include<cmath>
int length(int value){
int count=0;
while(value!=0){
count++;
value/=10;
}
return count;
}
bool narcissistic( int value ){
int number=value;
int len=length(value);
int res=0;
while(value!=0){
int n=value%10;
res+=pow(n,len);
value/=10;
}
if(res==number)
return true;
else
return false;
}
