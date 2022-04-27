

// Isyna  is given the number of visitors  ar her local theam park at N consecutive days .The number
//of visitors on the i-th day id Vi. A day is record bracking if it satisfies bothe of the  following conditions;
//d 1 find the maximum nmber of visitors 
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int record =0;
    int max=-1;
    int a[n+1];
    int a[n] = -1;
    if(n ==1){
        cout<<"1"<<endl;
    }
    for(int i=0;i<n+1;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>max && a[i]>a[i+1]){
            record++;
        }
    }
    cout<<record<<" - "<<endl;
return 0;
}