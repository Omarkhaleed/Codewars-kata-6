using namespace std;
std::vector<int> deleteNth(std::vector<int> arr, int n)
{
std::vector<int>s;
for(int i=0;i<arr.size();i++){
if(count(s.begin(),s.end(),arr[i])<n){
s.push_back(arr[i]);
}
}
  return s;
} 
/*
std::vector<int> res;
  for (int i=0;i<arr.size();i++) {
    if (count(res.begin(),res.end(), arr[i])<n) {
      res.push_back(arr[i]);
    }
  }
  return res;
}
*/
