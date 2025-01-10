//accept string from user and display letters from that string
//Hello = h e l l o
//use inbuilt funtion charAt for display sinhle letter from string

import java.util.*;

class program261
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner (System.in);

        System.out.println("Enter Your Name : ");
        String name = sobj.nextLine();

        int i = 0, iCnt = 0;
        char ch;

        for(i = 0; i < name.length(); i++)
        {
            ch = name.charAt(i);

            if((ch >= 'A') && (ch <= 'Z'))
            {
                iCnt++;
            }
        }
        System.out.println("Capita; Characteristics are : "+iCnt);
    }

}