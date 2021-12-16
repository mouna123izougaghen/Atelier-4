#include <iostream>
using namespace std;
class Test{
public:
static int tableau[] ;
public :
static int division(int indice, int diviseur){
    if( diviseur == 0 ) {
      throw "Division par zero!";
   }
   else if(indice >=10){
       throw "L indice est superieure a l indice du tableau";
   }
    return tableau[indice]/diviseur;
}
};
int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5} ;
int main()
{
int x, y;
cout << "Entrez l indice de l entier a diviser: " << endl;
cin >> x ;
cout << "Entrez le diviseur: " << endl;
cin >> y ;

 try{
        int res = Test::division(x,y);
        cout << "Le resultat de la division est: "<< endl;
        cout << res << endl;
   }
   
catch(const char* msg){
        cerr << msg << endl;
   }
return 0;
}
