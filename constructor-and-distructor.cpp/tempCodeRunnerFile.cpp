#include <iostream>
using namespace std;

class employee{
    private:
    int salary,hra=0;

    public:
    employee(){
        salary =0;
    }
    employee(int a){
        salary=a;
    }
    employee(int b,int c){
        salary =b;
        hra =c;
    }

    void display(){
        cout<<"salary = "<<salary<<" hra "<<hra<<endl;
        cout<<" total salary "<<salary+hra<<endl;
    }
};

int main(){
    employee a,b(5000),c(7000,3000);