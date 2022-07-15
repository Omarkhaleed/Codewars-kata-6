int sequence(int n)
{ if (n<=0) return 1;
if(n<=1||n==5)return 0;
  if(n==2|| n==3 ||n==8)return 1;
  if(n==4 || n==6 || n==7)return 2;
    return sequence(n-8);  
    }
  
