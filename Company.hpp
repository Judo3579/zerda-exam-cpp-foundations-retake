/*
 * Company.hpp
 *
 *  Created on: 2016. dec. 16.
 *      Author: Judo
 */

#ifndef COMPANY_HPP_
#define COMPANY_HPP_
#include <vector>

#include "Employee.hpp"

using namespace std;

class Company {

protected:

	std::vector<Employee*> employees;

	unsigned int money_balance;

public:
	Company(unsigned int initial_balance);
	virtual ~Company();

	void add_employee(Employee* emp);
	void add_revenue(unsigned int topup);

	string get_best_employees_name();
	void give_bonuses();

	string get_status();
};




#endif /* COMPANY_HPP_ */
