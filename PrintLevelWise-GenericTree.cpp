// Following is the given TreeNode structure.
/**************

template <typename T>
class TreeNode {
public:
    T data;
    vector<TreeNode<T>*> children;
    
    TreeNode(T data) {
        this->data = data;
    }
    
    ~TreeNode() {
        for (int i = 0; i < children.size(); i++) {
            delete children[i];
        }
    }
    
};
***************/

#include <bits/stdc++.h>
using namespace std ;

void printLevelWise(TreeNode<int>* root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output as specified in the question.
     */
    
    queue<TreeNode<int>*> pendingNodes ;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
        
        TreeNode<int>* front = pendingNodes.front();
        if(front->children.size()==0)
            cout<<front->data<<":"<<endl;
        else cout<<front->data<<":";
        for(int i =0 ;i< front->children.size();i++)
        {
            pendingNodes.push(front->children[i]);
            
            if(i== front->children.size()-1)
                cout<<front->children[i]->data<<endl;
            else 
				cout<<front->children[i]->data<<",";     
        }
        pendingNodes.pop();
        
    }
    
}
    
    
