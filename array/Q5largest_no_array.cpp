#include <iostream>
using namespace  std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int largest =0;
    for(int i = 0; i<n;i++){
        cin>>arr[i];
        if(largest<arr[i]){
        largest = arr[i];
    
        }
        else{
            cout<<"something is wrong"<<endl;
        }
    }

cout<<largest<<endl;

return 0;    
}