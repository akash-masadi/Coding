import static java.lang.Math.*;

class gen_arms_opti_v1
{
	static int number_of_digits(int data)
	{
		int copy_data;
		int nod;
		for( copy_data = data, nod = 0; copy_data != 0; copy_data/=10)
		{
			nod+=1;
		}
		return nod;
	}
	static int ourPower( int base, int expo)
	{
		// 3 7
		// ctr 0 1 2 3 4 5 6 7 
		// res 1 3 9 27 81 243 729 2187
		int res ;
		int mulCtr;
		for( mulCtr =0, res = 1; mulCtr < expo; mulCtr+=1)
		{
			res *= base;
		}
		return res;
	}
	public static void main(String [] args)
	{
	    int num;
		int safe_num;
	    int nod_num;
		int digit;
		int powered_digit;
		int sum;
		long start_milli;
		long end_milli;
		long start_nano;
		long end_nano;
		start_milli = System.currentTimeMillis();
		start_nano = System.nanoTime();
		for( num = 1; num < 10 ; num+=1)
			System.out.println(num);
		int ctr;
		int until;
		until = 900;
		nod_num = 3;
		for ( num = 100; num < 100000000; num +=1)
		{
		   for( ctr = 1; ctr <= until; ctr+=1)
		   {			   
			sum = 0;
//			nod_num = (int)log10(num)+1;
//			nod_num = number_of_digits(num);
			safe_num = num;
			while ( num != 0)
			{
			digit = num % 10;
		//	powered_digit = (int)pow(digit,nod_num);
		    powered_digit = ourPower(digit,nod_num);
			sum += powered_digit;
			if (sum > safe_num)
				break;
			
			num /= 10;
			}
			num = safe_num;
			if ( sum == num)
				System.out.println(num);
			num+=1;
		   }
		   until*=10;
	       nod_num+=1;	   
        }		
		end_milli = System.currentTimeMillis();
		end_nano = System.nanoTime();
		System.out.println( (end_milli - start_milli)/1000);
		System.out.println( (end_nano - start_nano)/1000);
		
	}
}