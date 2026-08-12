//Smallest Missing Integer Greater Than Sequential Prefix Sum
#include <iostream>         /* Just to remove the error alerts */
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int missingInteger(vector<int>& nums) {
        long long sum = 0;
        int prev = nums[0];
        int i = 0;
        while(i < nums.size()){
            if(i == 0){
                sum += nums[0];
                i++;
            }
            else if(nums[i] == prev + 1){
                sum += nums[i];
                prev = nums[i];
                i++;
            }
            else{
                break;
            }
        }
        sort(nums.begin(),nums.end());
        for(int i = 0; i < nums.size();i++){
            if(nums[i] == sum){
                sum++;
            }
        }
        return sum;
    }
};