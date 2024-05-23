#include<iostream>
#include <string>
using namespace std;
class bank_account{
    public:
    string name_borr, acc_type;
    int acc_num, bal , amt , curr_bal;
    public: 
    int assignvalue(){
        cout<<"enter detail below:"<<endl;
        cout<<"borrower name:";
        getline(cin,name_borr);
        cout<<"account type: ";
        cin>>acc_type;
    }
    int deposition(){
        cout<<endl<<"enter deposit amount:";
        cin>>amt;
        cout<<endl<<"borrower name: "<<name_borr<<endl<<"current balance:"<<amt+curr_bal<<endl;
    } 
    int checkbalance(){
       curr_bal=50000; //default balance set by user
       cout<<endl<<"your current balance is: "<<curr_bal<<endl; 
    }
    
    int withdrawal(){
        cout<<endl<<"enter withdrawal amount: ";
        cin>>amt;
        cout<<"borrower name: "<<name_borr<<endl<<"current balance:"<<curr_bal-amt<<endl;
    }
};
int main(){
    bank_account cm;
    cm.assignvalue();
    int choice;

    cout<<endl<<"1.deposition.";
    cout<<endl<<"2.withdrawal."<<endl;
    cout<<endl<<"select transaction type:"<<endl;
    cin>>choice;

    switch (choice)
    {
        case 1:
        cm.checkbalance();
        cm.deposition();
        break;
        case 2:
        cm.checkbalance();
        cm.withdrawal();
        break;
        default:
        cout<<"\nInvalid choice\n.";
        break;
    }
}