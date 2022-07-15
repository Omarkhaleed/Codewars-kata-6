#include <vector>
#include<algorithm>
using namespace std ; 

vector <long long int> wheatFromChaff (vector <long long int> v)
{
  int k = v.size() - 1;
  for (int i = 0; i < v.size(); i++) 
      for (int j = k; j > i && v[i] > 0; j--) 
        if (v[j] < 0) {
          swap(v[i], v[j]);
          k = j - 1;
          break;
        }
  return v;
  }
