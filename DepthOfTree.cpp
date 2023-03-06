using namespace std;

class BinaryTree {
public:
  int value;
  BinaryTree *left;
  BinaryTree *right;

  BinaryTree(int value) {
    this->value = value;
    left = nullptr;
    right = nullptr;
  }
};

int helper(int depth, BinaryTree *curr){ 
  if(curr == nullptr){ //base case for the root 
    return 0; 
  }

  return depth + helper(depth +1, curr->left) + helper(depth+1, curr->right);

}

int nodeDepths(BinaryTree *root) {
  // Write your code here.
  return helper(0, root); //out depth is 0 at the root 
}


