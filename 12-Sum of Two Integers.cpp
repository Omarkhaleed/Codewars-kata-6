int Add (int x, int y)
{
if(x==0)
return y;
if(y==0)
return x;
int sum,carry;
while(y!=0){
sum=x^y;
carry=(x&y)<<1;
x=sum;
y=carry;
}
return x;
}
