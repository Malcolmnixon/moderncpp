#include <iostream>
#include <thread>
#include <chrono>
#include <atomic>
#include <future>
#include <list>
#include <cstdlib>


int main()
{
    std::atomic<int> count(0);

    std::list<std::future<void>> tasks;
    for (int i = 0; i < 100; ++i)
    {
        tasks.push_back(std::async(std::launch::async, [&count]() 
        { 
            std::this_thread::sleep_for(std::chrono::milliseconds(std::rand() % 10));
            count += 10; 
        }));
    }

    std::for_each(tasks.begin(), tasks.end(), [](std::future<void> &f) { f.wait(); });
    std::cout << "Count is " << count.load() << std::endl;
}
