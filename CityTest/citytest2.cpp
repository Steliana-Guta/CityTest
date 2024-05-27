// citytest2.cpp
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
class CityTest2
{
	char name[12]; //attribute
	int popn; //attribute
	
public:
	CityTest2(char input[]) //constructor
	{
		//strcpy_s(name, input); //copy the string from name into input
		cpystr(name, input);
	}
	void cpystr(char destination[], char source[] )
	{
		int length = strlen(source); //takes the length of the string 
		for (int i = 0; i < length + 1; i++)
		{
			destination[i] = source[i];
		}

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
	
};


int main()
{
	char* place = new char[]{ "Cambridge" };

	CityTest2 acity(place); //create new object of class city and assigning it a name 
	CityTest2* x = &acity;
	acity.setPopn(300000);
	cout << "City is: " << x->getName() << ". With a population of: " << x->getPopn() << endl;
	//prompt the user with the result
	delete[] place;

	place = new char[]{ "Ipswich" };
	//strcpy_s(place,"Ipswich"); //replace string 
	CityTest2 bcity(place); //create new object of class city and assign new attributes
	CityTest2* y = &bcity;
	bcity.setPopn(400000);
	cout << "City is: " << y->getName() << ". With a population of: " << y->getPopn() << endl;
	//prompt the user with the result
	delete[] place;
	system("PAUSE");
	return 0;
}