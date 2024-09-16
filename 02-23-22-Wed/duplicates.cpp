#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool isContainsDuplicates(vector<int>& nums){
    unordered_set<int> set;
    for (int n : nums){
        //set contains n then return true
        if (set.count(n) > 0){
            return true;
        }

        set.insert(n);
    }
    return false;


}

int main (){
    vector<int> nums {1,2,3,1};

    if (isContainsDuplicates(nums)){
        cout << "Contains Duplicates!" << endl;
    }

}