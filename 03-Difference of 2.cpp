#include <utility>
#include <vector>
using namespace std;
std::vector<std::pair<int, int>> twos_difference(const std::vector<int> &vec) {
vector<int> a=vec;
vector<pair<int,int>> ret;
std::sort(a.begin(),a.end());
for(auto n:a)
if(find(a.begin(),a.end(),n+2) !=a.end())
ret.push_back(make_pair(n,n+2));
  return ret;
}



/*

vector<int> a(vec);
  vector<pair<int, int>> ret;
  std::sort(a.begin(), a.end());
  for (auto n : a)
    if (find(a.begin(), a.end(), n+2) != a.end())
      ret.push_back(make_pair(n, n+2));
  return ret;
  */
