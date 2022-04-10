#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int sum = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum = sum +arr[i];
    }
    for(int i=0;i<n;i++){
       cout<<arr[i]<<",";
    }
    int average =sum/n;
    cout<<endl;
    cout<<sum<<endl;
    cout<<average<<endl;

return 0;    
}