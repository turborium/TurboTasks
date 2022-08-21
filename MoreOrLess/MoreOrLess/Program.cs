namespace MoreOrLess
{
    internal class Program
    {
        static void Main()
        {
            int a, b;

            Console.Write("Enter a value: ");
            a = Convert.ToInt32(Console.ReadLine());

            Console.Write("Enter b value: ");
            b = Convert.ToInt32(Console.ReadLine());

            if (a > b)
            {
                Console.WriteLine("{0} > {1}", a, b);
            }
            else if (a < b)
            {
                Console.WriteLine("{0} < {1}", a, b);
            }
            else
            {
                Console.WriteLine("{0} = {1}", a, b);
            }

            // Keep console open
            Console.Read();
        }
    }
}
