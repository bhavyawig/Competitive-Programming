// C++ program to insert a node in AVL tree
#include<bits/stdc++.h>
using namespace std;

class Node
{
	public:
	int key;
	Node *left;
	Node *right;
	int height;
};

int height(Node *N)
{
	if (N == NULL)
		return 0;
	return N->height;
}


int max(int a, int b)
{
	return (a > b)? a : b;
}


Node* newNode(int key)
{
	Node* node = new Node();
	node->key = key;
	node->left = NULL;
	node->right = NULL;
	node->height = 1;
	return(node);
}


Node *rightRotate(Node *y)
{
	Node *x = y->left;
	Node *T2 = x->right;


	x->right = y;
	y->left = T2;


	y->height = max(height(y->left),
					height(y->right)) + 1;
	x->height = max(height(x->left),
					height(x->right)) + 1;

	return x;
}


Node *leftRotate(Node *x)
{
	Node *y = x->right;
	Node *T2 = y->left;

	y->left = x;
	x->right = T2;

	x->height = max(height(x->left),
					height(x->right)) + 1;
	y->height = max(height(y->left),
					height(y->right)) + 1;

	return y;
}


int getBalance(Node *N)
{
	if (N == NULL)
		return 0;
	return height(N->left) - height(N->right);
}


Node* insert(Node* node, int key)
{
	if (node == NULL)
		return(newNode(key));

	if (key < node->key)
		node->left = insert(node->left, key);
	else if (key > node->key)
		node->right = insert(node->right, key);
	else
		return node;

	/* 2. Update height of this ancestor node */
	node->height = 1 + max(height(node->left),
						height(node->right));


	int balance = getBalance(node);


	if (balance > 1 && key < node->left->key)
		return rightRotate(node);

	if (balance < -1 && key > node->right->key)
		return leftRotate(node);

	if (balance > 1 && key > node->left->key)
	{
		node->left = leftRotate(node->left);
		return rightRotate(node);
	}

	if (balance < -1 && key < node->right->key)
	{
		node->right = rightRotate(node->right);
		return leftRotate(node);
	}

	return node;
}

Node* deleteNode(Node* root, int key)
{



    // STEP 1: PERFORM STANDARD BST DELETE

    if (root == NULL)

        return root;



    // If the key to be deleted is smaller

    // than the root's key, then it lies

    // in left subtree

    if ( key < root->key )

        root->left = deleteNode(root->left, key);



    // If the key to be deleted is greater

    // than the root's key, then it lies

    // in right subtree

    else if( key > root->key )

        root->right = deleteNode(root->right, key);



    // if key is same as root's key, then

    // This is the node to be deleted

    else

    {

        // node with only one child or no child

        if( (root->left == NULL) ||

            (root->right == NULL) )

        {

            Node *temp = root->left ?

                         root->left :

                         root->right;



            // No child case

            if (temp == NULL)

            {

                temp = root;

                root = NULL;

            }

            else // One child case

            *root = *temp; // Copy the contents of

                           // the non-empty child

            free(temp);

        }

        else

        {

            // node with two children: Get the inorder

            // successor (smallest in the right subtree)

            Node* temp = minValueNode(root->right);



            // Copy the inorder successor's

            // data to this node

            root->key = temp->key;



            // Delete the inorder successor

            root->right = deleteNode(root->right,

                                     temp->key);

        }

    }



    // If the tree had only one node

    // then return

    if (root == NULL)

    return root;



    // STEP 2: UPDATE HEIGHT OF THE CURRENT NODE

    root->height = 1 + max(height(root->left),

                           height(root->right));



    // STEP 3: GET THE BALANCE FACTOR OF

    // THIS NODE (to check whether this

    // node became unbalanced)

    int balance = getBalance(root);



    // If this node becomes unbalanced,

    // then there are 4 cases



    // Left Left Case

    if (balance > 1 &&

        getBalance(root->left) >= 0)

        return rightRotate(root);



    // Left Right Case

    if (balance > 1 &&

        getBalance(root->left) < 0)

    {

        root->left = leftRotate(root->left);

        return rightRotate(root);

    }



    // Right Right Case

    if (balance < -1 &&

        getBalance(root->right) <= 0)

        return leftRotate(root);



    // Right Left Case

    if (balance < -1 &&

        getBalance(root->right) > 0)

    {

        root->right = rightRotate(root->right);

        return leftRotate(root);

    }



    return root;
}

void preOrder(Node *root)
{

    if(root != NULL)

    {

        cout << root->key << " ";

        preOrder(root->left);

        preOrder(root->right);

    }
}

int main()
{
	Node *root = NULL;
	root = insert(root, 5);
	root = insert(root, 10);
	root = insert(root, 2);
	root = insert(root, 12);
	root = insert(root, 4);
	root = insert(root, 8);
	root = insert(root, 16);

	    root = deleteNode(root, 12);
    preOrder(root);

	return 0;
}
