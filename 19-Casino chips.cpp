#include<bits/stdc++.h>
using namespace std;
int solve(std::vector<int> v){  
    int days=0;
     sort(v.rbegin(),v.rend());
    
  while(true){
    if (v[0] > 0 && v[1] > 0){
    v[0]-=1;
    v[1]-=1;
    days++;
    //if( v[2] > v[1] && v[0] != v[1] )
     ///swap(v[1],v[2]);
     //if(v[2] > v[1] && v[0] == v[1])
         //swap(v[0],v[2]);
        
      if( v[2] > v[1] )
        sort(v.rbegin(),v.rend());
   }
    else
     break;
    }
  return days;
}   


// second
#include<bits/stdc++.h>
using namespace std;
int solve(std::vector<int> v){  
    int days=0;
     sort(v.rbegin(),v.rend());
    
  while(true){
    if (v[0] > 0 && v[1] > 0){
    v[0]-=1;
    v[1]-=1;
    days++;
    if( v[2] > v[1] && v[0] != v[1] )
     swap(v[1],v[2]);
     if(v[2] > v[1] && v[0] == v[1])
        swap(v[0],v[2]);
        
     //if( v[2] > v[1] )
       //  sort(v.rbegin(),v.rend());
   }
    else
     break;
    }
  return days;
}   

// third



#include<bits/stdc++.h>
using namespace std;
int solve(std::vector<int> v){  
    int days=0;
     sort(v.rbegin(),v.rend());
    
  while(true){
    if (v[0] > 0 && v[1] > 0){
    v[0]-=1;
    v[1]-=1;
    days++;
    if( v[2] > v[1] && v[0] != v[1] )
     swap(v[1],v[2]);
     if(v[2] > v[1] && v[0] == v[1])
         swap(v[0],v[2]);
        
     // if( v[2] > v[1] )
        // sort(v.rbegin(),v.rend());
   }
    else
     break;
    }
  return days;
}   
