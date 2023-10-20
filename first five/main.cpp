#include <iostream>
#include <limits>
void program1()
{
    int x, y, s;
    std::cout << "\nSum of two numbers. \nEnter 1st number: ";
    std::cin >> x;
    std::cout << "\nEnter 2st number: ";
    std::cin >> y;
    s = x + y;
    if (x < 1 || y < 1)
    {
        std::cout << "\nNot natural numbers.";
        return;
    }
    if (std::cin.fail())
    {
        std::cout << "\nInput error.";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if ((std::cin.good() && INT_MAX - x > y) )
    {
        std::cout << x << " + " << y << " = " << s;
    }
    else
    {
        std::cout << "\nSorry, result is too great";
    }
}

void program2()
{
    int a, b;
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
    int a, b, c, max;
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
    if (a == b && b == c)
    {
        std::cout << "\nAll numbers are equal.";
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
    int a, b, c, d, min1, min2, max;
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
    int a;
    std::cout << "\nChecking if the number is double-digit and even.\nEnter your number: ";
    std::cin >> a;
    if (std::cin.fail())
    {
        std::cout << "\nInput error.";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if ((a >= 10 && a < 100 && a % 2 == 0) || (a <= -10 && a >-100 && a % 2 == 0) )
    {
        std::cout << "\nYes";
    }
    else
    {
        std::cout << "\nNo";
    }
}

void program6()
{
    int a,a1,a2,a3,a4,b;
    std::cout << "\nChecking if entered digit exists in entered number";
    std::cout << "\nEnter your digit: ";
    std::cin >> a;
    if (std::cin.fail())
    {
        std::cout << "\nInput error.";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    std::cout << "\nEnter your number (not greater than 4 digit number): ";
    std::cin >> b;
    b = abs(b);
    if (std::cin.fail())
    {
        std::cout << "\nInput error.";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (b > 9999 || b < 1000)
    {
        std::cout << "\nYour number should be 4 digit number";
        return;
    }
    if (a > 9 || a < 0)
    {
        std::cout << "\nYour digit should be digit.";
        return;
    }
    a1 = b / 1000;
    a2 = b % 10;
    a3 = b / 100 % 10;
    a4 = b / 10 % 10;
    if (a == a1 || a == a2 || a == a3 || a == a4)
    {
        std::cout << "\nYes";
    }
    else
    {
        std::cout << "\nNo";
    }

}
void program7()
{
    int num,a,b,c;
    std::cout << "\nEnter three digit number: ";
    std::cin >> num;
    num = abs(num);
    if (std::cin.fail())
    {
        std::cout << "\nInput error.";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (num > 999 || num < 100)
    {
        std::cout << "Number should be a three digit number";
        return;
    }
    a = num / 100;
    b = num % 10;
    c = num / 10 % 10;
    if ((a + b + c) % 2 == 0)
    {
        std::cout << "\nYes";
    }
    else
    {
        std::cout << "\nNo";
    }
}

void program8()
{
    int d1, d2 ,d3, num;
    std::cout << "\nEnter your three digit number: ";
    std::cin >> num;
    num = abs(num);
    if (std::cin.fail())
    {
        std::cout << "\nInput error.";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (num > 999 || num < 100)
    {
        std::cout << "Number should be a three digit number";
        return;
    }
    d1 = num / 100;
    d2 = num % 10;
    d3 = num / 10 %  10;
    if (d1 == d2 && d2 == d3)
    {
        std::cout << "\n3";
    }
    else if (d1 == d2 || d2 == d3 || d3 == d1)
    {
        std::cout << "\n2";
    }
    else
    {
        std::cout << "\n0";
    }
}

void program9()
{
    int num, d1, d2, d3, d4;
    std::cout << "\nEnter your four digit number: ";
    std::cin >> num;
    num = abs(num);
    if (std::cin.fail())
    {
        std::cout << "\nInput error.";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (num > 9999 || num < 1000)
    {
        std::cout << "Number should be a four digit number";
        return;
    }
    d1 = num / 1000;
    d2 = num / 100 % 10;
    d3 = num / 10 % 10;
    d4 = num % 10;
    if (num == (d4 * 1000 + d3 * 100 + d2 * 10 + d1))
    {
        std::cout << "\nYes";
    }
    else
    {
        std::cout << "\nNo";
    }
}
void program10()
{
    int num, d1, d2, d3, d4;
    std::cout << "\nEnter four digit number: ";
    std::cin >> num;
    num = abs(num);
    if (std::cin.fail())
    {
        std::cout << "\nInput error.";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (num > 9999 || num < 1000)
    {
        std::cout << "Number should be a four digit number";
        return;
    }
    d1 = num / 1000;
    d2 = num / 100 % 10;
    d3 = num / 10 % 10;
    d4 = num % 10;
    if (d1 < d2 && d2 < d3 && d3 < d4)
    {
        std::cout << "\nIncreasing";
    }
    else if (d1 == d2 && d2 == d3 && d3 == d4)
    {
        std::cout << "\nConstant";
    }
    else if (d1 > d2 && d2 > d3 && d3 > d4)
    {
        std::cout << "\nDecreasing";
    }
    else if (d1 <= d2 && d2 <= d3 && d3 <= d4)
    {
        std::cout << "\nNon-decreasing";
    }
    else if (d1 >= d2 && d2 >= d3 && d3 >= d4)
    {
        std::cout << "\nNon-increasing";
    }
    else
    {
        std::cout << "\nNo";
    }
}

void program11()
{
    int a, b, c, x, y;
    std::cout << "Enter height, width, length: ";
    std::cin >> a >> b >> c;
    if (std::cin.fail())
    {
        std::cout << "\nInput error.";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    std::cout << "Enter values of ur hole in the wall: ";
    std::cin >> x >> y;
    if (std::cin.fail())
    {
        std::cout << "\nInput error.";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (a <= 0 || b <= 0 || c <= 0 || x <= 0 || y <= 0)
    {
        std::cout << "Values should be positive";
        return;
    }
    if (b < x && a < y || c < x && b < y || a < x && c < y || b < y && a < x || c < y && b < x || a < y && c < x)
    {
        std::cout << "Yes";
    }
    else
    {
        std::cout << "No";
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
    //   program6();
    //   program7();
    //   program8();
    //   program9();
    //   program10();
    //   program11();

    std::cout << "\nOne more? (1 - yes, 0 - no): ";
    std::cin >> answer;

    if (answer)
    {
        main();
    }
    return 0;
}
