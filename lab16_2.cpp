#include<iostream>
using namespace std;

//Write the definition of myString() here
void myString(char *&p,int n){
	char *d=new char[n];
	
	
	for(int i=0;i<n;i++){
		d[i]='A'+i;
		
	}
	
	p=d;
	p[n]='\0';
}
int main(){
	char *p;
	int N;	
	
	cout << "N = ";
	cin >> N;
			
	myString(p,N);
	cout << p;	
	delete [] p;
	return 0;
}
