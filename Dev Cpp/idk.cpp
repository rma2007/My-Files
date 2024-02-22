#include<iostream>
using namespace std;
int main()
{
	system("Color 0F");
	string name;
	int age;
	cout << "Please enter a name for your character." << endl;
	cout << "--->"; cin >> name;
	cout << "Please enter the age of character." << endl;
	cout << "--->"; cin >> age;
	cout << "\nYour character name is " << name << " and his/her age is " << age << endl;
	return 0;
}
