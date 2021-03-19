#include "Customer.h"
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

template <typename T>
class Profit
{
	public:
		/*void getsoldamount(int x,Customer& c)
		{
			sold_amount[x]= c.bought_amount;
			cout << sold_amount[x]<<endl;
		}*/
		vector <T> sold_amount;
		T Bought_Amount;
		T profitshow()
		{
			int x=totalshow(sold_amount.size());
			cout << "\nAdmin Enter the Shipment of Bought Amount:"<< endl;
			cin >> Bought_Amount;
			cout << (x-Bought_Amount) << endl;
			
		}
		T totalshow(int x)
		{
			int total=0;
			for(int i=0;i<x;i++)
			{
				total=sold_amount[i]+total;
			}
			return total;
		}
		bool check(string ks)
		{
			if(ks=="abcd")
			return true;
			return false;
		}
		void sortshow(int x)
		{
		    sort(sold_amount.begin(),sold_amount.end());
			for(int i=0;i<x;i++)
			cout << sold_amount[i]<<endl;	
		}
};
