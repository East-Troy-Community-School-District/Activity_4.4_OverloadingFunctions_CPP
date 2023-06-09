/*
Say That Again
Pawelski
5/1/2023
C++
*/

#include <iostream>
#include <string>

/// <summary>
/// Repeats the desired text a given number of times.
/// </summary>
/// <param name="text">Text to be repeated.</param>
/// <param name="times">Number of times to repeat the text.</param>
void Repeat(std::string text, int times)
{
    for (int i = 0; i < times; i++)
    {
        std::cout << text << " ";
    }
}

/// <summary>
/// Repeats the desired number a given number of times.
/// </summary>
/// <param name="num">Number to be repeated.</param>
/// <param name="times">Number of times to repeat the number.</param>
void Repeat(int num, int times)
{
    for (int i = 0; i < times; i++)
    {
        std::cout << num << " ";
    }
}

/// <summary>
/// Repeats the desired number a given number of times.
/// </summary>
/// <param name="num">Number to be repeated.</param>
/// <param name="times">Number of times to repeat the number.</param>
void Repeat(double num, int times)
{
    for (int i = 0; i < times; i++)
    {
        std::cout << num << " ";
    }
}

/*
Write the function Repeat(char character, int times) so that it
Repeats the given character the number of times specified on
the same line.
*/

int main()
{
    Repeat("Hello", 5);
    std::cout << "\n";

    /*
    Add a call for Repeat(int num, int times) so that it
    displays 5 ten times
    */
    std::cout << "\n";

    /*
    Add a call for Repeat(double num, int times) so that it
    displays 3.14 seven times
    */
    std::cout << "\n";

    /*
    Add a call for Repeat(char character, int times) so that it
    displays 'Y' twenty-five times
    */
    std::cout << "\n";
    return 0;
}
