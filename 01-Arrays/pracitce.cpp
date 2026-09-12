#include <iostream>
#include <vector>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include <algorithm>
using namespace std;
 
int main(){
    
 vector<int> nums = {1,1,2};
 
// Output: [1,2,2,3,5,6]
vector<int> ans;
int check = nums.size();//4
int i = 0;//1//2//3


    while (i < check)
    {
        /* code */
       if(nums[i] != ){
        ans.push_back(nums[i]);
       }
       i++;
       
    }
    for(int i : ans){
        cout<<i<<"s ";
    }
    return 0;
}