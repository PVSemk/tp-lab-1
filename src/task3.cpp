

#include <iostream> 
#include "task2.h"

using namespace std;
unsigned long long sumPrime(unsigned int hbound){
	unsigned long long sum=0;
	int a=0,k=0;	
	if (hbound == 3)
		return 2;
	if (hbound < 3){
		return 0;
	}
	else{
		sum = 2;	
		for (int i = 3; i < hbound; i = i + 2){
			a = i;
			while (a != 0)
			{
				k =k+ a % 10;
				a = a/10;		
			}
			if ((k % 3 != 0)||(i==3)||(i%10!=5)||(i==5)){
				if (checkPrime(i) == true)
					sum = sum + i;
			}
			k = 0;
		}
		return sum;
	}	
}



