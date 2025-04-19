using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LINQ_with_Array
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[] numbers = { 10, 20, 3, 34, 56, 78, 21 ,17,7 };

            Console.WriteLine("Original Array");
            foreach (int num in numbers)
            {
                Console.WriteLine(num + "");
            }


            Console.WriteLine("Numbers greater than 20");
            var filtered = from n in numbers
                           where n > 20
                           orderby n
                           select n;
          
            foreach (int num in filtered)
            {
                Console.WriteLine(num + "");
            }

            Console.WriteLine("the even numbers from the array:");
            var evens  = numbers.Where(n => n % 2==0);
            foreach (int num in evens)
            {
                Console.WriteLine(num + " ");
            }

            Console.WriteLine("\n The total sum of all the array elements :");
            int sum=numbers.Sum();
            Console.WriteLine("Sum:" + sum);

            
            int min=numbers.Min();
            Console.WriteLine("The minimum element of the array" + min);

            int max=numbers.Max();
            Console.WriteLine("the max element of the array:" + max);

            Console.WriteLine("\nThe odd numbers from the Array:");

            var odds = numbers.Where(n => n %2 !=0);
            foreach(int num in odds)
            {
                Console.WriteLine(num + " ");
            }

            int oddCount = odds.Count();
            Console.WriteLine("The count of the odd numbers" + oddCount);

            Console.WriteLine("\n");

            int total = odds.Sum();
            Console.WriteLine("The sum of the odd numbers :"+ total);

        }
    }
}
