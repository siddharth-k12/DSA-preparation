#include <iostream>
#include <vector>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include <algorithm>
using namespace std;
 
int main(){
    
vector<int> nums = {4,5,6,7,0,1,2};
vector<int> ans;
 int start = 0 , end = nums.size() - 1;
 while (start < end)
 {
   /* code */
   int mid = start + (end - start) / 2;
   
   if(nums[mid] > nums[end]){
      start = mid + 1;
   }else{
      end = mid;
   }
 }
 cout<<nums[start];
//  cout<<"s";
//  for(int i : ans){
//    cout<<i<<"value: ";
//  }

    return 0;
}