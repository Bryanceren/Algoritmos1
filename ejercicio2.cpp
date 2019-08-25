#include <iostream>
using namespace std;

int potenciaRecursiva(int a, int b){
	if(b==0)
		return 1;
	else
		return a*potenciaRecursiva(a,b-1);
}

int main(){
	cout<<potenciaRecursiva(5,3);
	system("pause");
	return 0;
}