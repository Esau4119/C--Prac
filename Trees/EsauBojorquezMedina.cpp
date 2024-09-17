#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct tree_node {
  int val = 0;
  tree_node* left = nullptr;
  tree_node* right = nullptr;

  tree_node(int val) : val(val) {}
  tree_node(int val, tree_node* left, tree_node* right) : val(val), left(left), right(right) {}
};

bool evenOrodd(vector<int> level){
  int adder; 
  bool result;
  for(int i = 0; i < level.size(); i++){
      adder = adder +level[i] ;
  }
   if(adder % 2 == 0){
        result = true;
    }else{
        result = false;
    }     
  return result;

}

vector<bool> even_levels(tree_node* root) {
      if(root == nullptr) return {};
      vector <bool> result;
      queue <tree_node*> q;
      tree_node* curr; 
      vector<int> level;
      int adder;
        
      q.push(root);
      q.push(nullptr);
        
      while (!q.empty()){

        // adding our numbers on the current level. 
          curr = q.front();
          q.pop();
            
          if (curr!= nullptr){
              level.push_back(curr->val);
                if(curr -> left != nullptr){
                  q.push(curr-> left);
                } 
                if(curr -> right != nullptr){
                  q.push(curr-> right);
                } 
            }else{
              // level is done now we can do what we want with the level
            result.push_back(evenOrodd(level));           
                if(q.size() > 0){
                    q.push(nullptr);
                }
                level = {}; 
            } 
        }
        return result;
}


int main() {
  vector<bool> even = { true, false, true, false };
  tree_node* six = new tree_node(6);
  tree_node* seven = new tree_node(7);
  tree_node* four = new tree_node(4, six, seven);
  tree_node* twelve = new tree_node(12);
  tree_node* one = new tree_node(1, four, twelve);
  tree_node* eight = new tree_node(8);
  tree_node* two = new tree_node(2, eight, one);

  auto result = even_levels(two);

  for (int i = 0; i < even.size(); i++) {
    if (result[i] != even[i]) {
      cout << "Test Failed" << endl;
      return 0;
    }
  }

  cout << "Test Passed" << endl;
}
