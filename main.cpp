#include <cstdlib>
#include <iostream>

using namespace std;

class Person
{
	private: 
		string name_;
	public:
		void getName(){
			cout<<"Insert name"<<endl;
			cin>>name_;
		}
		
		void printName()
		{
			cout<< name_ << endl;
		}
};

class Salary
{
	private:
		int salary_;
	public:
		void insertSalary(){
			cout<<"Insert your salary"<<endl;
			cin>>salary_;
		}
		void compare( Salary x){
			if(salary_ >= x.salary_)
			cout<<"First salary is greater than second one"<<endl;
			else
				cout<<"Second salary is greater than the first one"<<endl;
		}
};

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
