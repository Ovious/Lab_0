using namespace std;



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
