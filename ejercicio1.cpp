#include <iostream>
using namespace std;

void findSum(int A[][3],int B[][3],int C[][3], int i,int j,int n){
	if (i<n){	
		
		if(j<n){
			C[i][j]=A[i][j]+B[i][j];
			cout<<C[i][j]<<"\t";
			return findSum(A,B,C,i,j+1,n);
		}
		cout<<endl;
	 findSum(A,B,C,i+1,0,n);
	}

}

int main(){
	int A[3][3]={{1,2,3},
				{3,4,5},
				{6,4,1}};

	int B[3][3]={{5,2,9},
				{1,8,2},
				{4,5,1}};
	int C[3][3];
	findSum(A,B,C,0,0,3);
	system("pause");
	return 0;
}