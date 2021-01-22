#include <iostream>

void WriteLine(std::string line);
bool IsMultipleOf(int number, int divider);

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        std::string output = "";

        if(IsMultipleOf(i, 3))
        {
            output += "Fizz";
        }

        if(IsMultipleOf(i, 5))
        {
            output += "Buzz";
        }

        if(output == "")
        {
            WriteLine(std::to_string(i));
        }
        else
        {
            WriteLine(output);
        }
    }
}

void WriteLine(std::string line)
{
    std::cout << line << std::endl;
}

bool IsMultipleOf(int number, int divider)
{
    return number % divider == 0;
}