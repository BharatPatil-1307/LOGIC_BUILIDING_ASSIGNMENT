// Input : Hello
// OutPut :
//  #	#	#	#	#	
//  H	#	#	#	#	
//  H	e	#	#	#	
//  H	e	l	#	#	
//  H	e	l	l	#	
//  H	e	l	l	o	
//  H	e	l	l	#	
//  H	e	l	#	#	
//  H	e	#	#	#	
//  H	#	#	#	#

import java.util.*;

class Pattern
{
    public void Pattern(String str)
    {
        for (int i = 0; i < str.length(); i++)      
        {
            for (int j = 0; j < str.length(); j++)  
            {
                if (j <  i)
                {
                    System.out.print(str.charAt(j) + "\t");
                }
                else
                {
                    System.out.print("#\t");
                }
            }
            System.out.println(); 
        }
        for (int i = 0; i < str.length(); i++)      
        {
            for (int j = 0; j < str.length(); j++)  
            {
                if (j < str.length() - i)
                {
                    System.out.print(str.charAt(j) + "\t");
                }
                else
                {
                    System.out.print("#\t");
                }
            }
            System.out.println(); 
        }
    }
}

class Assignment5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String :");
        String str = sobj.nextLine();

        Pattern pobj = new Pattern();
        pobj.Pattern(str);

    }
}