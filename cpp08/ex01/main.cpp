#include "Span.hpp"

int main()
{
    // FULL SPAN
    Span sp_full = Span(2);

    sp_full.addNumber(5);
    sp_full.addNumber(8);
    std::cerr << "[+] ADD when is full [+]"  << std::endl;
    try
    {
        sp_full.addNumber(9);     
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error : " << e.what() <<  std::endl;
    }
    
    Span sp_short = Span(5);
    
    sp_short.addNumber(5);
    sp_short.addNumber(90);
    sp_short.addNumber(17);
    sp_short.addNumber(-8925);
    sp_short.addNumber(11);
	std::cerr << "[+] Shortest diference [+]"  << std::endl;
    std::cout << sp_short.shortestSpan() << std::endl;

    Span sp_short_hard = Span(2);
    sp_short_hard.addNumber(2147483647);
    sp_short_hard.addNumber(-2147483648);
	std::cerr << "[+] Shortest biggest posible [+]"  << std::endl;
    std::cout << sp_short_hard.shortestSpan() << std::endl;

    Span sp_empty = Span(80);
    std::cerr << "[+] Empty exception 0 numbers[+]"  << std::endl;
    try
    {
        std::cout << sp_empty.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error : " << e.what() <<  std::endl;
    }

    sp_empty.addNumber(5);
	std::cerr << "[+] Empty exception with one Number [+]"  << std::endl;
    try
    {
        std::cout << sp_empty.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error : " << e.what() <<  std::endl;
    }

    Span sp_long = Span(4);
    sp_long.addNumber(8);
    sp_long.addNumber(-3);
    sp_long.addNumber(80);
    sp_long.addNumber(-8);
	std::cerr << "[+] Long Span [+]"  << std::endl;
    try
    {
        std::cout << sp_long.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error : " << e.what() <<  std::endl;
    }

    Span sp_long_hard = Span(4);
    sp_long_hard.addNumber(2147483647);
    sp_long_hard.addNumber(-2147483648);
	std::cerr << "[+] Long Span Long numbers [+]"  << std::endl;
    try
    {
        std::cout << sp_long_hard.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error : " << e.what() <<  std::endl;
    }
	std::cerr << "[+] empty Error Long [+]"  << std::endl;
    try
    {
        std::cout << sp_empty.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error : " << e.what() <<  std::endl;
    }
	std::cerr << "[+] 10mil numbers plus [+]"  << std::endl;
    Span sp_long_long = Span(100000);
    std::vector<int> range(100000, 10);
    range[6666] = 40;
    sp_long_long.addNumber(range.begin(), range.end());

    try
    {
        std::cout << sp_long_long.longestSpan() << std::endl;
    }
        catch(const std::exception& e)
    {
        std::cerr << "Error : " << e.what() <<  std::endl;
    }

    try
    {
        std::cout << sp_long_long.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error : " << e.what() <<  std::endl;
    }

	return (0);
}