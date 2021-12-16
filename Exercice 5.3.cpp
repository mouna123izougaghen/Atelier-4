#include <iostream>
#include <list>
#include <iterator>
#include <set>

using namespace std;

bool recherche(set<int> s, set<int>::iterator debut, set<int>::iterator fin, int n){
    set<int>::iterator itr; // declaration d un iterateur 

    for (itr = debut; itr != fin; itr++) // traite  tous les elements dans la set
    {
        if (*itr == n) // verifie tous les elements dans le set si lis sont egale a le nombre ou bien non 
        {
            return 1;
        }
    }
    return 0;
}

int main(){
    // empty set container
    set<int> s1;
    // insert elements in set
    for (int i = 0; i < 100; i++){
        s1.insert(i + 1);
    }
    // printing set s1
    cout<< endl;

    cout << recherche(s1, s1.find(10), s1.find(40), 32) << endl;
    cout << recherche(s1, s1.find(30), s1.find(70), 23) << endl;
    cout << recherche(s1, s1.find(21), s1.find(22), 20) << endl;

    cout << endl;
    return 0;
}
