

#include <iostream> 


using namespace std;

unsigned long findValue(unsigned int min, unsigned max){
	
	unsigned long long nok = min, nod = min;
	unsigned long long x;
	int i = 1;
	for (unsigned int b = min+1; b <=max; b++ ){
		cout << "b(" << i << ")=" << b << endl;
		x = nok*b;
		nod = b;
		cout << "x(" << i << ")=" << x << endl;
		while (nok != nod) {
			if (nok > nod) {
				unsigned long tmp = nok;
				nok = nod;
				nod = tmp;
			}
			nod = nod - nok;
		}
		
		cout << "NOD("<< i<< ")="<< nod << endl;
		
		nok =x/nod ;
		cout << "NOK(" << i << ")=" << nok << endl;
		i++;
	}
	return nok;
}




