#include<iostream>
using namespace std;

int main() {
	string A;
	string B;
	cout << "Veuillez saisir une chaine de caracteres :" << endl;
	cin >> A;
	cout << A << " Represente la date du " << A.substr(0, 2);//Affichage du jour
	B = A.substr(2, 2);
	//Affichage des mois qui correspond à chaque nombre
	if (B == "01")
		cout << " Janvier ";
	else if (B == "02")
		cout << " Fevrier ";
	else if (B == "03")
		cout << " Mars ";
	else if (B == "04")
		cout << " Avril ";
	else if (B == "05")
		cout << " Mai ";
	else if (B == "06") 
		cout << " Juin ";
	else if (B == "07") 
		cout << " Juillet ";
	else if (B == "08") 
		cout << " Aout ";
	else if (B == "09") 
		cout << " Septembre ";
	else if (B == "10") 
		cout << " Octobre ";
	else if (B == "11") 
		cout << " Novembre ";
	else if (B == "12") 
		cout << " Decembre ";
	
	cout << A.substr(4, 4) << " a " << A.substr(8, 2) << "h " << A.substr(9, 2);// Affichage d'année et d'heure 
}
