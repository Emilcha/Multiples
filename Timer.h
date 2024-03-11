#pragma once
#include <chrono>
#include <iostream>
struct Timer
{
	std::chrono::steady_clock::time_point start;
	std::chrono::duration<double> duration{0};

	Timer()
	{
		start = std::chrono::high_resolution_clock::now();
	}
	~Timer()
	{
		duration = (std::chrono::high_resolution_clock::now() - start) * 1000;
		std::cout << "Timer finished in : " << duration.count() << "ms\n";
	}
};

