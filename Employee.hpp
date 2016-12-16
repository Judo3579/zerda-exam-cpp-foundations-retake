/*
 * Employee.hpp
 *
 *  Created on: 2016. dec. 16.
 *      Author: Judo
 */

#ifndef EMPLOYEE_HPP_
#define EMPLOYEE_HPP_

#include <string>

using namespace std;

class Employee {

protected:
	string name;
	unsigned int base_salary;
	unsigned int hours_worked;

	unsigned int the_raise;

	string type;

public:
	Employee(string name);
	virtual ~Employee();

	void raise();
	void work(unsigned int hours);
	unsigned int pay();

	unsigned int get_worked_hours();
	string get_name();
	string get_type();
	string get_status();
};




#endif /* EMPLOYEE_HPP_ */
