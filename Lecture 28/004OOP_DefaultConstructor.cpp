#include<iostream>

using namespace std;

class customer {

public :

	customer() {
		cout << "\nI am inside the default constructor of customer\n";
	}

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
};

int main() {

	customer c1; // here, default constructor of customer class is invoked automatically

	return 0;
}