#include<bits/stdc++.h>
using namespace std;



/*in sliding window there is four type patter first patter is 
find the max sum of an array of an subarray length is 3 and conceutive subarray and make sure max sum print
int main(){
    int arr[10] = {1,2,1,1,53,353,23,12,343,343};
    int subArrayLength = 3;
    int n = 10;
    int l = 0;
    int r = subArrayLength; 
    int maxSum = 0;
    for(int i= 0;i<r;i++){
        maxSum += arr[i];
    }
    cout<<maxSum<<endl;
    int newsum = maxSum ;
    while(r<n){
        
        newsum = newsum - arr[l] + arr[r];
        // cout<<newsum<<" new SUM"<<endl;
        maxSum = max(newsum,maxSum);
        // cout<<maxSum<<endl;
        r++;
        l++;
        // cout<<"hello world"<<endl;
    } 
    cout<<maxSum<<endl;
    return 0;    
}
*/
int main(){
    int arr[10] = {1,2,1,1,53,353,23,12,343,343};
    int k = 14;
    int n = 10;
    int l = 0;
    int r = 0; 
    int maxLen = 1;
    int sum = arr[0];
    int length = maxLen;
    while(r<n){
        
        while (
            
        )
        {
            /* code */
        }
         
        
        // cout<<"hello world"<<endl;
    } 
    
    return 0;  
}