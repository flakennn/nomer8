#include "Student.h"

int main()
{
	Student me("Gutorov", "Dmitriy", "30.07.03", "KVBO-01-21");
	Student other;
	cout << me << "\n";
	cin >> other;
	me = other;
	cout << "\n" << me;
}