/*
 * Company.cpp
 *
 *  Created on: 2016. dec. 16.
 *      Author: Judo
 */

#include "Company.hpp"

#include <sstream>

#include <iostream>

using namespace std;

Company::Company(unsigned int initial_balance) {
	money_balance = initial_balance;
}

Company::~Company() {
}

void Company::add_employee(Employee* emp) {
	employees.push_back(emp);
}

void Company::add_revenue(unsigned int topup) {
	money_balance += topup;
}

string Company::get_best_employees_name() {

	if (employees.size() > 0) {
		int max_index = 0;
		int max_worked_hours = employees[0]->get_worked_hours();

		for (unsigned int i = 1; i < employees.size(); i++) {
			if ((int) employees[i]->get_worked_hours() > max_worked_hours) {
				max_worked_hours = employees[i]->get_worked_hours();
				max_index = i;
			}
		}

		return employees[max_index]->get_name();

	} else {
		return "";
	}
}

void Company::give_bonuses() {
	for (unsigned int i = 0; i < employees.size(); i++) {
		if (employees[i]->get_worked_hours() > 100) {
			employees[i]->raise();
		}
	}
}

string Company::get_status() {

	cout << "Balance: " << money_balance << endl;
	cout << "Employee count: " << employees.size() << endl;
	cout << "Employees:" << endl;

	for (unsigned int i = 0; i < employees.size(); i++) {
		employees[i]->get_status();
	}

	return "";
}


