// citytest.cpp
#include <iostream>
#include <string>
using namespace std;
class CityTest1
{
char name[12]; //attribute
int popn; //attribute
public:
	CityTest1(char input[]) //constructor
	{
		strcpy_s(name, input); //copy the string from name into input
	}
	
	char* getName()
	{
		return name; //returns the string name
	}	
	void setPopn(int size) 
	{
		popn = size; //set the size of the population
	}
	int getPopn()
	{
		return popn; //returns the value of the population
	}
	void City1();
};


void CityTest1::City1()

{
	char* place = new char[10]{ "Cambridge" };
	
	CityTest1 acity(place); //create new object of class city and assigning it a name
	CityTest1* x = &acity;
	acity.setPopn(300000);
	cout << "City is: " << x->getName() << ". With a population of: " << acity.getPopn() << endl;
	//prompt the user with the result
	delete [] place;
	
	place = new char[8]{ "Ipswich" };
	//strcpy_s(place,"Ipswich"); //replace string 
	CityTest1 bcity(place); //create new object of class city and assign new attributes
	CityTest1* y = &bcity;
	bcity.setPopn(400000);
	cout << "City is: " << y->getName() << ". With a population of: " << bcity.getPopn() << endl;
	//prompt the user with the result
	delete[] place;
	system("PAUSE");
}