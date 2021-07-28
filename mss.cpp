#include <iostream>
struct node
{
	int data;
	struct node* left;
	struct node* right;

	node(int key)
	{
		data = key;
		left = NULL;
		right = NULL;
	}
};
int main(int argc, char const *argv[])
{
	struct node* root_tree = new node(1);
	root_tree->left = new node(2);
	root_tree->right = new node(3);
	std::cout<< "ROOT = 1, CHILD = 2, CHILD -> CHILD => 0,0 HEIGHT -- 2"
	return 0;
}