
#include <iostream> 
#include <cmath>

using namespace std;
bool checkPrime(unsigned int value){
	int a;
	if ((value == 2)||(value==3)){
		return true;
	}
	else {
		if ((value == 1)||(value % 2 == 0)){
			return false;
		}
		for (long long k = 3; k <= sqrt(value); k += 2) {
			if ((value % k) == 0) return false;
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

