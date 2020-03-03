#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

vector<int> randomVector(int);
void showVector(vector<int>);
int dotProduct(vector<int>,vector<int>);

int main(){
	srand(time(0));
	vector<int> x = randomVector(5);
	vector<int> y = randomVector(5);
	int z = dotProduct(x,y);
	showVector(x);
	cout << " . ";
	showVector(y);
	cout << " = " << z;
	
	return 0;
}

//Write Definition of randomVector() showVector() and dotProduct() here
void showVector(vector<int>v){
	cout<<"[";
	for(int i=0;i<5;i++){
		cout<<v.at(i)<<" ";
	}
	cout<<"]";
	
}

int dotProduct(vector<int> a,vector<int> b){
	int mul=1;
	for(int i=0;i<5;i++){
		mul+= a[i]*b[i];
	}
	return mul;
}

vector<int> randomVector(int n){
	vector<int>v(n);
	for(int i=0;i<n;i++){
		v[i]=rand()%10;
	}
	return v;
}
