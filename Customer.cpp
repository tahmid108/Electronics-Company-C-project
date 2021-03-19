#include "Customer.h"

Customer::Customer()
{
}

Customer::~Customer()
{
	
}
void Customer :: userinfo(int x)
{
	customerid=x;
	cout <<"\nPlease Enter your name:";
	cin.ignore();
	getline(cin,cname);
	cout <<"\nPlease Enter your Address:";
	getline(cin,caddress);
	cout <<"\nPlease Enter your age:";
	cin >> cage;
}
int Customer::getid()
{
	return customerid;
}
string Customer::getname()
{
	return cname;
}
string Customer::getaddress()
{
	return caddress;
}
int Customer::getage()
{
	return cage;
}
Customer::Customer(Customer &C)
{
	cname=C.getname();
	cage=C.getage();
	caddress=C.getaddress();
	
}
