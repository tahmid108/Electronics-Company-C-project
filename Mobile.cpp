#include "Mobile.h"
#include<iostream>

void Mobile::features(int x)
{
	//cout << x << endl;
	cout << "Serial no:" << serial << endl<< endl;
	cout << "Model:" << model << endl<< endl;
	cout << "Ram:" << ram << endl<< endl;
	cout << "Rom:" << rom << endl<< endl;
	cout << "CamFront:" << camf << endl<< endl;
	cout << "Camback:" << camb << endl<< endl;
	cout << "Price:" << price << endl<< endl;
	cout << "Battery:" << battery << endl<< endl;
}

void Mobile::operator+(Mobile& m)
{
	cout << "FIRST ONE\n";
    cout << "Serial no:" << serial << endl<< endl;
	cout << "Model:" << model << endl<< endl;
	cout << "Ram:" << ram << endl<< endl;
	cout << "Rom:" << rom << endl<< endl;
	cout << "CamFront:" << camf << endl<< endl;
	cout << "Camback:" << camb << endl<< endl;
	cout << "Price:" << price << endl<< endl;
	cout << "Battery:" << battery << endl<< endl;
	cout << "Second one\n";
	cout << "Sl no:" << m.serial << endl<< endl;
	cout << "Model:" << m.model << endl<< endl;
	cout << "Ram:" << m.ram << endl<< endl;
	cout << "Rom:" << m.rom << endl<< endl;
	cout << "CamFront:" << m.camf << endl<< endl;
	cout << "Camback:" << m.camb << endl<< endl;
	cout << "Price:" << m.price << endl<< endl;
	cout << "Battery:" << m.battery << endl<< endl;
	double disc = ((price+m.price)*.79);
	cout << "Discounted price = "<< disc;
}

string Mobile::gmodel()
{
	return model;
}

double Mobile::gprice()
{
	return price;
}
