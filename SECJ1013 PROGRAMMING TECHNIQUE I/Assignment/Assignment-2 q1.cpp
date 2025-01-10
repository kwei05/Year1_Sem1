#include <iostream>
 using namespace std;
 int main(){
const int SIZE=5,SIZE3=10;
int array1[SIZE];
int array2[SIZE];
int array3[SIZE3];
int num;
double total=0,avg;
cout<<"Enter table array1: "<<endl;
for(num=0;num<SIZE;num++){
	cout<<"Please enter an integer: ";
	cin>>array1[num];
}
cout<<endl<<"Enter table array2: "<<endl;
for(num=0;num<SIZE;num++){
	cout<<"Please enter an integer: ";
	cin>>array2[num];
}
cout<<endl<<"OUTPUT: "<<endl;
cout<<"Table array3:"<<endl;
for(num=0;num<SIZE;num++){
	array3[num]=array1[num];
	cout<<array3[num]<<" ";
}
for(num=0;num<SIZE;num++){
	array3[num+5]=array2[num];
	cout<<array3[num+5]<<" ";
}
cout<<endl;
cout<<"The average of ten numbers in array3 = ";
for(num=0;num<10;num++){
total+=array3[num];
}
avg=total/SIZE3;
cout<<avg<<endl;
int count,highest,lowest;
highest=array3[0];
for(count=1;count<SIZE3;count++){
	if (array3[count]>highest){
		highest=array3[count];
	}
}
lowest=array3[0];
for(count=1;count<SIZE3;count++){
	if (array3[count]<lowest){
		lowest=array3[count];
	}
}
cout<<"The range of values in array3 = ";
double range;
range=highest-lowest;
cout<<range;
int n;
for(count=0;count<SIZE3;count++){
	if (array3[count]%2!=0){
		n++;
}
}
cout<<"The number of odd numbers in array3 = "<<n;
}
