#include<iostream>
 using namespace std;
 class employee
 {
 	private:
 		int  emp_name;
 		int  emp_id;
 		
 	public:
 		void getdata()
 		{
 			cout<<"Enter the employee name::"<<endl;
 			cin>>emp_name;
 			
 			cout<<"Enter the employee id::"<<endl;
 			cin>>emp_id;
 			
 			
		 }
		 void display_details()
		 {
		 	cout<<"Employee name is::"<<emp_name<<endl;
		 	cout<<"Employee id is::"<<emp_id<<endl;
		 	
		 	
		 }
	};
	int main()
	{
		employee E1;
		E1.getdata();
		E1.display_details();
	}
	
