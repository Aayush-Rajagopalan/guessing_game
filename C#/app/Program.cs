// See https://aka.ms/new-console-template for more information
Console.WriteLine("Enter Your Number");

int number = Convert.ToInt32(Console.ReadLine());

Random rnd = new Random();

int winner = rnd.Next(1, 100);

while (number != winner)
{
    if (number > winner)
    {
        Console.WriteLine("Your number is too high");
    }
    else
    {
        Console.WriteLine("Your number is too low");
    }
    Console.WriteLine("Enter Your Number");
    number = Convert.ToInt32(Console.ReadLine());
}

Console.WriteLine("You Win");



