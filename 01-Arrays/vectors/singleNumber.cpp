#include <iostream>
#include <vector>
using namespace std;
 
int main(){
   vector<int> arr = {1,2,3,4,55,1,2,3};
    int ans = 0;
    for(int val : arr){
        ans = ans ^ val;
    }
cout<<ans;

    return 0;
}
