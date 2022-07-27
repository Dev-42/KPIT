#include<iostream>
#include<cmath>
#include"bitmap.h"
using namespace std;
//Default constructor
Complex::Complex()
{
	/////////////////
	real = 0;
	img = 0;
}
	
Complex::Complex(int r, int i)
{
	////////////////
	real = r;
	img = i;
}
	
void Complex::Accept()
{
	/////////////
	

}

void Complex::Display()
{
	//////////////
	cout<< real <<" "<<img<<" +i"<<endl;
}
	
Complex Complex::operator+(Complex &c)
{
	Complex temp;
	///////////////////
	temp.real = real + c.real;
	temp.img = img + c.img;
	return temp;
}
	
Complex Complex::operator-(Complex &c)
{
	Complex temp;
	////////////////
	temp.real = real - c.real;
	temp.img = img - c.img;
	return temp;

}
Complex Complex::operator++()
{
	Complex temp;
	/////////
	temp.real = ++real;
	temp.img = ++img;
	return temp;
}
	
Complex Complex::operator++(int)
{
	Complex temp;
	///////////////////
	temp.real = real++;
	temp.img = img++;
	return temp;
}


bool Complex::operator==(Complex &c)
{
	bool flag=true;
	/////////////////
	int res1 = CalMod(real,img);
	int res2 = CalMod(real,img);
	if(res1 != res2)
		flag = false;
	return flag;
}


	
	
	
	
	


