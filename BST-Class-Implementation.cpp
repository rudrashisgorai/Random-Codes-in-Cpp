/**************
 
 * Following is BinaryTreeNode class -
 
template <typename T>
class BinaryTreeNode {
public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;
    
    BinaryTreeNode(T data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
 
 * Foloowing is main function which we are using internally

int main(){
    BST *tree = new BST();
    int choice, input;
    while(true){
        cin>>choice;
        switch(choice){
            case 1:
                cin >> input;
                tree->insert(input);
                break;
            case 2:
                cin >> input;
                tree->deleteData(input);
                break;
            case 3:
                cin >> input;
                if(tree->hasData(input)) {
                    cout << "true" << endl;
                }
                else {
                    cout << "false" << endl;
                }
                break;
            default:
                tree->printTree();
                return 0;
                break;
        }
    }
}
*******************/


class BST {
	// Complete this class
    BinaryTreeNode<int>* root ;
    
    public :

    ~BST() {
        root = makeEmpty(root);
    }
    
    bool hasData(int data){
		 return search(root,data);
        
    }

	void insert(int x) {
        root = insert(x, root);
    }

    void deleteData(int x) {
        root = remove(x, root);
    }

    void printTree() {
        inorder(root);
        cout << endl;
    }


    private:
    bool search(BinaryTreeNode<int>* root, int data){
        if(!root) return false ;
        if(root->data == data )return true ;
        if(root -> data > data ) return search(root->left,data);
        if(root -> data <data ) return search(root->right,data);
        
    }
    BinaryTreeNode<int>* makeEmpty(BinaryTreeNode<int>* t) {
        if(t == NULL)
            return NULL;
        {
            makeEmpty(t->left);
            makeEmpty(t->right);
            delete t;
        }
        return NULL;
    }

    BinaryTreeNode<int>* insert(int x, BinaryTreeNode<int>* t)
    {
        if(t == NULL)
        {
            t = new BinaryTreeNode<int>(x);
            t->left = t->right = NULL;
        }
        else if(x < t->data)
            t->left = insert(x, t->left);
        else if(x > t->data)
            t->right = insert(x, t->right);
        return t;
    }

    BinaryTreeNode<int>* findMin(BinaryTreeNode<int>* t)
    {
        if(t == NULL)
            return NULL;
        else if(t->left == NULL)
            return t;
        else
            return findMin(t->left);
    }

    BinaryTreeNode<int>* findMax(BinaryTreeNode<int>* t) {
        if(t == NULL)
            return NULL;
        else if(t->right == NULL)
            return t;
        else
            return findMax(t->right);
    }

    BinaryTreeNode<int>* remove(int x, BinaryTreeNode<int>* t) {
        BinaryTreeNode<int>* temp;
        if(t == NULL)
            return NULL;
        else if(x < t->data)
            t->left = remove(x, t->left);
        
        else if(x > t->data)
            t->right = remove(x, t->right);
        
        else if(t->left && t->right)
        {
            temp = findMin(t->right);
            t->data = temp->data;
            t->right = remove(t->data, t->right);
        }
        else
        {
            temp = t;
            if(t->left == NULL)
                t = t->right;
            else if(t->right == NULL)
                t = t->left;
            delete temp;
        }

        return t;
    }

    void inorder(BinaryTreeNode<int>* t) {
        if(t == NULL)
            return;
    	cout << t->data <<":";
        if(t->left) cout<<"L:"<<t->left->data<<","; 
        if(t->right)cout<<"R:"<<t->right->data<<endl;
        else cout<<endl;
        inorder(t->left);
        inorder(t->right);
    }

    BinaryTreeNode<int>* find(BinaryTreeNode<int>* t, int x) {
        if(t == NULL)
            return NULL;
        else if(x < t->data)
            return find(t->left, x);
        else if(x > t->data)
            return find(t->right, x);
        else
            return t;
    }



};
