//============================================================================
// Name        : exam_re.cpp
// Author      : Judit
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>

#include "Company.hpp"
#include "Developer.hpp"
#include "Recruiter.hpp"

using namespace std;

int main() {
	cout << "!!" << endl;

	Company comp(1000);

	Developer* dev1 = new Developer("Toth Jozsi");
	dev1->work(20);

	Developer* dev2 = new Developer("Markus Sandor");
	dev2->work(120);

	Recruiter* rec1 = new Recruiter("Mancika");
	rec1->work(95);

	cout << "Markus Sandor " << dev2->pay() << " pay" << endl;

	comp.add_employee(dev1);
	comp.add_employee(dev2);
	comp.add_employee(rec1);

	comp.get_status();

	return 0;
}
