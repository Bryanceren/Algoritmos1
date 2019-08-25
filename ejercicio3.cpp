#include <iostream>
using namespace std;

int menorValor(int a, int array[10]){
	if(a==1)
		return array[0];
	if(array[a-1]<menorValor(a-1,array))
		return array[a-1];
	else
		return menorValor(a-1,array);
}

int main(){
	int array[4]={10,4,3,6};
	cout<<menorValor(4,array)<<endl;
	system("pause");
	return 0;
}