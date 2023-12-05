// C# program to count
// trailing 0s in n!
using System;

class GFG
{

	// Function to return trailing
	// 0s in factorial of n
	static int findTrailingZeros(int n)
	{

		if(n < 0) //Negative Number Edge Case
			return -1;

		// Initialize result
		int count = 0;

		// Keep dividing n by powers
		// of 5 and update count
		for (int i = 5; n / i >= 1; i *= 5)
			count += n / i;

		return count;
	}

	// Driver Code
	public static void Main ()
	{
		int n = 100;
		Console.WriteLine("Count of trailing 0s in " +
										n +"! is "+
								findTrailingZeros(n));
	}
}

// This code is contributed by vt_m
