#include<string>
#include<iomanip>
using namespace std;
#ifndef MOBILE_H
#define MOBILE_H

class Mobile
{
	public:
	//	friend void showsearchedprice(Mobile *m,double a,double b,int cnt);
		void operator+(Mobile& m);
		double gprice();
		string gmodel();
		//friend void buymob(Mobile& m);
		friend void getuserinfo(int x,Mobile& k);
		friend void datafrommobile(Mobile *m);
		//friend void buymobile(int x,Mobile *m);
		void features(int i);
	protected:
		int serial;
		long long imei;
		string model;
	    string ram;
		string rom;
		string battery;
		string camf;
		string camb;
		double price;
};

#endif

