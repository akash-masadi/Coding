import static java.lang.Math.*;
/*
find the number of digits

break the number into individiual digits
power the digit
sum
Loop until no more digits
*/
class arms
{
	// 1634
	// LSD
	public static void main(String [] args)
	{
	    int num;
		int safe_num;
	    int nod_num;
		int digit;
		int powered_digit;
		int sum;
		sum = 0;
		num = 1634;
		nod_num = (int)log10(num)+1;
		System.out.println(nod_num);
		safe_num = num;
		while ( num != 0)
		{
		digit = num % 10;
		powered_digit = (int)pow(digit,nod_num);
		sum += powered_digit;
		num /= 10;
	    }
		num = safe_num;
		if ( sum == num)
			System.out.println("Arms");
		else
			System.out.println("NOT");
		
	}
}