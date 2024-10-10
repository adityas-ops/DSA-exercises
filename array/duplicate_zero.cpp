#include<bits/stdc++.h>
using namespace std;

 void duplicateZeros(vector<int>& arr) {
        vector<int> temp;
        for(int i = 0; i<arr.size();i++){
            int j =0;
            // cout<<arr[i]<<" ";
            if(arr[i] != 0){
                temp.push_back(arr[i]);
                j++;

            }else{
                temp.push_back(0);
                temp.push_back(0);
                j+=2;
            }
            if(j == arr.size()){
                break;
            }
        }
        //  reverse(temp.begin(), temp.end());
        for(int i = 0; i<arr.size();i++){
            arr[i] = temp[i];
        }
        cout<<endl;
        for(int i = 0; i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
    }
    // another method to solve the problem
   
   
   
    void duplicateZeross(vector<int>& arr) {
        int n = arr.size();
        int i = 0;
        while(i < n){
            if(arr[i] != 0){
                i++;
            }
            else{
                int temp = arr[i+1];
                arr[i+1] = 0;
            //    shift the elements to the right
                for(int j = i+2; j<n; j++){
                    int temp1 = arr[j];
                    arr[j] = temp;
                    temp = temp1;
                }
                i+=2;

            }
        }
        for(int i = 0; i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
    }

int main(){
    vector<int> arr = {1,0,2,3,0,4,5,0};
    // duplicateZeros(arr);
    cout<<endl;
    duplicateZeross(arr);
}