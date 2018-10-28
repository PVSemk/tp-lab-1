
<<<<<<< HEAD
#include <iostream> 

using namespace std;
unsigned long findValue(unsigned int min, unsigned max){
=======

#include <iostream> 


using namespace std;

unsigned long findValue(unsigned int min, unsigned max){
	
>>>>>>> d1230de8148b354d8de3829749841363d285e681
	unsigned long long nok = min, nod = min;
	unsigned long long x;
	int i = 1;
	for (unsigned int b = min+1; b <=max; b++ ){
<<<<<<< HEAD
		x = nok*b;
		nod = b;
=======
		cout << "b(" << i << ")=" << b << endl;
		x = nok*b;
		nod = b;
		cout << "x(" << i << ")=" << x << endl;
>>>>>>> d1230de8148b354d8de3829749841363d285e681
		while (nok != nod) {
			if (nok > nod) {
				unsigned long tmp = nok;
				nok = nod;
				nod = tmp;
			}
			nod = nod - nok;
<<<<<<< HEAD
		}		
		nok =x/nod ;
=======
		}
		
		cout << "NOD("<< i<< ")="<< nod << endl;
		
		nok =x/nod ;
		cout << "NOK(" << i << ")=" << nok << endl;
>>>>>>> d1230de8148b354d8de3829749841363d285e681
		i++;
	}
	return nok;
}




