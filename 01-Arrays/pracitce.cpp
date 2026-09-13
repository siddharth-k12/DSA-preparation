#include <iostream>
#include <vector>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include <algorithm>
using namespace std;
 
int main(){
    
 vector<int> nums = {0,0,1,2,1,1,2,2,3,3,4};
 // Output -> 2, nums = [1,2,_]
vector<int> ans;//
int check = nums.size();//2
int i = 1;//0
// int j = 1;//
ans.push_back(nums[0]);
    while (i < check)
    {
        /* code */
       if(nums[i] != ans.back()){
        ans.push_back(nums[i]);
       }
       i++;
    //    j++;
    }
    for(int i : ans){
        cout<<i<<"s ";
    }
    cout<<ans.back();
    return 0;
}