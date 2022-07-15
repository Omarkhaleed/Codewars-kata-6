int digital_root(int n)
{
int num,sum=0;
if(n==0)
return 0;
while(n>0){
num=n%10;
sum+=num;
n/=10;
}
if(sum>9)
return digital_root(sum);
else
return sum;
}
