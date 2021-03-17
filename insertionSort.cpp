#include <iostream>
using namespace std;

int main(){
	int i,j,n,value,hole;
	cout<<"enter no of elements to be sorted :";
	cin>>n;
	cout<<endl;
	int a[n];
	cout<<"enter elements :";
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=1;i<n;i++){
		value=a[i];
		hole=i;
		while(hole>0&&a[hole-1]>value){
			a[hole]=a[hole-1];
			hole--;
		}
		a[hole]=value;
	}
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	return 0;	
}
