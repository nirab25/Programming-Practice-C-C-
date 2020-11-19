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
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub

		int decimal = 78;
		int octal = ConvertDecimalToOctal(decimal);
		
		System.out.println("Octal of 78 is "+octal);
	}
}
