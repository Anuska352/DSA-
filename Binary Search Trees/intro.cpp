#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
      int data;
      Node* left;
      Node* right;

    Node(int d){
        this->data = d;
        this->left=NULL;
        this->right=NULL;
    }

};

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<< temp ->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }

            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

Node* insertIntoBST(Node* root, int d){
    //base case
    if(root == NULL){
        root = new Node(d);
        return root;
    }

    if(d > root->data){
        //right part
        root -> right = insertIntoBST(root->right, d);
    }
    else{
        //left part
        root->left = insertIntoBST(root->left,d);
    }
    return root; 
}

Node* minVal(Node* root){
    Node* temp = root;
    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}
 
Node* maxVal(Node* root){
    Node* temp = root;
    while(temp->right != NULL){
        temp = temp->right ;
    }
    return temp;
}

Node* deleteFromBST(Node* root, int val){
    //base case
    if(root == NULL){
        return root; 
    }
    if(root->data == val){
        //0 child
        if(root -> left == NULL && root->right == NULL){
             delete root;
             return NULL;
        }

        //1child

        //left child
        if(root->left != NULL && root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }

        //right child
         if(root->left == NULL && root->right != NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }


        //2child
        if(root->left != NULL && root->right != NULL){
            int mini = minVal(root->right)->data;
            root->data = mini;
            root->right = deleteFromBST(root->right, mini);
            return root;
        }
    }
    else if(root->data > val){
        //traverse the left part
        root->left = deleteFromBST(root->left, val);
        return root;
    }
    else{
        //traverse the right part
        root->right = deleteFromBST(root->right, val);
        return root;
    }
}

void takeInput(Node* &root){

    int data;
    cin>>data;

    while(data != -1){
        insertIntoBST(root,data);
        cin>>data;
    }
}

int main(){

    Node* root = NULL;

    cout<<"Enter data to create a BST"<<endl;
    takeInput(root);

    cout<<"Printing the BST"<<endl;
    levelOrderTraversal(root);

    return 0;

}