//NAME(MATRIC NUMBER): YEOH KENG WEI A24CS0316, EDWIN OO MING HAO A24CS0245
#include <iostream>
#include <string>
using namespace std;

void employeesCode(){
	cout<<"--------------------------------\n";
	cout<<"G - fixed paid employees"<<endl;
	cout<<"K - Contract workers"<<endl;
	cout<<"S - subcontract workers"<<endl;
	cout<<"--------------------------------\n";
}

void paidEmployees(){
	cout<<"--------------------------------\n";
	cout<<"P - Manager"<<endl;
	cout<<"B - Non-manager"<<endl;
	cout<<"--------------------------------\n";
}

void contract(){
	cout<<"--------------------------------\n";
	cout<<"B - Recovery"<<endl;
	cout<<"S - Maintenance"<<endl;
	cout<<"--------------------------------\n";
}

void subcontract(){
	cout<<"--------------------------------\n";
	cout<<"B - Large size toy"<<endl;
	cout<<"S - Medium size toy"<<endl;
	cout<<"K - Small size toy"<<endl;
	cout<<"--------------------------------\n";
}

int main(){
	string name, id;
	char code, category;
	double fixed_salary, overtime_salary, net_salary;
	int overtime, hours, num_toys;
	
	cout<<"Input employee name: ";
	getline(cin,name);
	
	cout<<"Input employee number: ";
	cin>>id;
	
	employeesCode();
	cout<<"Input employee code: ";
	cin>>code;
	
	if(code=='G'){
		cout<<"Input your fixed_salary: RM";
		cin>>fixed_salary;
		
		paidEmployees();
		cout<<"Input your category: ";
		cin>>category;
		
		if (category=='P'){
			net_salary=fixed_salary;
		}else if (category =='B'){
			cout<<"Input overtime hours: ";
			cin>>overtime;
			
			if (overtime>0 && overtime<=10){
				overtime_salary = overtime * 15;
			}else if (overtime>10 && overtime<=20){
				overtime_salary = 150 + (10-overtime)*12;
			}else if (overtime>20){
			overtime_salary = 270;
			}
			net_salary = fixed_salary + overtime_salary;
		}
	}else if (code=='K'){
		
		contract();
		cout<<"Input your category: ";
		cin>>category;
		
		cout<<"Input your working hours: ";
		cin>>hours;
		
		if (category=='B'){
			if (hours<=100){
				net_salary=hours*20;
			}else if (hours>100){
				net_salary=2000;
			}
		}else if (code=='S'){
			if (hours<=50 && hours>=0){
				net_salary=10*hours;
			}else if (hours<=100 && hours>=0){
				net_salary=500+(hours-50)*5;
			}else if (hours>100){
				net_salary=750;
			}
		}
	}else if (code=='S'){
		
		subcontract();
		cout<<"Input your category: ";
		cin>>category;
		
		cout<<"Input the number of toys: ";
		cin>>num_toys;
		
		if (category=='B'){
			net_salary=8*num_toys;
		} else if (category=='S'){
			net_salary=5*num_toys;
		}else if (category=='K'){
			net_salary=2*num_toys;
		}
	}
	
	cout<<"Employee's name: "<<name<<endl;
	cout<<"Employee number: "<<id<<endl;
	cout<<"Net salary: RM"<<net_salary<<endl;
	}
