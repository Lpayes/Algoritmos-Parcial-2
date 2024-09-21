#include <iostream>

using namespace std;
int main (){
	int x;
	cout <<"escriba un numero ";
	cin>>x;
	
	if(x==0){
		cout<<"Es un numero cero";
	}	
	else if (x%2==0){
		cout<< "el numero " <<x<< " Es un numero primo";
	}
	else {
	cout<< "el numero " <<x<< " no es primo";
	}	
	return 0;
}