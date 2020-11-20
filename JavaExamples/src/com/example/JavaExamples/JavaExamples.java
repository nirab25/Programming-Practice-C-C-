package com.example.JavaExamples;

public class JavaExamples {

	public static int ConvertDecimalToOctal(int decimal)
	{
		int octalNumber = 0, i = 1;

        while (decimal != 0)
        {
            octalNumber += (decimal % 8) * i;
            decimal /= 8;
            i *= 10;
        }

        return octalNumber;
	}
	
	public static void ConvertToHexadecimal(int n)
	{
		char[] arr = new char[100];
		
		int d = n, rem, i = 0;
		
		while(d != 0)
		{
			rem = d % 16;
			if(rem >= 10) {
				arr[i++] = (char)(rem + 55);
			} else
				arr[i++] = (char)(rem + 48);
			
			d /= 16;
		}
		
		System.out.println("\nHexadecimal of "+n+" is:");
		for (int j = i; j >= 0; j--)
		{
			System.out.print(arr[j]);
		}
	}
	
	public static void main(String[] args) {

		int octal = ConvertDecimalToOctal(78);
		
		System.out.println("Octal of 78 is "+octal);
		
		ConvertToHexadecimal(2525);
		ConvertToHexadecimal(2545);
	}
}
