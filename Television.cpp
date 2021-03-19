#include "Television.h"

void Television::features(int x)
{
	cout << "Serial no:" << serial << endl<< endl;
	cout << "Model:" << model << endl<< endl;
	//cout << "Ram:" << ram << endl<< endl;
	//cout << "Rom:" << rom << endl<< endl;
	//cout << "CamFront:" << camf << endl<< endl;
	//cout << "Camback:" << camb << endl<< endl;
	cout << "Price:" << price << endl<< endl;
	cout << "Screen:" << screen << endl<< endl;
}

string Television::getmodel()
{
	return model;
}
double Television::getprice()
{
	return price;
}

void Television::operator+(Television &t)
{
	cout << "FIRST ONE\n";
    cout << "Serial no:" << serial << endl<< endl;
	cout << "Model:" << model << endl<< endl;
	//cout << "Ram:" << ram << endl<< endl;
//	cout << "Rom:" << rom << endl<< endl;
//	cout << "CamFront:" << camf << endl<< endl;
//	cout << "Camback:" << camb << endl<< endl;
	cout << "Price:" << price << endl<< endl;
	cout << "Screen:" << screen << endl<< endl;
	cout << "Second one\n";
	cout << "Sl no:" << t.serial << endl<< endl;
	cout << "Model:" << t.model << endl<< endl;
	//cout << "Ram:" << m.ram << endl<< endl;
	//cout << "Rom:" << m.rom << endl<< endl;
	//cout << "CamFront:" << m.camf << endl<< endl;
	//cout << "Camback:" << m.camb << endl<< endl;
	cout << "Price:" << t.price << endl<< endl;
	cout << "Screen:" << t.screen<< endl<< endl;
	double disc = ((price+t.price)*.79);
	cout << "Discounted price = "<< disc;
}

