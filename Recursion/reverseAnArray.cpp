class GFG {
           	public static void main (String[] args) {
                          	//code
                          	Scanner sc = new Scanner(System.in);
                          	int i;
                          	int t = sc.nextInt();
                          	while(t>0){
                          		int n = sc.nextInt();
                          		int arr[] = new int[n];
                          		for( i=0; i< n; i++){
                          	    	arr[i] = sc.nextInt();
                          		}
                          		for(i=0; i< n/2; i++){
                          	    	int temp = arr[i];
                          	    	arr[i] = arr[n-i-1];
                          	    	arr[n-i-1] = temp;
                          		}
                          		for(i =0; i<n; i++){
                          	    	System.out.print(arr[i]+" ");
                          		}
                          		System.out.println();
                          		t--;   
                          	}
                          	
           	}
}
