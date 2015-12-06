/**
this class will define a node object 
it will hold references to its children, among other things
11/11/15 - no procrastination this time
Joseph Thompson
**/

#include <iostream>

using namespace std;

#ifndef HUFFMANNODE_H
#define HUFFMANNODE_H

class HuffmanNode{
private:
	int weight;
	int value;
	HuffmanNode *leftChild;
	HuffmanNode *rightChild;
public:
	HuffmanNode(int wayt, int valyoo){
		value = valyoo;
		weight = wayt;
		leftChild = NULL;
		rightChild = NULL;
	}
	HuffmanNode(int leftval, int leftweight, int rightval, int rightweight){
		leftChild = new HuffmanNode(leftweight, leftval);
		rightChild = new HuffmanNode(rightweight, rightval);
		weight = leftweight + rightweight;
		value = -1;
	}
	int Value(){
		return value;
	}
	int Weight(){
		return weight;
	}
	HuffmanNode* Left(){
		return leftChild;
	}
	HuffmanNode* Right(){
		return rightChild;
	}
};
#endif