/**
binary search tree
**/

#ifndef BST_H
#define BST_H

template <class Comparable>
class BST{
private:
	struct node {
		//a struct is a class that makes everything public
		Comparable key;
		node * left;
		node * right;
		node * parent;
		node(Comparable k, node *l, node *r, node *p)
			:key(k),left(l), right(r), parent(p){}	
	};
	node * root;
	int size;
	node * contains(node *current, const Comparable &item){
		if(current == NULL){return NULL;}
		if(item == current->key) {return current;}
		if(item < current->key){
			return contains(current->left,item);
		}
		else{
			return contains(current->right,item);
		}
	}
public:
	BST(){
		root = NULL;
	}
	bool contains(const Comparable &item){
		return (contains(root,item) != NULL);
	}
	void insert(const Comparable &item){
		if(root==NULL){
			root = new node(item, NULL, NULL, NULL);
		}
		else{
			insert(root,item);
		}
	}
};
#endif