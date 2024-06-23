#include <iostream>
using namespace std;
#include <unordered_map>
#include<vector>
#include <map>

int main(){
    vector<int> arr = {6,2,3,4,7,2,1,7,1};
    int n = arr.size();
    int k = 4;
    int leftSum = 0;
    int rightsum = 0;
    int maxSum = 0;
    for (int i = 0; i < k; i++)
    {
        leftSum += arr[i];
    }
    maxSum = leftSum;
    int rightIndex = n-1;
    for (int i = k-1; i >=0; i--)
    {
        rightsum += arr[rightIndex];
        leftSum -= arr[i];
        maxSum = max(maxSum,(rightsum+leftSum));  
        rightIndex--;      
        
    }
    cout<<maxSum<<endl;
    return 0;
    


}