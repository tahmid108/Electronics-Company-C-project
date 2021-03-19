#ifndef BUYMOBILE_H
#define BUYMOBILE_H
#include"Mobile.h"
#include"Customer.h"
#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
#include<sstream>

using namespace std;

void datafrommobile(Mobile *m);
int cntmb();
void updatecustomerinfo(Mobile m,Mobile n,Customer& c);
void updatecustomerinfo(Mobile m,Customer& c);
void updatecstmsize(int x);
int customersize();
//void datafrommobile(Mobile *m);
//int cntmb();
int cnttv();



#endif
