#include <iostream>
using namespace std;

int main() {
	char input;
	cout<<"Enter a character: ";
	cin>>input;
	
	
	cout<<"you entered: "<<input<<"\n";
	if(input >= 48 && input <=57)
		cout<<"you entered a number.\n\n";
	else if((input >= 'a' && input <= 'z')||(input >= 'A' && input <='Z'))
		cout<<"you have entered a letter.\n\n";
	else
		cout<<"you have entered a special character.\n\n";
	return 0;
}
