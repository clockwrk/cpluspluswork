/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.

The Node struct is defined as follows:
   struct Node {
      int data;
      Node* left;
      Node* right;
   }
*/
   bool checkBST(Node* root) {

       if(!(root->left==nullptr)  && (root->data < root->left->data) )return false;
       if(!(root->right==nullptr)  && (root->data > root->right->data) )return false;
       if(!(root->left==nullptr)) return checkBST(root->left);
       if(!(root->right==nullptr)) return checkBST(root->right);
       return true;
   }
