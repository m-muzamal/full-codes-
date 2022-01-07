#include <iostream>
using namespace std; 

int main()
{
	int i, total;
	int tm, ts = 0;
	int marks[ts];
	int sum = 0;
	float per, gpa = 0;
	
	cout << "Enter the total subjects: ";
	cin >> ts;	
	cout << "Enter the total marks: ";
	cin >> tm;
	
	cout << "Enter the marks: " << endl;
	for (i=0; i<ts; i++)
	{
		cin >> marks[i];
		sum = sum+marks[i];
	}
	per = (sum*100)/tm;
	gpa = per/ts;
		
	cout << "\n****************************************" << endl;
	cout << "Total marks: " << sum  << endl;
	cout << "Percentage: " << per << "%" << endl;
	cout << "CGPA: " << gpa << endl;  
	
	if ( per > 85 )
	{
		cout<<"A Grade";
	}
		else if( per<85 && per>=75 ) 
	{
		cout<<"B Grade";
	}
		else if( per<75 && per>=60 )
	{
		cout<<"C Grade";
	}
		else if( per<60 && per>=33 ) 
	{
		cout<<"D Grade";
	}
		else 
	{
		cout<<"Fail";
	}
	cout << "\n****************************************" << endl;
	
	return 0;

}
