class Solution{
    public:
    bool helper(vector<int> a, int sum, int tempsum, int i){
        if(sum == tempsum){
            return true;
        }
        if(i >= a.size()){
            return false;
        }
        
        int recall1 = helper(a,sum,tempsum+a[i],i+1);
        int recall2 = helper(a,sum,tempsum,i+1);

        return recall1 || recall2
    }

    bool isSubsetSum( vactor<int>arr, int sum){
        // Code here
        return helper(arr,sum,0,0);
    }
};
