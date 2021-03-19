#ifndef ADMINPAN_H
#define ADMINPAN_H

#include<iostream>
using namespace std;
//#include "Profit.cpp"
#include"Mobile.h"
#include"Television.h"
#include"Customer.h"

class Adminpan : public Mobile,public Television,public Customer
{
	public:
		Adminpan(string pass);
		~Adminpan();
		Adminpan(Mobile &m);
		Adminpan(Television &t);
		Adminpan(Customer &c);
		friend istream& operator>>(istream& input,Adminpan &a);
		friend ostream& operator<<(ostream& output,Adminpan &a);
	protected:
		string aname;
		int id;
};

#endif
