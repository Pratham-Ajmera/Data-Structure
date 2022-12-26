#include<iostream>
#include"class.cpp"
#include<queue>
using namespace std;

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
            cout<<temp->data<<" ";
            if(temp->left != NULL){
                q.push(temp->left);
            }
            if(temp->right != NULL){
                q.push(temp->right);
            }
        }
    }

}
int main(){
    Node* root = NULL;
    root = create(root);

    levelOrderTraversal(root);

    return 0;
}