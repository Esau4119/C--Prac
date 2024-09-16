#include <iostream>
#include <vector>

using namespace std;
int findMaxConsecutiveOnes(vector<int>& nums){
    int max = 0;
    int count = 0;

    for (int n : nums){
        if(n == 0){
            count = 0;
        }

        if(n = 1){
            count++;
        }

        if(count > max){
            max = count;
        }
    }


    return max;
}

int main(){
    vector<int> nums {1,1,0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,};
    cout << findMaxConsecutiveOnes(nums) << endl;
}