#include <iostream>
#include <vector>
using namespace std;
 
int main(){
   vector<int> arr = {1,1,3,4,4};
    vector<int> newArr;
// newArr.push_back(arr[0]);
    for(int i=0;i<arr.size();i++){
        newArr.push_back(arr[i]);
        for(int j=1;j<arr.size();j++){
            if(arr[i] == newArr[j]){ 
                cout<<newArr[j]<<" "<<arr[j]<<endl;
            }
        }
    }


    return 0;
}