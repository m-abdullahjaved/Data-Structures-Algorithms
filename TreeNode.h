#ifndef TREENODE_H
#define TREENODE_H

template<class type> 
class Tree;

template<class type>
class TreeNode {
public:
	TreeNode(const type& value):Data(value),left(0),right(0) {}
	type getData() const {
		return Data;
	}
private:
	friend class Tree<type>;
	type Data;
	TreeNode* left;
	TreeNode* right;
};


#endif