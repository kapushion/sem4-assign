//============================================================================
// Name        : 5.cpp
// Author      : Atre
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "bst.cpp"
#include "bst.h"

int main() {
	int n;
	bst bt;
	int ch;
	int f=1;
	while(f) {
		cout<<"\t***Assignment 5***"<<endl<<endl;
		cout<<"1.Insert\n2.display";
		cout<<"\n\nEnter your choice:- ";
		cin>>ch;
		switch(ch) {
			case 1:
				cout<<"\n\nEnter the element:- ";
				cin>>n;
				bt.insert(n);
				break;
			case 2:
				cout<<"Binary search tree: ";
				bt.display(bt.getRoot());
				cout<<"\n\n";
				break;

		}
	}
	return 0;
}
