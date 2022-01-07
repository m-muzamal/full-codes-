#include<iostream>
#include<string>
using namespace std;
class student
{
	string name;
	int number;
	string branch;
	string college;
	public:
	void putname()
	{
		cout<<"Enter the name of the student : ";
		cin>>name;
	}
	void putnumber()
	{
		cout<<"Enter the Roll Number of the student : ";
		cin>>number;
	}
	void putbranch()
	{
		cout<<"Enter the branch of the student : ";
		cin>>branch;
	}
	void putcollege()
	{
		cout<<"Enter the college of the Student : "; 
		cin>>college;
	}
	void putall()
	{
		putname();
		putnumber();
		putbranch();
		putcollege();
	}
	void getname()
	{
		cout<<name<<"\n";;
	}
	void getnumber()
	{
		cout<<number<<"\n";
	}
	void getbranch()
	{
		cout<<branch<<"\n";
	}
	void getcollege()
	{
		cout<<college<<"\n";
	}
	void getall()
	{
		getname();
		getnumber();
		getbranch();
		getcollege();
	}
};
int main()
{
	student pradyumna;
	pradyumna.putall();
	pradyumna.getall();
	return 0;
}
