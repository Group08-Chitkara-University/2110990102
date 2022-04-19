#include <iostream>
using namespace std;

class ATM{
    private:
    int bankbalance,account_number;string name;
    int withdrawl;

    public:
    ATM(int ac,int wd,string c){
        bankbalance =14444;
        account_number =ac;
        name = c;
        withdrawl =wd;
    }


    void moneyout(){
        cout<<"your remaining amount is "<<bankbalance - withdrawl<<endl;

    }

    void bankstatement(){
        cout<<"your name is "<<name<<endl;
        cout<<"your bank account no is "<<account_number<<endl;
        cout<<"your bank balance is "<<bankbalance<<endl;
    }



};

int main(){
    int account_number;
    string name;
    cout<<"Enter your name "<<endl;
    cin>>name;
    cout<<"Enter your account number"<<endl;
    cin>>account_number;

    int withdrawl;
    cout<<"enter the amount you want to witdrawl"<<endl;
    cin>>withdrawl;


    ATM  debitcard(account_number,withdrawl,name);
    debitcard.moneyout();

return 0;
}