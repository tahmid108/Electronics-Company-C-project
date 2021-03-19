#ifndef BUYTV_H
#define BUYTV_H
#include"Television.h"
#include"Customer.h"
#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
#include<sstream>
using namespace std;

void datafromtv(Television *t);
void updatecustomerinfotv(Television t,Customer& c);
void updatecustomerinfotv(Television t,Television s,Customer& c);



#endif

