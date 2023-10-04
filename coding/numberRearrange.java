/*
*  Input :
* 345678901234
* ^^^^^^^^^^^
* |||||||||||
* 00000000011
* 12345678901
*  output : 34 198765 234
 */
class numberRearrange
{
    public static long reverse(long num)
    {
        long rev = 0;
        while(num!=0)
        {
            rev = rev*10 + num % 10;
            num/=10;
        }
        return rev;
    }
    public static int numOfDigits (long n)
    {
        int count = 0;
        while(n!=0)
        {
            count++;
            n/=10;
            // System.out.println(n);
        }
        
        return count;
    }
    public static long generatePow(int n)
    {
        long power = 1l;
        while(n>0)
        {
            power*=10;
            n--;
            // System.out.println(n+" "+power);
        }
        return power;
    }
    public static void main(String[] args) {
        long number = 345689012345L;
        int initialIndex = 3;
        int endIndex = 8;
        int nod = numOfDigits(number);
        long leftSlicer = generatePow((nod-initialIndex+1));        
        long rightSlicer = generatePow((nod-endIndex));        
        // System.out.println((nod-initialIndex+1)+ " " + (nod-endIndex)+" "+nod);
        long leftPart = number / leftSlicer;
        long rightPart = number % rightSlicer;
        long requiredMid = (number % leftSlicer) / rightSlicer;
        requiredMid = reverse(requiredMid);
        // System.out.println(rightPart+ " " + leftPart+" "+requiredMid);
        
        long result = leftPart * leftSlicer + requiredMid * rightSlicer + rightPart;
        System.out.println(result);

    }
}