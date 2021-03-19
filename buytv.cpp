#include"buytv.h"


void datafromtv(Television *t)
{
	ifstream fin("Tv.txt");
	string line;
	//cout << line << endl;
	getline(fin,line);
	//cout << line;
	getline(fin,line);
	//cout << line;
	//stringstream sin(line);
	int i=0;
	while(getline(fin,line))
	{
		//cout << line;
		stringstream sin(line);
		sin >> t[i].serial;
	//	cout << m[i].serial<<endl;
		sin >> t[i].model;
		sin >> t[i].screen;
		sin >> t[i].price;
	//  cout<< m[i].serial<<endl;
	
	    i++;
    }
}
void updatecustomerinfotv(Television t,Customer& c)
{
	c.bought_amount=t.getprice();
	cout << endl << endl;
	cout << "Customer id:" <<c.getid() << endl;
	cout << "Customer name:"<<c.getname()<<endl;
	cout <<"Customer address:" << c.getaddress() << endl;
	cout << "Customer Age:"<<c.getage() << endl;
	//cout << "Frist Product\n";
	cout << "Bought product:" << t.getmodel() << endl;
	cout << "Price(tk):" <<setprecision(2)<<setiosflags(ios::fixed)<< t.getprice() << endl<<endl;
	//cout << "Second Product\n";
	//cout << "Bought product:" << n.gmodel() << endl;
	//cout <<"Price(tk):" << n.gprice() << endl;
	//cout << "\nTotal Price:"<<m.gprice()+n.gprice()<<endl;
	//cout <<"\nDiscounted Price:"<<(m.gprice()+n.gprice())*.79<<endl;
	ofstream fot("Customerinfo.txt",ios::app);
	fot << endl << endl;
	fot << "Customer id:" <<c.getid() << endl;
	fot << "Customer name:"<<c.getname()<<endl;
	fot << "Customer address:" << c.getaddress() << endl;
	fot << "Customer Age:"<<c.getage() << endl;
	fot << "Bought product:" << t.getmodel() << endl;
	fot << "Price(tk):" <<setprecision(2)<<setiosflags(ios::fixed)<< t.getprice() << endl;
	
}

void updatecustomerinfotv(Television t,Television s,Customer &c)
{
	//void updatecustomerinfo(Mobile m,Mobile n,Customer c)
//{

    c.bought_amount=(t.getprice()+s.getprice())*.79;
    cout << "Customer id:" <<c.getid() << endl;
	cout << "Customer name:"<<c.getname()<<endl;
	cout <<"Customer address:" << c.getaddress() << endl;
	cout << "Customer Age:"<<c.getage() << endl;
	cout << "Frist Product\n";
	cout << "Bought product:" << t.getmodel() << endl;
	cout << "Price(tk):" <<setprecision(2)<<setiosflags(ios::fixed)<< t.getprice() << endl;
	cout << "Second Product\n";
	cout << "Bought product:" << s.getmodel() << endl;
	cout <<"Price(tk):" <<setprecision(2)<<setiosflags(ios::fixed)<< s.getprice() << endl;
	cout << "\nTotal Price:"<<setprecision(2)<<setiosflags(ios::fixed)<<t.getprice()+s.getprice()<<endl;
	cout <<"\nDiscounted Price:"<<setprecision(2)<<setiosflags(ios::fixed)<<(t.getprice()+s.getprice())*.79<<endl<<endl;
	ofstream fot("Customerinfo.txt",ios::app);
	fot << endl << endl;
	fot << "Customer id:" <<c.getid() << endl;
	fot << "Customer name:"<<c.getname()<<endl;
	fot << "Customer address:" << c.getaddress() << endl;
	fot << "Customer Age:"<<c.getage() << endl;
	fot << "Frist Product\n";
	fot << "Bought product:" << t.getmodel() << endl;
	fot << "Price(tk):" << t.getprice() << endl;
	fot << "Second Product\n";
	fot << "Bought product:" << s.getmodel() << endl;
	fot << "Price(tk):" << s.getprice() << endl;
	fot << "\nTotal Price:"<<t.getprice()+s.getprice()<<endl;
	fot << "\nDiscounted Price:"<<(t.getprice()+s.getprice())*.79<<endl;
}
