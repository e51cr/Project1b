// Elena Cruz
// CS 20A
// Assignment 1
// Part 2: Base class: Animal. With dervived classes: Zebra and Dolphin.

/*Write a program with a parental class ('Animal'). 
Inside it define a name and an age variables, and set_value() function.
Then create two child classes( Zebra and Dolphin) which write a message 
telling the age, the name, and place of birth ('Africa' for Zebra and 'Ocean' for Dolphin).*/

#include <iostream>
#include <string>

using namespace std;

class Animal
{
private:
	string name;
	int age;
	string pOb; //place of birth
public:
	Animal() 
	{

	}
	Animal(string name, int age, string pOb)
	{
		this->name = name;
		this->age = age;
		this->pOb = pOb;
	}
	void setName(string animalName)
	{
		name = animalName;
	}
	string getName()
	{
		return name;
	}
	void setAge(int animalAge)
	{
		age = animalAge;
	}
	int getAge()
	{
		return age;
	}
	void setPoB(string placeOfBirth)
	{
		pOb = placeOfBirth;
	}
	string getPoB()
	{
		return pOb;
	}
};

class Zebra : public Animal 
{
public:
	Zebra()
	{
		setPoB("Africa");
		setName("Zebra");
		setAge(13);
	}
	void print()
	{
		cout << "Name: " << getName() << endl;
		cout << "Age: " << getAge() << endl;
		cout << "Place of Birth: " << getPoB() << endl;
	}


};

class Dolphin : public Animal 
{
public:
	Dolphin()
	{
		setPoB("Ocean");
		setName("Dolphin");
		setAge(21);
	}
	void print()
	{
		cout << "Name: " << getName() << endl;
		cout << "Age: " << getAge() << endl;
		cout << "Place of Birth: " << getPoB() << endl;
	}

};

int main()
{
	Zebra zebra;
	Dolphin dolphin;

	zebra.print();
	dolphin.print();

	return 0;
}