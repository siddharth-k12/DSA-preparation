#include <iostream>
#include <vector>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include <algorithm>
using namespace std;
 
int main(){
    
 vector<int> nums1 = {1,2,3,0,0,0};
 int m = 3;
 vector<int> nums2 = {2,5,6};
 int n = 3;
// Output: [1,2,2,3,5,6]
vector<int> ans;
int i = 0;
int point1 = nums1[i];
int point2 = nums2[i];

// int right = 1;
    while (nums1 < nums2)
    {
        /* code */
        if(point1 < point2){
            ans.push_back(nums1[i]);
            i++;
        }
        else{
ans.push_back(nums2[i]);
            i++;
        }

    }
    for(int i : ans){
        cout<<i;
    }
    return 0;
}