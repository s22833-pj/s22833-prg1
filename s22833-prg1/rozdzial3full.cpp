
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
auto output(int a[], int n) -> void
{
    std::cout<<a[0];
    for(int i = 1; i < n; i++)std::cout<<", "<<a[i];
    std::cout<<"\n";
}
auto init(int a[], int n) -> void
{
    for(int i = 0; i < n; i++)a[i]=0;
}
auto iota(int a[], int n, int start) -> void
{
    for(int i = 0; i < n; i++)a[i]=start+i;
}
auto asum(int a[], int n) -> int
{
    int sum=0;
    for(int i = 0; i < n; i++)sum+=a[i];
    return sum;
}
auto amin(int a[], int n) -> int
{
    int minimum=a[0];
    for(int i = 0; i < n; i++)if(a[i]<minimum)minimum=a[i];
    return minimum;
}
auto amax(int a[], int n) -> int
{
    int maximum=a[0];
    for(int i = 0; i < n; i++)if(a[i]>maximum)maximum=a[i];
    return maximum;
}
auto asearch(int a[], int n, int needle) -> int
{
    int result=-1;
    for(int i = 0; i < n; i++)if(a[i]==needle)result=i;
    return result;
}
auto aswap(int *a, int *b)  -> void
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

auto bubbleSortasc(int arr[], int n)  -> int
{
    int i, ii;
    for (i = 0; i < n-1; i++)
    for (ii = 0; ii < n-i-1; ii++)
        if (arr[ii] > arr[ii+1])
            aswap(&arr[ii], &arr[ii+1]);
}

auto bubbleSortdesc(int arr[], int n)  -> int
{
    int i, ii;
    for (i = 0; i < n-1; i++)
    for (ii = 0; ii < n-i-1; ii++)
        if (arr[ii] < arr[ii+1])
            aswap(&arr[ii], &arr[ii+1]);
}
auto apartition (int arr[], int low, int high)  -> int
{
    int needle = arr[high];
    int i = (low - 1);

    for (int ii = low; ii <= high - 1; ii++)
    {
        if (arr[ii] < needle)
        {
            i++;
            aswap(&arr[i], &arr[ii]);
        }
    }
    aswap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
auto quickSort(int arr[], int low, int high)  -> void
{
    if (low < high)
    {
        int part = apartition(arr, low, high);
        quickSort(arr, low, part - 1);
        quickSort(arr, part + 1, high);
    }
}

auto main() -> int
{
    //zadanie 3.1.0.1
    int a[10]= {42, 9, -1, 18, 59, 3, 101, 31, 72, 12}, b[10];
    init(b, 10);
    output(b, 10);

    //zadanie 3.1.0.2
    iota(b, 10, 0);
    output(b, 10);

    //zadanie 3.1.0.3
    std::cout<<"sum: "<<asum(a, 10)<<"\n";

    //zadanie 3.1.0.4
    std::cout<<"min: "<<amin(a, 10)<<"\n";

    //zadanie 3.1.0.5
    std::cout<<"max: "<<amax(a, 10)<<"\n";

    //zadanie 3.1.0.6
    std::cout<<"index of 101: "<<asearch(a, 10, 3)<<"\n";

    //zadanie 3.1.0.7
    bubbleSortasc(a, 10);
    output(a, 10);

    //zadanie 3.1.0.8
    int c[10] = {42, 9, -1, 18, 59, 3, 101, 31, 72, 12};
    bubbleSortdesc(c, 10);
    output(c, 10);

    //zadanie 3.1.0.9
    int d[10] = {42, 9, -1, 18, 59, 3, 101, 31, 72, 12};
    quickSort(d, 0, 9);
    output(d, 10);

     return 0;
}
