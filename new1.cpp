#include<iostream>
using namespace std;
class customer
{
    string name;
    int account_number;
    int balance;

public:
    //default constructor
    customer()
    {
        name="rohit";
        account_number=1235;
        balance=12000;
    }
    //parameterized constructor
    customer(string name,int account_number,int balance)
    {
        this->name=name;
        this->account_number=account_number;
        this->balance=balance;
    }
    //copy constructor
    customer(const customer &B)
    {
        name=B.name;
        account_number=B.account_number;
        balance=B.balance;
    }
    //constructor overloading
    customer(string a,int b)
    {
        name=a;
        account_number=b;
        balance=12000;
    }
    void display()
    {
        cout<<name<<""<<account_number<<""<<balance<<endl;
    }
};
    int main()
{
    customer A1;
    A1.display();
    customer A2("rohit",1235,12000);
    A2.display();
    customer A3("mohit",23);
    A3.display();
    customer A4(A3);
    A4.display();

}