class Solution{
public:
    int get_gcd(int a, int b){
        if (b == 0){
            return a;
        }

        return get_gcd(b, a%b);
    }
	int countCoPrime(int arr[], int n)
	{
	    // Complete the function
	    int ans = 0;

	    for(int i=0; i<n-1; i++){
	        int gcd = get_gcd(arr[i], arr[i+1]);
	        //cout<<gcd<<" ";
	        if(gcd != 1){
	            ans+= 1;
	        }
	    }

	    return ans;
	}

};
