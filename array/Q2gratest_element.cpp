#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int marks[n];
    int max=0;
    for(int i =0;i<n;i++){
        cin>>marks[i];
    }
    for (int i = 0; i<n; i++){
        cout<<marks[i]<<",";
    if (max < marks[i])
    {
        max = marks[i];
    }
    }
    cout<<endl;
    cout<<max;
    return 0;
}