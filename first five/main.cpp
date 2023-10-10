#include <iostream>
#include <limits>
void program1()
{
    unsigned int x, y, s;
    std::cout << "\nSum of two numbers. \nEnter 1st number: ";
    std::cin >> x;
    std::cout << "\nEnter 2st number: ";
    std::cin >> y;
    if (std::cin.fail())
    {
        std::cout << "\nInput error.";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (x < 1 || y < 1)
    {
        std::cout << "\nNot natural numbers.";
        return;
    }
    s = x + y;
    std::cout << x << " + " << y << " = " << s;
}

void program2()
{
    unsigned int a, b;
    std::cout << "\nEnter two numbers to compare them. \nEnter first number: ";
    std::cin >> a;
    std::cout << "\nEnter second number: ";
    std::cin >> b;
    if (std::cin.fail())
    {
        std::cout << "\nInput error.";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (a < 1 || b < 1)
    {
        std::cout << "\nNot natural numbers.";
        return;
    }
    if (a > b)
    {
        std::cout << a << ">" << b;
    }
    else if (a < b)
    {
        std::cout << a << "<" << b;
    }
    else
    {
        std::cout << a << "=" << b;
    }
}

void program3()
{
    unsigned int a, b, c, max;
    std::cout << "\nLooking for a maximum in three numbers.\nEnter first number: ";
    std::cin >> a;
    std::cout << "\nEnter second number: ";
    std::cin >> b;
    std::cout << "\nEnter third number: ";
    std::cin >> c;
    if (std::cin.fail())
    {
        std::cout << "\nInput error.";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (a < 1 || b < 1 || c < 1)
    {
        std::cout << "\nNot natural numbers.";
        return;
    }
    if (a > b && a > c)
    {
        max = a;
    }
    else if (b > c)
    {
        max = b;
    }
    else
    {
        max = c;
    }
    std::cout << "\nMax number is " << max;
}

void program4()
{
    unsigned int a, b, c, d, min1, min2, max;
    std::cout << "\nGetting maximum from two minimums of two numbers.\nEnter 1st number: ";
    std::cin >> a;
    std::cout << "\nEnter 2nd number: ";
    std::cin >> b;
    std::cout << "\nEnter 3rd number: ";
    std::cin >> c;
    std::cout << "\nEnter 4th number: ";
    std::cin >> d;
    if (std::cin.fail())
    {
        std::cout << "\nInput error.";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (a < 1 || b < 1 || c < 1 || d < 1)
    {
        std::cout << "\nNot natural numbers.";
        return;
    }
    if (a > b)
    {
        min1 = b;
    }
    else if (a < b)
    {
        min1 = a;
    }
    else
    {
        min1 = a;
    }
    if (c > d)
    {
        min2 = d;
    }
    else if (c < d)
    {
        min2 = c;
    }
    else
    {
        min2 = c;
    }
    if (min1 > min2)
    {
        max = min1;
    }
    else
    {
        max = min2;
    }
    std::cout << "\nMaximum equals " << max;
}
void program5()
{
    unsigned int a;
    std::cout << "\nChecking if the number is double-digit and even.\nEnter your number: ";
    std::cin >> a;
    if (std::cin.fail())
    {
        std::cout << "\nInput error.";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (a > 10 && a < 100 && a % 2 == 0)
    {
        std::cout << "\nNumber is double-digit and even";
    }
    else
    {
        std::cout << "\nNumber doesn't meet the requirements";
    }
}

int main()
{
    bool answer;

    //   program1();
    //   program2();
    //   program3();
    //   program4();
    //   program5();

    std::cout << "\nOne more? (1 - yes, 0 - no): ";
    std::cin >> answer;

    if (answer)
    {
        main();
    }
    return 0;
}
