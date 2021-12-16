#include<iostream>
#include<set>
using namespace std;

//Vérifié l'existence du nombre dans le set
  bool recherche(set <int> s,int A){
	set<int>::iterator it;
		for (it= s.begin(); it != s.end(); ++it){
			if(A==*it) {
			  return 1;
			}
		}
	return 0;	
};

int main(){ 
    int i;
    int b;
    set<int>s;
    //insertion des valeurs
    s.insert(4);
    s.insert(8);
    s.insert(6);
    s.insert(2);
    s.insert(5);
    cout<<"The set s2 is: ";
    //Affichage du set
	set<int>::iterator itr;
	for (itr = s.begin(); itr != s.end(); itr++){
        cout << *itr<<" ";
    }
    cout<<"\n Veuillez entrer le nombre a chercher: ";
    cin>>b;
    //appel de la fonction recherche
    cout<<recherche(s,b);
    cout<<endl;
}	
