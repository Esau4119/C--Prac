#include <iostream>

using namespace std;


struct Tree {
	int val;
	Tree *left;
	Tree *right;

	Tree(int val) : val(val) {
	}

	Tree(int val, Tree *left, Tree *right) : val(val), left(left), right(right){
	}
};

void inorder (Tree *root ){
    if (root == nullptr){
        return;

    }
    inorder(root->left);

    cout << root->val<< endl;
    

    inorder(root->right);

}
int main() {
	Tree *six = new Tree(6);
	Tree *four = new Tree(4);
	Tree *five = new Tree(5, four, six);

	Tree *two = new Tree(2);
	Tree *zero = new Tree(0);
	Tree *one = new Tree(1, zero, two);

	Tree *root = new Tree(3, one, five);

	// Diagram of the Tree: root
	//        3
	//      /   \
  //     1     5
	//    / \   / \
  //   0   2 4   6

	inorder(root);
}
