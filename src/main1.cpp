#include <task1.h>

int main(){
	unsigned min,max;
	cout<<"Enter the boundaries of the search range: ";
	cin>>min>>max;
	cout<<findValue(min, max);
	return 0;
}
