<<<<<<< HEAD

#include <iostream> 

using namespace std;
=======
// task2.cpp: определяет точку входа для консольного приложения.
//

#include <iostream> 
#include "conio.h"
#include "cstdlib"

using namespace std;

>>>>>>> d1230de8148b354d8de3829749841363d285e681
bool checkPrime(unsigned int value){
	int a;
	if ((value == 2)||(value==3)){
		return true;
	}
	else {
		a = value;
		if ((value == 1)||(value % 2 == 0)){
			return false;
		}
		while (a != 3){
			a = a - 2;
			if (value%a == 0){
				return false;
			}
		}
	}
	return true;
}

unsigned long long nPrime(unsigned n){
	int i=0;
	unsigned long long value=0;
	while (i != n){
		value = value + 1;
		if (checkPrime(value)==true)
			i++;		
	}
	return value;
}

unsigned long long nextPrime(unsigned long long value){
	bool check;
	if ((value % 2 == 0)||(value==1)){
		value = value + 1;
	}
	else{
		value = value + 2;
	}
	check = checkPrime(value);
	while (check == false){
		value = value + 2;
		check = checkPrime(value);
	}
	return value;
}

<<<<<<< HEAD
=======
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
			//cout << "k=" << k << endl;
			if ((k % 3 != 0)||(i==3)||(i%10!=5)||(i==5)){
				if (checkPrime(i) == true)
					sum = sum + i;
			}
			k = 0;
		}
		return sum;
	}
	
}

int main()
{
	unsigned int value1;
	unsigned n;
	unsigned long long value2;
	cout << "Enter value for checking prime or not: " << endl;
	cin >> value1;
	if (checkPrime(value1) == true){
		cout << "This value is prime"<<endl;
	}
	else{
		cout << "This value is not prime"<<endl;
	}
	/*cout << "Enter number: " << endl;
	cin >> n;
	cout << "value=" << nPrime(n)<<endl;
	cout << "Enter value for finding next prime number: " << endl;
	cin >> value2;
	cout <<"Next prime="<< nextPrime(value2)<<endl;
	*/
	unsigned int bound;
	unsigned long long sum;
	cout << "Enter bound: " << endl;
	cin >> bound;
	sum = sumPrime(bound);
	cout << "sum=" << sum << endl;
	getch();
}

>>>>>>> d1230de8148b354d8de3829749841363d285e681
