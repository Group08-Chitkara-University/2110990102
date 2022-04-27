#include <iostream>
using namespace std;
//subarray question from apna college youtube c++ course \

//!!1---Question sum of all subarrays of given array;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int curr =0;
    for(int i=0;i<n;i++){
        curr =0;
        for(int j =i;j<n-1;j++){
            curr += arr[j];
        }
            cout<<curr<<endl;
            
    }
return 0;
}