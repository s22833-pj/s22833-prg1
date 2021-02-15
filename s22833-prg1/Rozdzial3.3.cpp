
#include <iostream>
#include <string>
#include <cstdlib>
#include <random>
#include <time.h>
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
auto printint(int value) -> void
{
    std::cout<<value<<"\n";
}
auto call_with_random_int() -> void
{
    auto fp = &printint;
    (*fp)(rand() % 100);
}
auto tester(bool test) -> bool
{
    return test;
}
auto all(bool a[], size_t n, bool (*fp)(bool)) -> bool
{
    bool result = true;
    for(auto i = 0; i < n; i++)
    {
        if(((*fp)(a[i]))==false)result=false;
    }
    return result;
}
auto any(bool a[], size_t n, bool (*fp)(bool)) -> bool
{
    bool result = false;
    for(auto i = 0; i < n; i++)
    {
        if(((*fp)(a[i]))==true)result=true;
    }
    return result;
}
auto main() -> int
{
    srand (time(NULL));
    //zadanie 3.2.0.1
    call_with_random_int();
    bool a[5] = {false, false, false, false, true};
    //zadanie 3.2.0.2
    std::cout<<all(a, 5, &tester)<<"\n";
    //zadanie 3.2.0.3
    std::cout<<any(a, 5, &tester)<<"\n";

     return 0;
}
