#include<limits.h>
long long maxSubarraySum(int a[], int n)
{
      long long curr =0;
        long long  maxsum=0;
    for(int i =0; i<n;i++){
        curr+= a[i];
        
        if(curr>maxsum)
            maxsum = curr;
        
        if(curr<0)
            curr =0;
        
        
    }
        return maxsum;
}