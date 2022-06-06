#include <bits/stdc++.h> 
int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
  map<int,int>hm;
    hm[0] = 0;
    int length = 0;
    int cumSum = 0;
 
    for (int i = 0; i < arr.size(); i++) {
        cumSum = cumSum + arr[i];
 
        if (hm.find(cumSum) != hm.end()) {
            length = max(length,
                  i + 1 - hm[cumSum]);
        }
        else {
            hm[cumSum] = i + 1;
        }
    }
    return length;
}