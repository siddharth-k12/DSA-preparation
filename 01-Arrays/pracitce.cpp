#include <iostream>
#include <vector>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include <algorithm>
using namespace std;
 
int main(){
    
 vector<int> height = {1,8,6,2,5,4,8,3,7};
//  height = [1,8,6,2,5,4,8,3,7]
// Output: 49
// max(4,4);
    int maxVal = 0;
    int left = 0;
    int right = height.size();

    while(left < right){
        int size =  right - left;
        // cout<<size<<endl;
        int s = min(height[left] , height[right]);
        int total = size  * s;
        maxVal = max(total,maxVal);
        // cout<<maxVal<<endl;
        if(height[left] < height[right]){
            left++;
        }else{
            right--;
        }
    }
    cout << maxVal << endl;
    return 0;
}