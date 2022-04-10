#include <iostream>
using namespace std;

int main(){
    int Physics , Chemistry, Biology, Maths , Computer;
    cin>>Physics>>Chemistry>>Biology>>Maths>>Computer;
    int percentage = (Physics+Chemistry+Biology+Maths+Computer)/5;
    cout<<"percentage"<<percentage<<endl;

    if (percentage>=90){
        cout<<"Grade A"<<endl;
    }
    else if (percentage>=80)
    {
        cout<<"Grade B"<<endl;
    }
    else if (percentage>=70)
    {
        cout<<"Grade C"<<endl;
    }
    else if(percentage>=60){
        cout<<"Grade D"
    }
    else{
        cout<<"You are fail"<<endl;
    }
return 0;    
}