class Solution {
	public:
    long long int nthFibonacci(long long int n) {
        int first = -1, second = 1;
        long long int next;
        for(int itr = 0; itr <= n; itr++) {
            next = (first + second) % 1000000007;
            first = second;
            second = next;
        }
        return next;
    }
};
