#include <vector>

int findOdd(const std::vector<int>& numbers){
int counter=0;
  for(int i=0;i<numbers.size();i++){
  for(int j=0;j<numbers.size();j++){
  if(numbers[i]==numbers[j])
  counter++;
  }
  if(counter%2!=0)
  return numbers[i];
}}
