#include <iostream>
#include <set>
using namespace std;

int main(){
	set<int> s1;
	for(int i=0; i<=100; ++i){
		s1.insert(i);
	}
    set<int>::iterator itr;
    cout << "\nThe set s1 is : \n";
    for (itr = s1.begin(); itr != s1.end(); itr++){
	    cout << *itr<<" ";
	}
}
