#include <iostream>
using namespace std;

// (1*1)+(2*2)
int main(){
    int n;
    int b =0;
    int c = b;
    int sum = 0;
    cin>>n;
    for (int i = 0;i<n;i++){
        b += 1;
        int c = b*b;
        sum = sum +c;
        cout<<c<<endl;
    }
    cout<<sum<<endl;
}