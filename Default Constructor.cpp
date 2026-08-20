#include<iostream>
 using namespace std;
 
  class Employee
  {
  	int empId;
  	string name;
	float salary;
	
	public:
		
		Employee()
		{
			empId = 1001;
			name = "reddy";
			salary = 299999;
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
  	
  	Employee e1;
	  	
  	e1.display();
  	
  	return 0;
  }
