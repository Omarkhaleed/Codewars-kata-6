#include <string>

std::string encode(const std::string &str) {
  std::string rem=str;
  for(int i=0;i<rem.size();i++){
  if(rem[i]=='a')rem[i]='1';
  if(rem[i]=='e')rem[i]='2';
  if(rem[i]=='i')rem[i]='3';
  if(rem[i]=='o')rem[i]='4';
  if(rem[i]=='u')rem[i]='5';
}
return rem;
}
std::string decode(const std::string &str) {
  std::string rem=str;
  for(int i=0;i<rem.size();i++){
  if(rem[i]=='1')rem[i]='a';
  if(rem[i]=='2')rem[i]='e';
  if(rem[i]=='3')rem[i]='i';
  if(rem[i]=='4')rem[i]='o';
  if(rem[i]=='5')rem[i]='u';
}
return rem;
}
