/*
   Name: Jax Carstensen
   Semester: 2
   Due: 03/19/2021
   Assignment: Lab 5 (Binary Tree)
   Description:  Description: Create a binary tree class which will take strings of website names and sort
   them in alphabetical order. Your class should also be able to sort them in reverse alphabetical order as well.
*/
#include "BinaryTree.h"
#include <iostream>

using namespace std;

void BinaryTree::Add(ItemType item) {
	if (isFull()) return;
	if (isEmpty())
		head = new Node(item);
	else {
		Node* currentNode = head;
		while (true) {
			if (currentNode->value.ComparedTo(item) == 0) {
				if (currentNode->left != NULL)
					currentNode = currentNode->left;
				else {
					currentNode->left = new Node(item);
					break;
				}
			}
			else if (currentNode->value.ComparedTo(item) == 1) {
				if (currentNode->right != NULL)
					currentNode = currentNode->right;
				else {
					currentNode->right = new Node(item);
					break;
				}
			}
		}
	}
}
void BinaryTree::findNode(Node* n) {
	if (n != NULL) {
		findNode(n->left);
		cout << n->value.getValue() << " ";
		findNode(n->right);
	}
}
bool BinaryTree::isFull() {
	try {
		Node* testNode = new Node();
		delete testNode;
		return false;
	}
	catch (bad_alloc exception) {
		return true;
	}
}