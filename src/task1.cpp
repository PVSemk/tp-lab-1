#include <task1.h>
unsigned long nod(unsigned int a,unsigned b)
{
	    if (b==0) return a;
	        else return nod(b,a%b);
}

unsigned long nok(unsigned int n1, unsigned n2)
{
	    return n1*n2 / nod(n1, n2);
}


unsigned long findValue(unsigned int min,unsigned max){
	    unsigned int s = min, dev;
	    for(;min<max;min++){
		    s = nok(s, min);
	    }
	    return s;
}
