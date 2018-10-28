<<<<<<< HEAD


#include <iostream> 
#include "task2.h"

using namespace std;
unsigned long long sumPrime(unsigned int hbound){
	unsigned long long sum=0;
	int a=0,k=0;	
=======
// task2.cpp: определяет точку входа для консольного приложения.
//

#include <iostream> 
#include "conio.h"
#include "cstdlib"
#include "task2.h"

using namespace std;


unsigned long long sumPrime(unsigned int hbound){
	unsigned long long sum=0;
	int a=0,k=0;
	
>>>>>>> d1230de8148b354d8de3829749841363d285e681
	if (hbound == 3)
		return 2;
	if (hbound < 3){
		return 0;
	}
	else{
<<<<<<< HEAD
		sum = 2;	
		for (int i = 3; i < hbound; i = i + 2){
			a = i;
			while (a != 0)
			{
				k =k+ a % 10;
				a = a/10;		
			}
=======
		sum = 2;
		
		for (int i = 3; i < hbound; i = i + 2){
			a = i;
			while (a != 0)
		{
			k =k+ a % 10;
			a = a/10;
			
		}
			//cout << "k=" << k << endl;
>>>>>>> d1230de8148b354d8de3829749841363d285e681
			if ((k % 3 != 0)||(i==3)||(i%10!=5)||(i==5)){
				if (checkPrime(i) == true)
					sum = sum + i;
			}
			k = 0;
		}
		return sum;
<<<<<<< HEAD
	}	
=======
	}
	
>>>>>>> d1230de8148b354d8de3829749841363d285e681
}



