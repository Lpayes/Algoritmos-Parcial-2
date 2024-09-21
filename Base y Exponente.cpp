#include <iostream>
using namespace std;
int exponentes(int no1,int fijo,int no2){
for(int i=0;i<no2-1; i++){
	
	no1=no1*fijo;
	
	}return no1;
cout<<no1;
}
int main() {
	int no1;
	int no2;
cout<<"Ingresar un numero para base";
cin>> no1;
int fijo=no1;
cout<<"Ingresar un numero para exponente";
cin>>no2;
cout<<exponentes(no1,fijo,no2);

    return 0;
}