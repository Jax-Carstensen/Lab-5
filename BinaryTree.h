/*
   Name: Jax Carstensen
   Semester: 2
   Due: 03/19/2021
   Assignment: Lab 5 (Binary Tree)
   Description:  Description: Create a binary tree class which will take strings of website names and sort
   them in alphabetical order. Your class should also be able to sort them in reverse alphabetical order as well.
*/
#ifndef BINARYTREE_H
#define BINARYTREE_H

#include <iostream>
#include "Node.h"
#include "ItemType.h"

using namespace std;

class BinaryTree {
private:
	Node* head = NULL;
public:
	void Add(ItemType item);
	//Pre: An item to add to the tree
	//Post: Adds the item to the tree
	void Print() {
		findNode(head);
	}
	//Pre: None
	//Post: Prints the tree to the screen
	void findNode(Node* n);
	//Pre: The node to print
	//Post: Prints the values of that node, and its children if they are not null
	~BinaryTree() {
		delete head;
	}
	bool isEmpty() {
		return head == NULL;
	}
	//Pre: None
	//Post: returns true if empty, and false if it is not
	bool isFull();
	//Pre: None
	//Post: Returns true if the tree is full and false if it is not
};

#endif