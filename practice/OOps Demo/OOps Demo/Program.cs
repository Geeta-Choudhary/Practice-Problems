using System;
using System.CodeDom;
using System.Globalization;

interface IEmployee
{
    void DisplayDetails();
}
 class Person
{
    public string Name { get; set; }
    public int Age { get; set; } 
     public Person(string name ,int age)
    {
        Name = name; Age = age;
        Console.WriteLine(" public person Constructor called");
    }

    public virtual void ShowInfo()
    {
        Console.WriteLine($"Person:{Name} , Age:{Age}");
    }

    static Person()
    { Console.WriteLine("Static constructor called. Class initialized");
    }

    private Person()
    {
        Console.WriteLine("Private constructor called");
    }
                
}

class Employee : Person ,IEmployee
{
    public int EmployeeId { get; set; }
    public string Department { get; set; }

    public Employee(string name ,int age ,int employeeid ,string department) : base(name,age)
    { EmployeeId = employeeid; Department = department;
        Console.WriteLine(" Public Employee Constructor called");
    }

    public override void ShowInfo()
    {
        Console.WriteLine($"Employee:{Name} , Age:{Age} ,EmployeeId:{EmployeeId}, Department:{Department}");
    }

    public void DisplayDetails()
    {
        Console.WriteLine("The employee details");
        ShowInfo();
    }

    public new void ShowInfo( string prefix)
    {
        Console.WriteLine($" {prefix}:\n \r Employee:{Name} , Age:{Age} ,EmployeeId:{EmployeeId}, Department:{Department}");
    }

}


class Program
{
    static void Main()
    {
        Console.WriteLine("Creating the Employee object");
        Employee emp= new Employee("geeta",23,101,"CS");

        Console.WriteLine("Calling the virtual method");
        emp.ShowInfo();

        Console.WriteLine("Calling the overloded method");
        emp.ShowInfo("Bio-data ");

        Console.WriteLine("Calling the interface method");
        emp.DisplayDetails();
    }
}
