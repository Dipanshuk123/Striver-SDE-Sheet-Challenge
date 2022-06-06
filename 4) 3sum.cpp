#include <bits/stdc++.h>
using namespace std;
 
#include <vector>
vector<vector<int>> findTriplets(vector<int>A, int n, int k) {
	// Write your code here.
    
    vector<vector<int>>ans;
   sort(A.begin(), A.end());
        for(int i = 0; i < n; i++){
             if(i > 0 && A[i] == A[i-1])
                continue;
            
            int low = i+1, high = n-1;
            while (low < high){
                int sum = A[i] + A[low] + A[high];
                if(sum == k){
                    ans.push_back({A[i] , A[low] , A[high]});
                     while(low < high && A[low] == A[low+1]) low++;
                    while(low < high && A[high] == A[high-1]) high--;
                    low++;
                    high--;
                }
                else if(sum > k){
                    high--;
                }
                
                else if(sum < k){
                    low++;
                }
                
            }
        
        }
        return ans;
}