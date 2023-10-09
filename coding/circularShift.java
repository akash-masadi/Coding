/*
 * only for 32 bit integers
 */
public class circularShift {
    private static int Total_Bits(int num)
    {
        int count = 1;
        int checkBits = 1;
        num = (num<0)?-num:num;
        while(checkBits < num)
        {
            checkBits*=2;
            count++;
        }
        return count;
    }
    static int leftShift(int num,int digits, int maxBits)
    {
        return (num << digits) | (num >> (maxBits-digits));
    }
    static int rightShift(int num,int digits, int maxBits)
    {
        return (num >> digits) | (num << (maxBits-digits));
    }
    public static void main(String[] args) {
        // System.out.println(Total_Bits(-24));
        System.out.println(leftShift(16,31,32));
        System.out.println(leftShift(16,2,32));
    }
    
}
