/*int check(int i){
int sum=0;
if(i%3==0 || i%5==0)
sum+=i;
}
*/
int solution(int number) 
{
int sum=0;
for (int i=3;i<number;i++)
{
if(i%3==0 || i%5==0)
sum+=i;
}
return sum;
}
 
