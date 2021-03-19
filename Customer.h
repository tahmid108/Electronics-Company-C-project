#include"Mobile.h"
#include<iostream>
using namespace std;
#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer
{
	public:
		int getid();
		string getname();
		string getaddress();
		int getage();
		//friend void updatecustomerinfo(Mobile &m,Customer& c);   
		void userinfo(int x);
		//void buymob(Mobile& m);
		Customer();
		Customer(Customer& C);
		~Customer();
		double bought_amount;
	protected:
		int customerid;
		string cname;
        string caddress;
        int cage;
       // double bought_amount;
};

#endif
