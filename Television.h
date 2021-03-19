#include<string>
#include<iostream>
using namespace std;
#ifndef TELEVISION_H
#define TELEVISION_H

class Television
{
	public:
		void operator+(Television &t);
		void features(int x);
		string getmodel();
		double getprice();
		friend void datafromtv(Television *t);
	protected:
		int serial;
		string model;
		string screen;
		double price;
};

#endif

