#include <iostream>
#include <limits>
#include <cmath>
#include <time.h>
#include <string>

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
    if ((std::cin.good() && INT_MAX - x > y))
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
    if ((a >= 10 && a < 100 && a % 2 == 0) || (a <= -10 && a > -100 && a % 2 == 0))
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
    int a, a1, a2, a3, a4, b;
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
    int num, a, b, c;
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
    int d1, d2, d3, num;
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
    d3 = num / 10 % 10;
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

void program12()
{
    int a, b, c;
    std::cout << "\nEnter sides of triangle: ";
    std::cin >> a >> b >> c;
    if (std::cin.fail())
    {
        std::cout << "\nInput error.";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (a <= 0 || b <= 0 || c <= 0)
    {
        std::cout << "Not natural numbers.";
        return;
    }
    if (a + b <= c || b + c <= a || a + c <= b)
    {
        std::cout << "\nSorry, you can't build triangle with these sides.";
        return;
    }
    else
    {
        std::cout << "\nYes";
    }
    if (a == b && a == c)
    {
        std::cout << "\nYour triangle is equilateral.";
    }
    else
    {
        if (a != b && b != c && c != a)
        {
            std::cout << "\nYour triangle is versatile";
        }
        else
        {
            std::cout << "\nYour triangle is isosceles.";
        }
    }
    if (a * a + b * b == c * c || b * b + c * c == a * a || a * a + c * c == b * b)
    {
        std::cout << "\nYour triangle is also rectangular.";
    }
}

void program13()
{
    int a, b, c;
    double x1, x2, d;
    std::cout << "\nLet's solve the equation f(x) = ax^2 + bx + c = 0";
    std::cout << "\nEnter a, b and c.";
    std::cin >> a >> b >> c;
    if (std::cin.fail())
    {
        std::cout << "\nInput error.";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (a == 0)
    {
        std::cout << "Please enter valid numbers";
        return;
    }
    d = b * b - 4 * a * c;
    std::cout << "d = " << d;
    if (d >= 0)
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        std::cout << "\nx1 = " << x1;
        std::cout << "\nx2 = " << x2;
        std::cout << "\nf(" << x1 << ") = " << a << "*" << x1 << "*" << x1 << "+" << b << "*" << x1 << "+" << c << " = " << (a * (x1 * x1)) + (b * x1) + c;
        std::cout << "\nf(" << x2 << ") = " << a << "*" << x2 << "*" << x2 << "+" << b << "*" << x2 << "+" << c << " = " << (a * (x2 * x2)) + (b * x2) + c;
    }
    else
    {
        std::cout << "\nThere's no real roots.";
    }
}

void program14() {
    int a;
    std::cout << "Checking if entered year is a leap year from range [1600;2100]. Enter your number: ";
    std::cin >> a;
    if (std::cin.fail()) {
        std::cout << "\nInput error.";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (a < 1600 || a > 2100)
    {
        std::cout << "Please enter number from range [1600;2100].";
        return;
    }
    if (a % 100 == 0 && a % 400 != 0)
    {
        std::cout << "\n" << a << " is not a leap year.";
        return;
    }
    else if (a % 4 == 0)
    {
        std::cout << "\n" << a << " is a leap year.";
    }
    else
    {
        std::cout << "\n" << a << " is not a leap year.";
    }
}
void program15()
{
    int a, c, d;
    double b;
    std::cout << "Converting inches to metric system, enter value of inches to convert: ";
    std::cin >> a;
    if (std::cin.fail()) {
        std::cout << "\nInput error.";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (a <= 0)
    {
        std::cout << "Amount of inches should be natural number.";
        return;
    }
    b = a * 25.4;
    c = b / 10;
    d = c / 100;
    b = b - c * 10;
    c = c - d * 100;
    std::cout << "\n" << a << " inch(es) = " << d << "m " << c << "cm " << b << "mm";
}

void program16()
{
    std::cout << "Enter current hours, minutes and seconds: ";
    int h, m, s;
    std::cin >> h >> m >> s;
    std::cout << "\nEnter amount of time that should pass (hours, minutes, seconds): ";
    int x, y, z;
    std::cin >> x >> y >> z;
    if (std::cin.fail()) {
        std::cout << "\nInput error.";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
        return;
    } // Нужно ли делать две проверки на первый ввод и второй?
    if (h <= 0 || m <= 0 || s <= 0 || x <= 0 || y <= 0 || z <= 0)
    {
        std::cout << "Please, enter valid numbers.";
        return;
    }
    else if (h > 24 || m > 60 || s > 60)
    {
        std::cout << "Please, enter valid numbers.";
        return;
    }
    int s1, m1, h1, d;
    s1 = (s + z) % 60;
    m1 = ((s + z) / 60 + y + m) % 60;
    h1 = (h + (m + y) / 60 + x) % 24;
    d = (h + (m + y) / 60 + x) / 24;
    std::cout << "\nAfter " << d << " day(s) it's currently: " << h1 << " hour(s), " << m1 << " minute(s), " << s1 << " second(s).";
}

void program17()
{
    std::cout << "Enter start time and end time.";
    int h, m, s, h1, m1, s1;
    std::cin >> h >> m >> s >> h1 >> m1 >> s1;
    if (std::cin.fail()) {
        std::cout << "\nInput error.";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (h <= 0 || m <= 0 || s <= 0 || h1 <= 0 || m1 <= 0 || s1 <= 0)
    {
        std::cout << "Please, enter valid numbers.";
        return;
    }
    else if (h > 24 || m > 60 || s > 60 || h1 > 24 || m1 > 60 || s1 > 60)
    {
        std::cout << "Please, enter valid numbers.";
        return;
    }
    int temp1, temp2, temp3;
    temp1 = h * 3600 + m * 60 + s;
    temp2 = h1 * 3600 + m1 * 60 + s1;
    if (temp2 > temp1)
    {
        temp3 = temp2 - temp1;
        h = temp3 / 3600;
        m = (temp3 % 3600) / 60;
        s = (temp3 % 3600) % 60;
        std::cout << "It's been " << h << " hour(s) " << m << " minute(s) " << s << " second(s)";
    }
    else if (temp2 < temp1)
    {
        temp3 = 86400 - (temp1 - temp2);
        h = temp3 / 3600;
        m = temp3 % 3600 / 60;
        s = temp3 % 3600 % 60;
        std::cout << "It's been " << h << " hour(s) " << m << " minute(s) " << s << " second(s)";
    }
    else
    {
        std::cout << "\nOne full day has passed.";
    }
}

void program18()
{
    std::cout << "Enter your measures from 1 to 5 (1 - km, 2 - m, 3 - dm, 4 - cm, 5 - mm): ";
    int x;
    std::cin >> x;
    std::cout << "\nEnter a value of ur measure: ";
    int y;
    std::cin >> y;
    if (y < 0)
    {
        std::cout << "\nValue should be positive (or equal to 0)";
        return;
    }
    double a;
    if (x == 1)
    {
        a = y * 1000;
        std::cout << a << " metr(es).";
    }
    else if (x == 2)
    {
        a = y * 1;
        std::cout << a << " metr(es).";
    }
    else if (x == 3)
    {
        a = y * 0.1;
        std::cout << a << " metr(es).";
    }
    else if (x == 4)
    {
        a = y * 0.01;
        std::cout << a << " metr(es).";
    }
    else if (x == 5)
    {
        a = y * 0.001;
        std::cout << a << " metr(es).";
    }
    else
    {
        std::cout << "Input error.";
        return;
    }
}

void program20()
{
    std::cout << "Enter two numbers: ";
    int a, b;
    double res;
    std::cin >> a >> b;
    std::cout << "Enter operation to proceed (+,-,/,*): ";
    char c;
    std::cin >> c;
    if (c == '+')
    {
        res = a + b;
        std::cout << a << " + " << b << " = " << res;
    }
    else if (c == '-')
    {
        res = a - b;
        std::cout << a << " - " << b << " = " << res;
    }
    else if (c == '*')
    {
        res = a * b;
        std::cout << a << " * " << b << " = " << res;
    }
    else if (c == '/')
    {
        res = double(a) / b;
        std::cout << a << " / " << b << " = " << res;
    }
    else
    {
        std::cout << "Input error.";
        return;
    }
}

void program21()
{
    std::cout << "Enter your number: ";
    int a;
    int counter = 0;
    std::cin >> a;
    a = abs(a);
    while (a > 0)
    {
        counter++;
        a = a / 10;
    }
    std::cout << "Amount of digits in your number = " << counter;
}

void program22()
{
    std::cout << "Enter starting fund = ";
    int k;
    std::cin >> k;
    std::cout << "Enter monthly income in percentage: ";
    int p;
    std::cin >> p;
    std::cout << "Enter amount of money that you need: ";
    float s;
    std::cin >> s;
    if (k < 0 || p < 0 || s < 0 || s < k)
    {
        std::cout << "Enter valid numbers.";
        return;
    }
    int m = 0;
    while (k < s)
    {
        k = k + k * ((double)p / 100);
        m++;
        std::cout << "\nSum in " << m << " month = " << k;
    }
    std::cout << "\nIn " << m << " month(s) you'll reach your goal.";
}

void program23()
{
    int prev = 0, curr, counter = 0;
    do
    {
        std::cout << "Entering sequence of numbers, if you want to end enter 0: ";
        std::cin >> curr;
        if (prev * curr < 0)
        {
            counter++;
        }
        prev = curr;
    } 
    while (curr != 0);
    std::cout << "You changed znak " << counter << " times";
}

void program24()
{
    srand((int)time(NULL));
    int i;
    double s1 = 0, s2 = 0, s3 = 0;
    for (i = 0; i < 10; i++)
    {
        std::cout << rand() << " ";
        s1 = s1 + rand();
    }
    s1 = s1 / 10.0;
    std::cout << "\nAvg in first seq = " << s1;
    std::cout << "\n";
    for (i = 0; i < 10; i++)
    {
        std::cout << rand() << " ";
        s2 = s2 + rand();
    }
    s2 = s2 / 10.0;
    std::cout << "\nAvg in second seq = " << s2;
    std::cout << "\n";
    for (i = 0; i < 10; i++)
    {
        std::cout << rand() << " ";
        s3 = s3 + rand();
    }
    s3 = s3 / 10.0;
    std::cout << "\nAvg in third seq = " << s3;
}

void program25()
{
    std::cout << "Enter your number: ";
    int n;
    std::cin >> n;
    if (n <= 0)
    {
        std::cout << "Please enter valid number.";
        return;
    }
    for (int i = 100; i <= 999 ; i++)
    {
        int a, b, c;
        a = i / 100;
        b = i / 10 % 10;
        c = i % 10;
        if (a + b + c < n)
        {
            std::cout << "\n" << i;
        }
    }
    for (int i = -999; i <= -100; i++)
    {
        int a, b, c;
        a = abs(i) / 100;
        b = abs(i) / 10 % 10;
        c = abs(i) % 10;
        if (a + b + c < n)
        {
            std::cout << "\n" << i;
        }
    }
}

void program26()
{
    for (int i = 100; i <= 999; i++)
    {
        int a, b, c;
        a = i / 100;
        b = i / 10 % 10;
        c = i % 10;
        if (a == b && a == c)
        {
            continue;
        }
        else
        {
            std::cout << "\n" << i;
        }
    }
}

void program27()
{
    std::cout << "Enter chislitel' and znamenatel': ";
    int a, b;
    std::cin >> a >> b;
    if (a < 0 || b < 0)
    {
        std::cout << "Not natural numbers.";
        return;
    }
    int min = 0;
    if (a < b)
    {
        min = a;
    }
    else
    {
        min = b;
    }
    for (int i = min; i > 0; i--)
    {
        if (a == b)
        {
            std::cout << a << "/" << b << "=" << 1;
            break;
        }
        else if (a % i == 0 && b % i == 0)
        {
            std::cout << a << "/" << b << "=" << a / i << "/" << b / i;
            break;
        }
    }
}

void program28()
{
    std::cout << "Enter natural number: ";
    int a, x;
    std::cin >> a;
    if (a < 0)
    {
        std::cout << "Enter natural number.";
        return;
    }
    for (int i = 0; i <= 9; i++)
    {
        bool flag = true;
        x = a;
        while (x != 0)
        {
            if (x % 10 == i)
            {
                flag = false;
                break;
            }
            x = x / 10;
        }
        if (flag == true)
        {
            std::cout << "\n" << i;
        }
    }
}

void program29()
{
    for (int i = 0; i <= 7; i++)
    {
        for (int j = 0; j <= 7; j++)
        {
            if ((i + j) % 2 == 0)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
}

void program30()
{
    std::cout << "Enter your number: ";
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    std::cout << "\n"; // Для разделения задач между собой
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
    std::cout << "\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i >= j)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
    std::cout << "\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i <= j)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
    std::cout << "\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > 0; j--)
        {
            if (i + 1 <= j)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
    std::cout << "\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > 0; j--)
        {
            if (i + 1 >= j)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
    std::cout << "\n";
    for (int i = 0; i < 2*n - 1; i++)
    {
        for (int j = 0; j < 2*n - 1; j++)
        {
            if (i + j < n - 1 || i + j >= 3 * n - 2 || j > i + n - 1 || i > j + n - 1)
            {
                std::cout << " ";
            }
            else
            {
                std::cout << "*";
            }
        }
        std::cout << "\n";
    }
}

void program31()
{
    int a, a1, b, c, n;
    std::cout << "Enter start hours: ";
    std::cin >> a;
    std::cout << "Enter start minutes: ";
    std::cin >> a1;
    std::cout << "Enter time of one lecture: ";
    std::cin >> b;
    std::cout << "Enter break time: ";
    std::cin >> c;
    std::cout << "Enter amount of lessons: ";
    std::cin >> n;
    if (a < 0 || a1 < 0 || b < 0 || c < 0 || n < 0)
    {
        std::cout << "Input error.";
        return;
    }
    for (int i = 0; i < n; i++)
    {
        int r = (a * 60 + a1) + (b * i) + (c * i);
        int s1, s2, em, eh;
        s1 = r;
        s2 = s1 + b;
        eh = s2 / 60;
        em = s2 % 60;
        s1 = r / 60;
        s2 = r % 60;
        if (em < 10)
        {
            std::cout << i + 1 << "st lecture: " << s1 << ':' << s2 << " - " << eh << ":0" << em << '\n';
        }
        else if (s2 < 10)
        {
            std::cout << i + 1 << "st lecture: " << s1 << ":0" << s2 << " - " << eh << ':' << em << '\n';
        }
        else
        {
            std::cout << i + 1 << "st lecture: " << s1 << ':' << s2 << " - " << eh << ':' << em << '\n';
        }
    }
}

void program32()
{
    std::cout << "Enter your number: ";
    int n;
    std::cin >> n;
    if (n <= 0)
    {
        std::cout << "Number should be natural.";
        return;
    }
    for (int i = 2; i < n; i++)
    {
        bool flag1 = true;
        if (i != 2)
        {
            for (int j = i - 1; j >= 2; j--)
            {
                if (i % j == 0)
                {
                    flag1 = false;
                    break;
                }
            }
            if (flag1 == false)
            {
                continue;
            }
        }
        if (flag1)
        {
            std::cout << i << '\n';
        }
    }
}

void program33()
{
    int n;
    double x;
    double s = 0;
    std::cout << "Enter N: ";
    std::cin >> n;
    if (n <= 0)
    {
        std::cout << "N should be natural.";
        return;
    }
    std::cout << "Enter X: ";
    std::cin >> x;
    for (int i = 1; i < n + 1; i++)
    {
        long f = 1;
        for (int j = 1; j <= 2*i - 1; j++)
        {
            f *= j;
        }
        if (i % 2 != 0)
        {
            s += pow(x, (2 * n - 1)) / f;
        }
        else
        {
            s -= pow(x, (2 * n - 1)) / f;
        }
        std::cout << "s = " << s << '\n';
    }
}

void program34()
{
    double a, b, x, y, n;
    std::cout << "Enter amount of numbers in Fibonacchi sequence: ";
    std::cin >> n;;
    if (n <= 0)
    {
        std::cout << "Amount should be natural.";
    }
    a = 1;
    b = 1;
    if (n == 2)
    {
        std::cout << a << '\n';
        std::cout << b;
    }
    else if (n == 1)
    {
        std::cout << a;
    }
    std::cout << a << '\n';
    std::cout << b << '\n';
    while (n != 2)
    {
        x = a + b;
        std::cout << x << '\n';
        b = x - b;
        a = x;
        n--;
    }
}

void program35()
{
    int n = rand() % 1000 + 1;
    bool flag = false;
    std::cout << "Try guessing a random number between 1 and a 1000! " << '\n';
    for (int i = 0; i < 10; i++)
    {
        int a;
        std::cin >> a;
        if (a == n)
        {
            std::cout << "Congratulations, you guessed the number correct! The number was: " << n << '\n';
            flag = true;
            break;
        }
        if (a != n)
        {
            if (a < n)
            {
                std::cout << "You didn't guessed the number, it's higher than the one you entered. You have " << 10 - (i + 1) << " tries left!" << '\n';
            }
            if (a > n)
            {
                std::cout << "You didn't guessed the number, it's lower than the one you entered. You have " << 10 - (i + 1) << " tries left!" << '\n';
            }
        }
    }
    if (flag == false)
    {
        std::cout << "Oops, you ran out of tries! Wanna try again? :)";
    }
}

void program36()
{
    srand((int)time(NULL));
    int counter = 0;
    std::cout << "Try to solve 10 equations from multiplication table!" << '\n';
    clock_t start, end;
    start = clock();
    for (int i = 0; i < 10; i++)
    {
        int n = rand() % 10 + 1;
        int r = rand() % 10 + 1;
        std::cout << n << '*' << r << " = ?" << '\n';
        int a;
        std::cin >> a;
        if (a == n * r)
        {
            counter++;
        }
    }
    if (counter == 10)
    {
        std::cout << "Perfect!" << '\n';
    }
    else if (counter == 9)
    {
        std::cout << "Good!" << '\n';
    }
    else if (counter > 7)
    {
        std::cout << "Fine!" << '\n';
    }
    else
    {
        std::cout << "Failed." << '\n';
    }
    end = clock();
    double dblTime = ((double)(end - start)) / CLOCKS_PER_SEC;
    std::cout << "Amount of correct equations: " << counter << '\n';
    std::cout << "Time taken: " << dblTime;
}

void program37()
{
    int a;
    std::cout << "Convert arabic number to roman, enter your number: ";
    std::cin >> a;
    if (a >= 3999 || a <= 0)
    {
        std::cout << "Number should be in range of [1, 3999].";
        return;
    }
    std::string ans;
    std::string M[] = { "","M","MM","MMM" };
    std::string C[] = { "","C","CC","CCC","CD","D","DC","DCC","DCCC","CM" };
    std::string X[] = { "","X","XX","XXX","XL","L","LX","LXX","LXXX","XC" };
    std::string I[] = { "","I","II","III","IV","V","VI","VII","VIII","IX" };
    ans = M[a / 1000] + C[(a % 1000) / 100] + X[(a % 100) / 10] + I[(a % 10)];
    std::cout << ans;
}

void program38()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            if (i * j < 10)
            {
                std::cout << " " << i * j << "  ";
            }
            else
            {
                std::cout << i * j << "  ";
            }
        }
        std::cout << "\n";
    }
}

void program39()
{
    double k;
    std::cout << "Enter your number: ";
    std::cin >> k;
    std::cout << "Miles           Kilometres" << "\n";
    for (double i = 0.0001; i <= k + 0.0001; i += 0.0001)
    {
        float a, b;
        a = i;
        b = a / 0.6024;
        if (fmod(a, 1) == 0)
        {
            std::cout << b << "                  " << a << "\n";
        }
        else if (fmod(b, 1) == 0)
        {
            std::cout << b << "                  " << a << "\n";
        }
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
    //   program12();
    //   program13();
    //   program14();
    //   program15();
    //   program16();
    //   program17();
    //   program18();
    //   program20();
    //   program21();
    //   program22();
    //   program23();
    //   program24();
    //   program25();
    //   program26();
    //   program27();
    //   program28();
    //   program29();
    //   program30();
    //   program31();
    //   program32();
    //   program33();
    //   program34();
    //   program35();
    //   program36();
    //   program37();
    //   program38();
    //   program39();
    //   program40();

    std::cout << "\nOne more? (1 - yes, 0 - no): ";
    std::cin >> answer;
    if (std::cin.fail()) {
        std::cout << "\nInput error.";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return 0;
    }

    if (answer)
    {
        main();
    }
    return 0;
}
