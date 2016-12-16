/*
 * Employee.cpp
 *
 *  Created on: 2016. dec. 16.
 *      Author: Judo
 */
#include "Employee.hpp"

#include <sstream>
#include <iostream>

using namespace std;

Employee::Employee(string name) {
	type = "Employee";
	base_salary = 0;
	hours_worked = 0;
	the_raise = 0;
	this->name = name;
}

Employee::~Employee() {
}

string Employee::get_type() {
	return type;
}


void Employee::raise(){
	base_salary += the_raise;
}

void Employee::work(unsigned int hours) {
	if (hours < 4) {
		throw "less than 4 hours!";
	}
	hours_worked += hours;
}

unsigned int Employee::pay() {
	unsigned int result = base_salary * hours_worked;
	hours_worked = 0;
	return result;
}

unsigned int Employee::get_worked_hours(){
	return hours_worked;
}

string Employee::get_name(){
	return name;
}


string Employee::get_status() {
	cout << "Name: " << name << " Wokred Hours: " << hours_worked
			<< ", Base Salary: " << base_salary << endl;
	return "";
}
