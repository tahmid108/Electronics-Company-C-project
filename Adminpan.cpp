#include "Adminpan.h"

Adminpan::Adminpan(string pass)
{
	if(pass=="abcd")
	{
	
	  cin >> aname;
	  cin >>id;
    }
}
Adminpan::Adminpan(Mobile &m)
{
	Mobile::price=m.gprice();
	Mobile::model=m.gmodel();
}

Adminpan::Adminpan(Television &t)
{
	Television::price=t.getprice();
    Television::model=t.getmodel();
}
Adminpan::Adminpan(Customer &c)
{
	Adminpan::bought_amount=c.bought_amount;
}
istream& operator>>(istream& input,Adminpan &a)
{
	cout << "\nADMIN ID:";
	input >> a.id;
	input.ignore();
	cout << "\nAdmin Name:";
	getline(input,a.aname);
	
	return input;
}

ostream& operator<<(ostream& output,Adminpan &a)
{
	cout << "NAME:"<<a.aname<<endl<<"ID"<<a.id;
}

Adminpan::~Adminpan()
{
	
}
