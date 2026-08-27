#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    cout<<"enter number : ";
    cin>>arr[2];
    int size = sizeof(arr) / sizeof(int);
    cout<<"---------------"<<endl;
    for(int i = 0;i<size; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}