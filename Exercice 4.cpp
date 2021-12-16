#include <iostream>
#include <string>
#include <list>
#include <iterator>

using namespace std;

void showlist(list <string> g)
{
    list <string> :: iterator it;
    for(it = g.begin(); it != g.end(); ++it){
	cout<<"\t";
        cout <<*it<<endl;}
    
}
int main()
{
    string nom, prenom, age ;
    int n;
    list <string> personnes;
    cout << "entrer la langueur de la liste: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
    	cout<<"enter les information de personne "<<i+1<< endl;
        cout << "enter le nom: ";
        cin >> nom;
        cout << "enter le prenom: ";
        cin >> prenom;
        cout << "enter l age: ";
        cin >> age;
        personnes.push_back(nom + " " + prenom+" "+age);
    }
    
    personnes.sort();
    cout<<"votre liste trie:"<<endl;
    showlist(personnes);
    
}
