#include <iostream>
#include <string>
#include <cstdlib>
auto ask_user_for_integer(std::string const prompt) -> int
{
	if(not prompt.empty())
	{
		std::cout << "\n"<<prompt;
	}
	auto value = std::string{};
	std::getline(std::cin, value);
	return std::stoi(value);
}

auto main() -> int
{
    //zadanie 2.0.0.1
    int a, b, c;
    std::cout << "{a}, ...,  b";
    a = ask_user_for_integer("Enter value a: ");
	system("CLS");
	std::cout <<" "<<a<<", ..., {b}";
	b = ask_user_for_integer("Enter value b: ");
	system("CLS");
	for(int i =a; i < b; i++)
    {
        std::cout << i << ", ";
    }
    std::cout << b;
    std::cout << "\npress enter to continue to the next exercise...";
	getchar();
	system("CLS");
    //zadanie 2.0.0.2
    std::cout << "{a}, ...(%c=0),  b , c!=0";
    a = ask_user_for_integer("\nEnter value a: ");
	system("CLS");
	std::cout <<" "<<a<<", ...(%c=0), {b}, c!=0";
	b = ask_user_for_integer("\nEnter value b: ");
	system("CLS");
	std::cout <<" "<<a<<", ...(%c=0),  "<<b<<" , c!=0";
	c = ask_user_for_integer("\nEnter value c: ");
	system("CLS");
	if(c!=0)
    {
        for(int i =a; i <= b; i++)
        {
            if(!(i%c))std::cout << i << ", ";
        }
    }
    else
    {
        std::cout<<"c cannot be equal to 0";
    }
    std::cout << "\npress enter to continue to the next exercise...";
	getchar();
	system("CLS");
    //zadanie 2.0.0.3
    int s;
   std::cout << "{a}, a+ s ...a+ s *n,  b , s!=0";
    a = ask_user_for_integer("Enter value a: ");
	system("CLS");
	std::cout <<" "<<a<<", a+ s ...a+ s *n, {b}, s!=0";
	b = ask_user_for_integer("Enter value b: ");
	system("CLS");
	std::cout <<" "<<a<<", a+{s}...a+{s}*n,  "<<b<<" , s!=0";
	s = ask_user_for_integer("Enter value s: ");
	system("CLS");
	if(s!=0)
    {
        if((s<0&&a>b)||(s>0&&a<b))
        {
            for(int i =a; i <= b; i=i+s)
            {
                std::cout << i << ", ";
            }
        }
        else
        {
            std::cout << " addition of multiples of s will never result in exceeding b";
        }
    }
    else
    {
        std::cout<<"s cannot be equal to 0";
    }
    std::cout << "\npress enter to continue to the next exercise...";
	getchar();
	system("CLS");
	//zadanie 2.0.0.4
    int div=0;
    std::cout << "is a prime?";
    a = ask_user_for_integer("Enter value a: ");
	system("CLS");
	for(int i = a; i>0; i--)
    {
        if(a%i==0)div++;
    }
    if(div>2)std::cout<<"a isn't prime\n";
    else std::cout<<"a is prime\n";
    //zadanie 2.0.0.5
    int primes=0;
    std::cout << "sum of primes less than or equal to a";
    a = ask_user_for_integer("Enter value a: ");
	system("CLS");
	for(int i = 1; i<a; i++)
    {
        div=0;
        for(int ii = i; ii>0; ii--)
        {
            if(a%ii==0)div++;
        }
        if(div<3)primes+=i;
    }
	std::cout<<"sum of primes less than or equal to a: "<<primes;
    std::cout << "\npress enter to continue to the next exercise...";
	getchar();
	system("CLS");

    //zadanie 2.0.0.6
    a = ask_user_for_integer("Enter a:");
    std::cout<<"Enter values to test: (-1 to terminate)";
    while (std::cin >> b)
    {
        if(a>b)std::cout <<" "<<a<<" > "<<b<<"\n";
        else if(a<b)std::cout <<" "<<a<<" < "<<b<<"\n";
        else std::cout << " "<<a<<" = "<<b<<"\n";
        if(b==-1)break;
    }

    std::cout << "\npress enter to continue to the next exercise...";
	getchar();
	system("CLS");

	//zadanie 2.0.0.7
    int sum = 0;
    std::cout <<"0 ...%b a";
	a = ask_user_for_integer("Enter value a: ");
	system("CLS");
	std::cout <<"0 ...%b a";
	b = ask_user_for_integer("Enter value b: ");
    for(auto i = 1; i < a; i++)
    {
        if(!(i%b))sum+=i;
    }
    std::cout<<"sum of numbers divisible by "<<b<<" up to "<<a<<": "<< sum;
    std::cout << "\npress enter to continue to the next exercise...";
	getchar();
	system("CLS");

	//zadanie 2.0.0.8
    std::cout <<"a! = x";
    a = ask_user_for_integer("Enter value a: ");
    int factorial = 1;
    for(auto i = 1; i <= a; i++)
    {
        factorial *= i;
    }
    std::cout <<"a! = "<<factorial;
    std::cout << "\npress enter to continue to the next exercise...";
	getchar();
	system("CLS");

	//zadanie 2.0.0.9
	 std::cout <<"a! = x";
    a = ask_user_for_integer("Enter value a: ");
    factorial = 1;
    int i=1;
    while(i<=a)
    {
        factorial *= i;
        i++;
    }
    std::cout <<"a! = "<<factorial;
    std::cout << "\npress enter to continue to the next exercise...";
	getchar();
	system("CLS");

	//zadanie 2.0.0.10
    std::cout <<"a! = x";
    a = ask_user_for_integer("Enter value a: ");
    factorial = 1;
    i=1;
    do
    {
        factorial *= i;
        i++;
    }while(i<=a);
    std::cout <<"a! = "<<factorial;
    std::cout << "\npress enter to continue to the next exercise...";
	getchar();
	system("CLS");

	//zadanie 2.0.0.11
	a = ask_user_for_integer("Enter width of square: ");
	b = ask_user_for_integer("Enter height of square: ");

	for(int i = 0; i<b; i++)
    {
        for(int ii = 0; ii<a; ii++)
        {
            std::cout<<"*";
        }
        std::cout<<"\n";
    }
    std::cout << "\npress enter to continue to the next exercise...";
	getchar();
	system("CLS");

	//zadanie 2.0.0.12
	a = ask_user_for_integer("Enter height of triangle: ");

	for(int i = 0; i<=b; i++)
    {
        for(int ii = 0; ii<i; ii++)
        {
            std::cout<<"*";
        }
        std::cout<<"\n";
    }

    //zadanie 2.0.0.13
    std::cout << "\npress enter to continue to the next exercise...";
	getchar();
	system("CLS");

	a = ask_user_for_integer("Enter height of triangle: ");

	for(int i = b; i>=0; i--)
    {
        for(int ii = 0; ii<i; ii++)
        {
            std::cout<<"*";
        }
        std::cout<<"\n";
    }
    std::cout << "\npress enter to continue to the next exercise...";
	getchar();
	system("CLS");

	//zadanie 2.0.0.14
	a = ask_user_for_integer("Enter width of square: ");
	b = ask_user_for_integer("Enter height of square: ");

	if(a>=3&&b>=3)
    {
        for(int i = 0; i<a; i++)
        {
            std::cout<<"*";
        }
        std::cout<<"\n";
        for(int i = 0; i<b-2; i++)
        {
            std::cout<<"*";
            for(int ii = 0; ii<a-2; ii++)
            {
                std::cout<<" ";
            }
            std::cout<<"*\n";
        }
        for(int i = 0; i<a; i++)
        {
            std::cout<<"*";
        }
    }
     return 0;
}
