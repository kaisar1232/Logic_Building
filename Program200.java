//Addition of 2 Numbers (user input) with separate class
//Aproch 3

import java.util.*;

class Arithmatic
{
    public int iNo1;
    public int iNo2;

    public Arithmatic(int A,int B)  //parameterised constructor
    {
        iNo1 = A;
        iNo2 = B;
    }
    public int Addition()   //Function
    {
        int iAns = 0;
        iAns = iNo1 + iNo2;
        return iAns; 
    }
}

class Program200
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

        Arithmatic aobj = new Arithmatic(iValue1,iValue2);  //object creation of class Arithmatic
       
        iAns = aobj.Addition(); //Function Calling

       System.out.println("Additon is : "+iAns);

    }
} 
