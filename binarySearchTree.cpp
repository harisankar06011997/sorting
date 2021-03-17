#include <iostream>
using namespace std;
struct node{
	int key;
	node* left;
	node* right;
};
node* create(int data){
	node newNode=new node();
	newNode->key=data;
	newNode->left=NULL;
	newNode->right=NULL;
	return newNode;
}
node* Insert(node* head,int data){
	
}
int main(){
	
}
