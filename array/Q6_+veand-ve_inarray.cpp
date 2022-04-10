#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int positive  =0, negative =0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]<0){
            negative +=1;

        }
        else{
            positive +=1;
        }

    }
    cout<<positive<<"positive:- "<<endl;
    cout<<negative<<"negative:- "<<endl;
}