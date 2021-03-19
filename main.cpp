#include"buymobile.h"
#include"buytv.h"
#include"Profit.cpp"
#include"Adminpan.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


//void showsearchedprice(Mobile *m,double a,double b,int cnt);


int main() {
	int jp=0;
	int countmob,counttv,countfridge;
	countmob= cntmb();
	counttv= cnttv();
	Mobile *m;
	m= new Mobile[countmob];
	datafrommobile(m);
	Television *t;
	t=new Television[counttv];
	datafromtv(t);
	Profit <double> p;
	//cout << countmob;
	cout << "************Welcome TO  LOTHBROK ELECTRONICS*************\n\n\n";
	A:
	cout << "\nWhat would you like to buy?\n\n";
	cout <<"Press 1 for Mobiles\nPress 2 for Televisions\nPress 3 for Entering Admins\nPress 4 to exit\nPress:";
	int n;
	cin >> n;
	Customer *c;
	double d;
	c=new Customer[1000];
	int cstmsize;
	 
	if(n==1)
	{
		cout << "\nOPTIONS :\n\n1.Show all mobiles(press 1)\n2.Search using price\n3.SPECIAL OFFER\n";
		int x;
		cin >> x;
		if(x==1)
		{
			for(int i=0;i<countmob;i++)
			{
				m[i].features( i+1);
				cout << endl << endl;
			}
			cout << "\nWould you like to buy any (press y for yes and n for no)\n\nPress:";
			char sss;
			cin >> sss;
			if(sss=='y')
			{
				cout << "\nEnter the serial number of your chosen product:";
				cin >> x;
			    cstmsize=customersize();
			//	cout << cstmsize << endl;
				if(cstmsize>1000){
				cout << "Customer Limit Exceeded\n";
				return 0;}
			//	c=new Customer[cstmsize+1];
			//	c[cstmsize].buymob(m[x-1]);
			    cout << "\n\n Your chosen product:\n";
			    m[x-1].features(x);
			    c[cstmsize].userinfo(cstmsize+1);
			    updatecstmsize(cstmsize+1);
			    updatecustomerinfo(m[x-1],c[cstmsize]);
			    //p.getsoldamount(cstmsize,c);
				d=m[x-1].gprice();
				//cout << d << endl;
		    	p.sold_amount.push_back(d);
				jp++;
				//cout << p.sold_amount[jp];
				goto A;			
			}
			else
			  goto A;
		}
		else if(x==3)
		{
			cout << "\n\n-->Buy any two mobiles with 21% discount<--\n\n";
			cout << "Do you want to see the availlable mobiles?(y/n)\n";
			char ss;
			cin >> ss;
			if(ss=='y')
			{
			    for(int i=0;i<countmob;i++)
			       {
				        m[i].features( i+1);
				        cout << endl << endl;
			        }
				cout << "Enter the Sl numbers of the mobiles you would like to buy:\n";
				int a1,a2;
				cin >> a1 >> a2;
				cstmsize=customersize();
				//c=new Customer[cstmsize+1];
				if(cstmsize>1000){
				cout << "Customer Limit Exceeded\n";
				return 0;}
				cout << "\nYour chosen products with discount : ";
				m[a1-1]+m[a2-1];		
				c[cstmsize].userinfo(cstmsize+1);
				updatecstmsize(cstmsize+1);
				updatecustomerinfo(m[a1-1],m[a2-1],c[cstmsize]);
			//	p.sold_amount[cstmsize]=c[cstmsize].bought_amount;
			//	cout <<  c[cstmsize].bought_amount <<endl; 
			    //p.getsoldamount(cstmsize,c);
				d=(m[a1-1].gprice()+m[a2-1].gprice())*.79;
			p.sold_amount.push_back(d);
				jp++;		
				goto A;	
			}
			else
			goto A;
			
		}
		else if(x==2)
		{
			cout << "Enter your price range:";
			double a,b;
			cout << "\nLower Range: ";
			cin >> a;
			cout << "\nUpper Range: ";
			cin >> b;
			//showsearchedprice(m,a,b,countmob);
			for (int i=0;i<countmob;i++)
	        {
			   // cout << "Dhukse\n";
				if(a<=m[i].gprice() && b>=m[i].gprice())
		        m[i].features(i+1);
	        }
			cout << "\nDo you want to buy any ?(y/n)\n";
			char so;
			cin >> so;
			if(so=='y')
			{
				int f;
				cout << "\nEnter the serial number of your chosen product:";
				cin >> f;
			    cstmsize=customersize();
				cout << cstmsize << endl;
					if(cstmsize>1000){
				cout << "Customer Limit Exceeded\n";
				return 0;}
				//c=new Customer[cstmsize+1];
			//	c[cstmsize].buymob(m[x-1]);
			    cout << "\n\n Your chosen product:\n";
			    m[f-1].features(x);
			    c[cstmsize].userinfo(cstmsize+1);
			    updatecstmsize(cstmsize+1);
			    updatecustomerinfo(m[f-1],c[cstmsize]);  
			  //  p.sold_amount[cstmsize]=c[cstmsize].bought_amount;
				//cout <<  c[cstmsize].bought_amount <<endl; 
				//p.getsoldamount(cstmsize,c);	
				d=m[f-1].gprice();
				p.sold_amount.push_back(d);
				jp++;		
				goto A;
			}
			else
			  goto A;
		}
		else
		goto A;
	}
	else if(n==4)
	{
		cout << "\nThanks for staying with LOTHBROK ELECTRONICS";
		return 0;
	}
	else if(n==2)
	{
		cout << "\nOPTIONS :\n\n1.Show all televisions(press 1)\n2.Search using price\n3.SPECIAL OFFER\n";
		int fs;
		cout << "PRESS:";
		cin >> fs;
		if(fs==1)
		{
			for(int i=0;i<counttv;i++)
			{
				t[i].features( i+1);
				cout << endl << endl;
			}
			cout << "\nWould you like to buy any (press y for yes and n for no)\n\nPress:";
			char ssss;
			cin >> ssss;
			if(ssss=='y')
			{
				cout << "\nEnter the serial number of your chosen product:";
				cin >> fs;
			    cstmsize=customersize();
				cout << cstmsize << endl;
				
				//c=new Customer[cstmsize+1];
			//	c[cstmsize].buymob(m[x-1]);
				if(cstmsize>1000){
				cout << "Customer Limit Exceeded\n";
				return 0;}
			    cout << "\n\n Your chosen product:\n";
			    t[fs-1].features(fs);
			    c[cstmsize].userinfo(cstmsize+1);
			    updatecstmsize(cstmsize+1);
			    updatecustomerinfotv(t[fs-1],c[cstmsize]);
				//p.sold_amount[cstmsize]=c[cstmsize].bought_amount;
				//cout <<  c[cstmsize].bought_amount <<endl; 
				//p.getsoldamount(cstmsize,c);	
				d=t[fs-1].getprice();
				p.sold_amount.push_back(d);
				jp++;
				goto A;		  
			
		}
    }
		else if(fs==3)
		{
			cout << "\n\n-->Buy any two televisions with 21% discount<--\n\n";
			cout << "Do you want to see the availlable televisions?(y/n)\n";
			char sd;
			cin >> sd;
			if(sd=='y')
			{
			    for(int i=0;i<counttv;i++)
			       {
				        t[i].features( i+1);
				        cout << endl << endl;
			        }
				cout << "Enter the Sl numbers of the televisions you would like to buy:\n";
				int b1,b2;
				cin >> b1 >> b2;
				cstmsize=customersize();
				//c=new Customer[cstmsize+1];
					if(cstmsize>1000){
				cout << "Customer Limit Exceeded\n";
				return 0;}
				cout << "\nYour chosen products with discount : ";
				t[b1-1]+t[b2-1];		
				c[cstmsize].userinfo(cstmsize+1);
				updatecstmsize(cstmsize+1);
				updatecustomerinfotv(t[b1-1],t[b2-1],c[cstmsize]);
				//p.sold_amount[cstmsize]=c[cstmsize].bought_amount;
				//cout <<  c[cstmsize].bought_amount <<endl; 
				//p.getsoldamount(cstmsize,c);
				d=(t[b1-1].getprice()+t[b2-1].getprice())*.79;
				p.sold_amount.push_back(d);
				jp++;
				goto A;			
			}
			else
			goto A;
		}
		else if(fs==2)
		{
			cout << "Enter your price range:";
			double a3,b3;
			cout << "\nLower Range: ";
			cin >> a3;
			cout << "\nUpper Range: ";
			cin >> b3;
			//showsearchedprice(m,a,b,countmob);
			for (int i=0;i<countmob;i++)
	        {
			   // cout << "Dhukse\n";
				if(a3<=t[i].getprice() && b3>=t[i].getprice())
		        t[i].features(i+1);
	        }
			cout << "\nDo you want to buy any ?(y/n)\n";
			char soo;
			cin >> soo;
			if(soo=='y')
			{
				int fx;
				cout << "\nEnter the serial number of your chosen product:";
				cin >> fx;
			    cstmsize=customersize();
				//cout << cstmsize << endl;
				
				//c=new Customer[cstmsize+1];
			//	c[cstmsize].buymob(m[x-1]);
				if(cstmsize>1000){
				cout << "Customer Limit Exceeded\n";
				return 0;}
			    cout << "\n\n Your chosen product:\n";
			    t[fx-1].features(fx);
			    c[cstmsize].userinfo(cstmsize+1);
			    updatecstmsize(cstmsize+1);
			    updatecustomerinfotv(t[fx-1],c[cstmsize]); 
				//p.sold_amount[cstmsize]=c[cstmsize].bought_amount;
				//cout <<  c[cstmsize].bought_amount <<endl;
				//p.getsoldamount(cstmsize,c);
				d=t[fx-1].getprice();
			p.sold_amount.push_back(d);
				jp++;
				goto A;		 
			}
			else
			  goto A;
		}
	}
	else if(n==3)
	{
		cout << "\nPlease Enter the password:";
		string ks;
		cin.ignore();
		getline(cin,ks);
		//Admin a(ks);
		int df;
	    //a.soldproductdetails(c);
	    bool bl= p.check(ks);
	    if(bl==1){
	    cout << "1.Show Profits(press 1)\n2.Sold Products Sorted Price(Press 2)\npress:";
	    cin >> df;
	    if(df==1)
	    {
	    	cout << "Total Sold:" << p.totalshow(jp);
	    	p.profitshow();
		}
		else if(df==2)
		{
			cout << "Sorted products :";
			p.sortshow(jp);
		}
		}
		goto A;
	}
	else 
	goto A;
	
	
	return 0;
}
