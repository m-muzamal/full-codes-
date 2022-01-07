#include <iostream>
using namespace std;

int main ()
{
												//	full box print
	for ( int a=1; a<=5; a++ ){
		for ( int b=1; b<=5; b++){
			cout << "* ";
		}
		cout << endl;
	}
												// square print	
	cout << endl;
	for ( int j=1; j<=5; j++){
		for ( int i=1; i<=5; i++ ){
			if ( i==1 || i==5 || j==1 || j==5){
			cout << "* ";
		}
			else (cout << "  ");
		}
		cout << endl;
	}	
												//	right angle triangle inverse
	cout << endl;
	for ( int c=1; c<=5; c++ ){
		for ( int d=c; d<=5; d++){
			cout << "* ";
		}
		cout << endl;
	}
												//	right angle triangle 
	cout << endl;
	for ( int j=1; j<=5; j++){
		for ( int i=1; i<=j; i++ ){
		cout << "* ";
		}
		cout << endl;
	}	
												//	triangle inverse	
	cout << endl;
	for ( int k=1; k<=5; k++ ){
		for ( int l=1; l<=k-1; l++){
			cout << " ";
		}
		for ( int m=k; m<=5; m++){
				cout << "* ";
			}
		cout << endl;
	}
												//	triangle 	
		cout << endl;
	for ( int k=1; k<=5; k++ ){
		for ( int l=k+1; l<=5; l++){
			cout << " ";
		}
		for ( int m=1; m<=k; m++){
				cout << "* ";
			}
		cout << endl;
	}	
												// cros shape
	cout << endl;											
	for ( int q=1; q<=5; q++){
		for ( int w=1; w<=5; w++){
			if ( q==w || w==1  ){
				cout << " * ";
			}
			else ( cout << " " );
		}
		cout << endl;
	}
	
	
	return 0;
}
