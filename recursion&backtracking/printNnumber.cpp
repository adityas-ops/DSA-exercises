#include<bits/stdc++.h>
using namespace std;

void printN(int n){
    if(n == 0){
        return;
    }
    printN(n-1);
    cout << n << " ";
}

int main(){
    vector<int> v;
    for(int i = 1; i <= 5; i++){
        cout<<"Enter the number"<<i<<" : "<<endl;
         int a;
         cin>>a;
        v.push_back(a);
    
    }
    for(auto i : v){
        printN(i);
        cout <<"<---------------------line end--------------------->"<< endl;
    }
  
    return 0;
}