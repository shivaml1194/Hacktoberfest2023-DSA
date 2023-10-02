// Armstrong Numbers are the numbers having the sum of digits raised to power no. of digits is equal to a given number. Examples- 0, 1, 153, 370, 371, 407, and 1634 are some of the Armstrong Numbers.

// Example 1:
// Input:153 
// Output: Yes, it is an Armstrong Number
// Explanation: 1^3 + 5^3 + 3^3 = 153

// Input:170 
// Output: No, it is not an Armstrong Number
// Explanation: 1^3 + 7^3 + 0^3 != 170
// What are Armstrong Numbers?


bool checkArmstrong(int n){
	//Write your code here
	if(n==1){return true;}
	string str = to_string(n);
	int size = str.size();

   int digit;
   int poww = n;
   int sum = 0;
   while (n > 0) {
     digit = n%10;
	sum +=  pow(digit,size);
	n /=10;
	 
   }
   if(sum == poww) return true;
   return false;
}
