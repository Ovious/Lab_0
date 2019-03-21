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
