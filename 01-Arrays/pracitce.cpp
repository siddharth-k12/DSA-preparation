#include <iostream>
#include <vector>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include <algorithm>
using namespace std;
 
int main(){
    
 vector<int> nums = {-1,0,3,5,7,12,15};
   
 int start = 0 , end = nums.size();
 int target = 12;
 while (start < end)
 {
   /* code */
   int mid = (start + end) / 2;
   if(target == mid){
      cout<<mid;
      break;
   }else if (target < mid)
   {
      /* code */
      start = mid + 1;
   }else{
      end = mid - 1;

   }
   
 }
 

    return 0;
}