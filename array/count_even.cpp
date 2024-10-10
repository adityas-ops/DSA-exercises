#include<bits/stdc++.h>
using namespace std;

int couT(int n){
    int count = 0;
    while(n){
        count++;
        n = n/10;
    }
    return count;
}
int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            if(couT(nums[i])%2 == 0){
                count++;
            }
        }
        return count;
    }

int main(){
    vector<int>  nums = {121,345,2,6,7896};
    cout<<findNumbers(nums);
}