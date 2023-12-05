class Solution{
public:
    int kthPrime(int n, int k){
        // code here
        while(n % 2 == 0 && n > 1){
            n = n/2;
            k--;

            if(k == 0){
                return 2;
            }
        }


        for(int i=3; i<=sqrt(n); i+= 2){
            while(n % i == 0){
                n = n / i;
                k--;

                if(k == 0){
                    return i;
                }
            }
        }


        if(n > 2){
            if(k == 1){
                return n;
            }
        }

        return -1;
    }
};
