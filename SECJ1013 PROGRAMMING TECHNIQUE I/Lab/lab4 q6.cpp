#include <iostream>
using namespace std;

int main(){
	int student[10];
	double total, avg;
	int num=1;
	for (int i=0;i<10;i++){
			cout<<"Student"<<num<<": ";
			cin>>student[i];
			total+=student[i];
			num++;
	}
	avg=total/10;
	
	cout<<"Total marks for all students: "<<total<<endl;
	cout<<"Average marks for all students: "<<avg<<endl;
}