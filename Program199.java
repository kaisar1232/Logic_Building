//Addition of 2 Numbers (user input)
//Aproch 2

import java.util.*;

class Program199
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;
        int iValue2 = 0;
        int iAns = 0;

        System.out.println("Enter First Number:");
        iValue1 = sobj.nextInt();

        System.out.println("Enter Second Number:");
        iValue2 = sobj.nextInt();
       
        iAns = iValue1 + iValue2;

       System.out.println("Additon is : "+iAns);

    }
} 
/*
    int         nextInt()
    float       nextFloat()
    double      nextDouble()
    string      nextLine()
*/   