#ifndef TREE_H
#define TREE_H

#include <iostream>

#include "TreeNode.h"

using namespace std;

template<class type>
class Tree {
	TreeNode<type>* root;
	void insertNodeHelper(TreeNode<type>** rootPtr, const type& value) {
		if (*rootPtr == NULL) 
			*rootPtr = new TreeNode<type>(value);
		else {
			if (value < (*rootPtr)->Data)
				insertNodeHelper(&((*rootPtr)->left), value);
			else
				insertNodeHelper(&((*rootPtr)->right), value);
		}
	}
	void preOrderHelper(TreeNode<type>* root) const {
		if (root != NULL) {
			cout << root->Data << " ";
			preOrderHelper(root->left);
			preOrderHelper(root->right);
		}
	}
	void inOrderHelper(TreeNode<type>* root) const {
		if (root != NULL) {
			inOrderHelper(root->left);
			cout << root->Data << " ";
			inOrderHelper(root->right);
		}
	}
	void postOrderHelper(TreeNode<type>* root) const {
		if (root != NULL) {
			postOrderHelper(root->left);
			postOrderHelper(root->right);
			cout << root->Data << " ";
		}
	}
public:
	Tree():root(0) {}

	void insertNode(const type& value) {
		insertNodeHelper(&root, value);
	}

	void inOrderTraversal() const {
		cout << "In-Order Traversal => ";
		inOrderHelper(root);
		cout << endl;
	}
	void preOrderTraversal() const {
		cout << "Pre-Order Traversal => ";
		preOrderHelper(root);
		cout << endl;
	}
	void postOrderTraversal() const {
		cout << "Post-Order Traversal => ";
		postOrderHelper(root);
		cout << endl;
	}
};

#endif // !TREE_H
