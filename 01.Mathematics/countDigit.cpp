// n = 12345
// count of digit =  5 
    
int countDigits(int n){
	
	int cnt=0;
	int digit = n;
	
	
	while(digit >0){
	int rem = digit%10;
	if( rem !=0 && n%rem == 0){
		cnt++;
	}
	digit /=10;
	}
	return cnt;
}
