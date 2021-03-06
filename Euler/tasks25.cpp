﻿#include "tasks25.h"

size_t fibonachi_even()
	{
	/*
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:
1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms
*/
	size_t rez = 1;
	size_t sum = 0;
	size_t prev = 0;
	int cnt = 0;
	while (rez<4000000)
		{
		rez = rez + prev;
		prev = rez - prev;
		++cnt;
		std::cout <<"cnt= " << cnt;
		std::cout << '\t' <<"prev= " << prev << std::endl;
		if(prev%2 == 0)
			{
			sum = sum + prev;
			std::cout << "sum = " << sum << std::endl;
			}
		}
	rez = prev;
	return rez;
	}

void factor()
{
/*
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
*/
	size_t num = 600851475143;
	primul (num);
}

size_t primul(size_t num)
	{
	size_t mul = 2;
	while(num%mul!=0)
		{
		++mul;
		}
	num=num/mul;
	std::cout << "num= " << num << ";\nmul= " << mul << std::endl;
	if (num != 1)
		{
		primul (num);
		}
	return num;
	}

