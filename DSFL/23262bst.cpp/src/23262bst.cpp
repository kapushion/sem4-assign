//============================================================================
// Name        : cpp.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "bst.cpp"

int main() {
	int n;
	int f=1;
	int k;
	int key;
	node *p;
	int ch;
	bst Tree;
	while(f) {
		cout<<"\n\n\t*****Binary Search Tree\n";
		cout<<"1.Insert\n2.Display\n3.Delete\n4.Search\n5.Display level wise\n6.Mirror Image\n7.Height of BST\n8.Exit";
		cout<<"\n\nEnter the details:- ";
		cin>>ch;
		switch(ch) {
			case 1:
				cout<<"\nEnter the key for bst: ";
				cin>>n;
				Tree.insert(n);
				break;
			case 2:
				cout<<"\n Binary Search Tree: ";
				Tree.display();
				break;
			case 3:
				cout<<"Enter data to delete: ";
				cin>>n;
				p = Tree.deletenode(Tree.getRoot(),n);
				if(p==NULL ) {
					cout<<"data is not present";
				}
				else {
					cout<<"element deleted!!";
				}
				break;
			case 4:
				cout<<"\nEnter key to search: ";
				cin>>n;
			     k = Tree.search(n,Tree.getRoot());
				if(k==1) {
					cout<<"\n\nElement found";
				}
				else if(k==0) {
					cout<<"\n\nElement not found";
				}
				break;
			case 5:
				cout<<"LevelWise display: \n";
				Tree.displaylevelwise();
				break;
			case 6:
				if(Tree.getRoot()==NULL)
				{
					cout<<"\nCreate a tree first"<<endl;
					break;
				}
				Tree.mirror(Tree.getRoot());
				cout<<"\nMirror image of tree is:- ";
				Tree.display(Tree.getRoot());
				cout<<endl;
				Tree.mirror(Tree.getRoot());
				break;
			case 7:
				key = Tree.getheight(Tree.getRoot());
				cout<<"The height of tree is: "<<key;
				break;
			case 8:
				f=0;
		}
	}
	return 0;
}
