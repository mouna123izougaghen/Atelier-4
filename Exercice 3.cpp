#include<iostream>
#include<list>
using namespace std;

void showlist(list <int> l)
{
list <int> :: iterator it;
for(it = l.begin(); it != l.end(); ++it)
cout <<'\t'<< *it;
}

int main(){
int i;
int a;
 list <int> l;
 
 for(i=1;i<6;++i){
 	cout<<"Enter la valeur "<<i <<":"<< endl;
 	cin>>a;
 	l.push_back(a) ;// permet d'ajouter des nouveaux éléments à la fin de la liste  
 }
 
cout<<"Votre liste non triee:"<< endl;
showlist(l);
l.sort(); // pour triée la liste l
cout<<" \nVotre liste triee:" <<endl;
showlist(l);
}
