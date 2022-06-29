int helper(String S, int start, int end){
	if(start >= end){
    	return 1;
	}
	if(S.charAt(start) != S.charAt(end)){
    	return 0;
	}
	return helper(S, start+1, end-1);
}
	int isPalindrome(String S) {
    	// code here
    	int end = S.length() - 1;
    	return helper(S, 0, end);
	}
