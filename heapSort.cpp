#include <iostream>
using namespace std;

void Max_Heapify(int *A,int i,int n){
	int left,right,largest;
	left=2*i+1;
	right=2*i+2;
	if(left<=n-1&&A[i]<A[left])
	largest=left;
	else
	largest=i;
	if(right<=n-1&&A[right]>A[largest])
	largest=right;
	if(largest!=i){
		int temp;
		temp=A[i];
		A[i]=A[largest];
		A[largest]=temp;
	    Max_Heapify(A,largest,n);
	}

}
void Build_Max_Heapify(int *A,int n){
	int i;
	for(i=(n/2)-1;i>=0;i--){
		Max_Heapify(A,i,n);
	}
}	
void Heap_Sort(int *A,int n){
	int temp,i;
	for(i=0;i<n;i++){
		temp=A[0];
		A[0]=A[n-i-1];
		A[n-i-1]=temp;
		Max_Heapify(A,0,n-i-1);
	}
}

int main(){
	int a[10]={4,1,3,2,16,9,10,14,8,7};
	Build_Max_Heapify(a,10);
	Heap_Sort(a,10);
	for(int i=0;i<10;i++)
	cout<<a[i]<<" ";
	return 0;
}
