#include <cstdlib>
#include <iostream>
#include "osoba.h"
#include "zarobki.h"

using namespace std;


int main(){
	Person person1, person2;
	person1.getName();
	person2.getName();
	person1.printName();
	person2.printName();
	Salary sal1;
	Salary sal2;
	sal1.insertSalary();
	sal2.insertSalary();
	sal1.compare(sal2);
	
	return 0;
}
