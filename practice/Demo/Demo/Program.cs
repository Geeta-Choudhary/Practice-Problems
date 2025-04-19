using System;

using System.Linq;


class Program
{

    static void Main(string[] args)
    {

        while (true)
        {
            Console.WriteLine("Basic programs");

            Console.WriteLine("1 . ShuffledString");
            Console.WriteLine("2. SumofDigits");
            Console.WriteLine("3. PalindronewithouRecurssion");
            Console.WriteLine("4. PalindronewithRecurssion");
            Console.WriteLine("5. SquareRootwithException");
            Console.WriteLine("6. Exit");
            Console.Write("Enter you choice");

            string choice = Console.ReadLine();

            switch (choice)
            {
                case "1":
                    ShuffledString();
                    break;
                case "2":
                    SumofDigits();
                    break;
                case "3":
                    PalindronewithouRecurssion();
                    break;
                case "4":
                    PalindronewithRecurssion();
                    break;
                case "5":
                    SquareRootwithException();
                    break;
                case "6":
                    Console.WriteLine("Exiting Program");
                    return;
                default:
                    Console.WriteLine("Invalid choice");
                    break;
            }
        }
    }

    static void ShuffledString()
    {
        Console.WriteLine("Enter the String");
         string input = Console.ReadLine();
     if(input.Length < 2)
     { Console.WriteLine("Too short string");
        return;
     }

string shuffle = input[input.Length - 1] + input.Substring(1, input.Length - 2) + input[0];
Console.WriteLine("ShuffledString:" + shuffle);

     }

static void SumofDigits()
    {
        Console.WriteLine("Enter Your number");
        int num =int.Parse(Console.ReadLine());
        int sum = 0;
        int temp = Math.Abs(num);

        while(temp >0)
        {
            sum += temp % 10;
            temp/= 10;
        }

        Console.WriteLine("Sum of the Digits:" + sum);


    }

    static void PalindronewithouRecurssion()
    {
        Console.WriteLine("Enter the string");
        string num=Console.ReadLine();
        string reversed = new string(num.Reverse().ToArray());

        if(reversed == num )
        {
            Console.WriteLine("The string is palindrone");

        }
        else
        {
            Console.WriteLine("Not palindrone");        
        }
    }

    static bool Isplaindrone(string s , int start ,int end)
    {
        if(start>=end)
            return true;

        return (s[start] == s[end] && Isplaindrone(s, start + 1, end - 1));
    }
     
    static void PalindronewithRecurssion()
    {
        Console.WriteLine("Enter the string");
        string num=Console.ReadLine();

        if(Isplaindrone(num, 0, num.Length- 1))
        {
            Console.WriteLine("It is alindrone");
        }
        else
        {
            Console.WriteLine("Not palindrone");
        }
    }

    static void SquareRootwithException()
    {
        Console.WriteLine("enter the number");
        double num=double.Parse(Console.ReadLine());
        try
        {
            if (num < 0)
                throw new ArgumentException("Negative number not allowed");
             double result = Math.Sqrt(num);
            Console.WriteLine("SquareRoot :" + result);

        }
        catch (FormatException)
        {
            Console.WriteLine("Invalid input");
        }
        catch (ArgumentException ex)
        {
            Console.WriteLine("Error:" + ex.Message);
        }

    }
}
