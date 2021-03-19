#include"buymobile.h"

void datafrommobile(Mobile *m)
{
	ifstream fin("Mobile.txt");
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
		sin >> m[i].serial;
	//	cout << m[i].serial<<endl;
		sin >> m[i].model;
		sin >> m[i].imei;
		sin >> m[i].ram;
		sin >> m[i].rom;
		sin >> m[i].camf;
		sin >> m[i].camb;
		sin >> m[i].battery;
		sin >> m[i].price;
	//  cout<< m[i].serial<<endl;
	
	    i++;
	}
}

int cntmb()
{
	int count=0;
	ifstream fin("Mobile.txt");
	string line;
	getline(fin,line);
	getline(fin,line);
	while(getline(fin,line))
	{
		count++;
	}
	
	return count;
}


int cnttv()
{
	int count=0;
	ifstream fin("Tv.txt");
	string line;
	getline(fin,line);
	getline(fin,line);
	while(getline(fin,line))
	{
		count++;
	}
	
	return count;
}


int customersize()
{
	int x;
	ifstream ff("Customersize.txt");
	string line;
	getline (ff,line);
	stringstream ss(line);
	ss >> x;
	return x;
}

void updatecstmsize(int x)
{
	ofstream fout("Customersize.txt");
	fout << x;
}

void updatecustomerinfo(Mobile m,Customer& c)
{
	c.bought_amount=m.gprice();
	cout << endl << endl;
	cout << "Customer id:" <<c.getid() << endl;
	cout << "Customer name:"<<c.getname()<<endl;
	cout <<"Customer address:" << c.getaddress() << endl;
	cout << "Customer Age:"<<c.getage() << endl;
	//cout << "Frist Product\n";
	cout << "Bought product:" << m.gmodel() << endl;
	cout << "Price(tk):" << m.gprice() << endl<<endl;
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
	fot << "Bought product:" << m.gmodel() << endl;
	fot << "Price(tk):" << m.gprice() << endl;
	
}
void updatecustomerinfo(Mobile m,Mobile n,Customer& c)
{
	c.bought_amount=(m.gprice()+n.gprice())*.79;
    cout << "Customer id:" <<c.getid() << endl;
	cout << "Customer name:"<<c.getname()<<endl;
	cout <<"Customer address:" << c.getaddress() << endl;
	cout << "Customer Age:"<<c.getage() << endl;
	cout << "Frist Product\n";
	cout << "Bought product:" << m.gmodel() << endl;
	cout << "Price(tk):" << m.gprice() << endl;
	cout << "Second Product\n";
	cout << "Bought product:" << n.gmodel() << endl;
	cout <<"Price(tk):" << n.gprice() << endl;
	cout << "\nTotal Price:"<<m.gprice()+n.gprice()<<endl;
	cout <<"\nDiscounted Price:"<<(m.gprice()+n.gprice())*.79<<endl<<endl;
	ofstream fot("Customerinfo.txt",ios::app);
	fot << endl << endl;
	fot << "Customer id:" <<c.getid() << endl;
	fot << "Customer name:"<<c.getname()<<endl;
	fot << "Customer address:" << c.getaddress() << endl;
	fot << "Customer Age:"<<c.getage() << endl;
	fot << "Frist Product\n";
	fot << "Bought product:" << m.gmodel() << endl;
	fot << "Price(tk):" << m.gprice() << endl;
	fot << "Second Product\n";
	fot << "Bought product:" << n.gmodel() << endl;
	fot << "Price(tk):" << n.gprice() << endl;
	fot << "\nTotal Price:"<<m.gprice()+n.gprice()<<endl;
	fot << "\nDiscounted Price:"<<(m.gprice()+n.gprice())*.79<<endl;
}

