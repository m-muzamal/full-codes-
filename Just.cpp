#include <iostream>
using namespace std;
class Sir {
	
	public:
		string name;
		char section;
		string subject;
		string tim;		
};
int main () {
	while (true){
		int input;
		cout << "1. Ayaz Rafi" << endl;
		cout << "2. Waseem Tariq" << endl;
		cout << "3. Madiha Tabasum" << endl;
		cout << "4. Sidra Qayyum" << endl;
		cout << "5. Khalil-UR-Rehman" << endl;
		cout << "6. Fasiha Naz" << endl  << endl;
		cout << "Select a number to check the detial of required teaceher : ";
		cin >> input;
		Sir Ayaz;
		Ayaz.name = "Muhammad Ayaz Rafi";
		Ayaz.section = 'B';
		Ayaz.subject = "SSH";
		Ayaz.tim = "Wed 10:10-1:00";
		Sir Waseem;
		Waseem.name = "Muhammad Waseem Tariq";
		Waseem.section ='B';
		Waseem.subject = "Math";
		Waseem.tim = "Mon 11:20-1:00 - Thu 10:30-11:20";
		Sir Madiha;
		Madiha.name = "Madiha Tabasum";
		Madiha.section = 'B';
		Madiha.subject = "CS-407";
		Madiha.tim = "Mon 9:40-11:20 - Tue 9:40-11:20";
		Sir Sidra;
		Sidra.name = "Sidra Qayyum";
		Sidra.section = 'B';
		Sidra.subject = "CS-405";
		Sidra.tim = "Tue 3:10-4:00 - Wed 1:30-3:10";
		Sir Khalil;
		Khalil.name = "Khalil-UR-Rehman";
		Khalil.section = 'B';
		Khalil.subject = "CS-409";
		Khalil.tim = "Wed 8:00-9:40 - Thu 8:00-9:40";
		Sir Fasiha;
		Fasiha.name = "Hafiza Fasiha Naz";
		Fasiha.section = 'B';
		Fasiha.subject = "SE";
		Fasiha.tim = "Tue 11:20-1:00 - Thu 11:20-1:00";
		if ( input == 1 ){
			cout << "*********************************" << endl  << endl;
			cout << "Teacher name: " << Ayaz.name << endl;
			cout  << "Section: "<< Ayaz.section << "\n" << "Subject: "<<  Ayaz.subject << "\n"  << "Time: "<< Ayaz.tim << endl  << endl;
			cout << "*********************************" << endl;
		}		
		else if ( input == 2 ){
			cout << "*********************************" << endl  << endl;
			cout << "Teacher name: " << Waseem.name << endl;
			cout  << "Section: "<< Waseem.section << "\n" << "Subject: "<<  Waseem.subject << "\n"  << "Time: "<< Waseem.tim << endl  << endl;
			cout << "*********************************" << endl;
		}
		else if ( input == 3 ){
			cout << "*********************************" << endl  << endl;
			cout << "Teacher name: " << Madiha.name << endl;
			cout  << "Section: "<< Madiha.section << "\n" << "Subject: "<<  Madiha.subject << "\n"  << "Time: "<< Madiha.tim << endl  << endl;
			cout << "*********************************" << endl;
		}
		else if ( input == 4 ){
			cout << "\t\t\t2*********************************" << endl << endl;
			cout << "Teacher name: " << Sidra.name << endl;
			cout  << "Section: "<< Sidra.section << "\n" << "Subject: "<<  Sidra.subject << "\n"  << "Time: "<< Sidra.tim << endl  << endl;
			cout << "*********************************" << endl;
		}
		else if ( input == 5 ){
			cout << "*********************************" << endl  << endl;
			cout << "Teacher name: " << Khalil.name << endl;
			cout  << "Section: "<< Khalil.section << "\n" << "Subject: "<<  Khalil.subject << "\n"  << "Time: "<< Khalil.tim << endl  << endl;
			cout << "*********************************" << endl;
		}
		else if ( input == 6 ){
			cout << "*********************************" << endl  << endl;
			cout << "Teacher name: " << Fasiha.name << endl;
			cout  << "Section: "<< Fasiha.section << "\n" << "Subject: "<< Fasiha.subject << "\n"  << "Time: "<<Fasiha.tim << endl  << endl;
			cout << "*********************************" << endl;
		}
		else
		 {
		 	cout << "*********************************" << endl << endl;
			cout << " Select the correct number...!" << endl << endl;
			cout << "*********************************" << endl;
	}
}
	return 0;	
}

