#include "ExpressionTree.h"
#include <string>
using namespace std;

///Default Constructor for ExprTree, returns an empty expression tree
template <typename DataType>
ExprTree<DataType>::ExprTree(){
	root = NULL;
}

///Overridden copy constructor for ExprTree, init the expression tree to be the equivalent to the other param
template <typename DataType>
ExprTree<DataType>& ExprTree<DataType>::operator=(const ExprTree& source){
	if (source.root != null){
		this->root = source.root;
	}
	return this;
}
///Destructor for the exprtree
template <typename DataType>
ExprTree<DataType>::~ExprTree(){
	//maybe call clear?
	if (root != null){
		delete root;
	}
	else
		return;
}
///reads an arithmetic expression in prefix form from the keyboard and builds the corresponding expression tree
template <typename DataType>
ExprTree <DataType>::build(){
	string input;
	cin >> input;
	
}

// Specialized function to help build trees of floats.
// Input is single digit ints or operators.
template <>
void ExprTree<float>::buildHelper(ExprTreeNode*& p){

}

// Specialized function to help build boolean trees.
// Input is 0, 1, or operators.
template <>
void ExprTree<bool>::buildHelper(ExprTreeNode*& p){

}




/// Constructor for tree nodes
template <typename DataType>
ExprTree<DataType>::ExprTreeNode::ExprTreeNode(char elem, ExprTreeNode *leftPtr, ExprTreeNode *rightPtr){
	dataItem = elem;
	left = leftPtr;
	right = rightPtr;
}



/*
template <> void exprtree <float>::voild helpter (exptreenode *&p) //

*/