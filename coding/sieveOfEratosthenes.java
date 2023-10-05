class sieveOfEratosthenes
{

public static void main(String args[])
{
	long  range;
	long  currentNum;
	long  multiple;
	long  count;
	long  prime;
	long  prev;
	long  inc;
	range = 10000000;
	boolean arr[]=new long long[range+1];
	arr[1]=1;
	arr[2]=1;
	arr[0]=1;
	count = 1 ;
	for(multiple = 2; multiple < range ; multiple+=2)
	{
		arr [ multiple ] = 1;
		count++;
	}
	prime = 3;
	
	while(prime < range)
	{
		prev = prime;
		while( prime < range && prime [arr]  )
		{
			prime+=2;
		}
//		cout << " next Selected prime :" <<prime;
		inc = prime * 2;
		for(multiple = prime * prime ; multiple < range ; multiple += inc )
		{
			if( ! arr [ multiple ]) count++;
			arr [ multiple ] = 1 ;
			
		}
		prev [ arr ] = 0;
		prime [ arr ] = 1;
	}
//	for(multiple=2;multiple<range; multiple+=1)
//	{
//		if(!arr [ multiple ])
//		{
//			cout<< multiple << "\n" ;
//			count+=1;
//		}
//	}
	cout << "Count : " << (range - count);
}
}

