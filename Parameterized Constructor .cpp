#include<iostream>
 using namespace std;
 
  class Employee
  {
  	int empId;
  	string name;
	float salary;
	
	public:
		Employee(int id,string n,float s)
		{
			empId = id;
			name = n;
			salary = s;
		}
		void display()
		{
			cout<<"Employee ID  :"<< empId<<endl;
				cout<<"Name :"<< name<<endl;
					cout<<"Salary.RS  :"<< salary<<endl;	
		}
  };
  int main()
  {
  	Employee e1(1001,"Reddy",350000);
  	
  	e1.display();
  	
  	return 0;
  }
