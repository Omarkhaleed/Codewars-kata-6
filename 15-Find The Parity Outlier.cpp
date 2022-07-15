int FindOutlier(std::vector<int> arr){
 int result,even=0,odd=0;
 for(int i=0;i<3;i++){
 if(arr[i]%2==0)
 even++;
 else
 odd++;
 }
 for(int i=0;i<arr.size();i++){
 if(even>odd){
 if(arr[i]%2!=0)
 result=arr[i];}
 else{
 if(arr[i]%2==0)
 result=arr[i];
 }
 }
 return result;
 }

 
 /*
 int result;
    int even=0,odd=0;
    for(int i=0;i<3;i++)
    {
      if(arr[i]%2==0)
        even++;
      else
        odd++;
    }
    for(int i=0;i<arr.size();i++)
    {
      if(even>odd){
        if(arr[i]%2!=0)
          result=arr[i];
        }
      else{
        if(arr[i]%2==0)
          result=arr[i];
      }
    }
    return result;
}
*/
