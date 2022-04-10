#include <iostream>
using namespace std;

int main(){
    int marks[10];
    for(int i =0;i<10;i++){
        cin>>marks[i];
    }
     for (int i = 0; i<10; i++){
        cout<<marks[i]<<",";
    }
    return 0;
}