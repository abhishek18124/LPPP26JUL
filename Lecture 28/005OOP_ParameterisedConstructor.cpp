#include<iostream>

using namespace std;

class customer {

public :

	string name;
	int age;
	char gender;
	double credits;

	void print() {
		cout << "name = " << name << endl;
		cout << "age = " << age << endl;
		cout << "gender = " << gender << endl;
		cout << "credits = " << credits << endl;
	}

	customer(string n, int a, char g, double c) {
		cout << "\nI am inside the parameterised constructor of the customer class\n";
		name = n;
		age = a;
		gender = g;
		credits = c;
	}

	customer() {
		cout << "\nI am inside the default constructor of customer\n";
	}
};



int main() {

	customer c("Ramanujan", 32, 'M', 1729); // parameterised constructor is invoked here to init the customer obj

	c.print();

	customer c2;

	return 0;

}