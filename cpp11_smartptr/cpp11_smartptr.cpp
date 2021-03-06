#include <iostream>
#include <memory>

int main()
{
    auto unique = std::unique_ptr<int>(new int(42));
    std::cout << "unique = " << *unique << std::endl; 

    auto shared = std::shared_ptr<int>(std::move(unique));
    std::cout << "shared = " << *shared << std::endl;
    if (unique)
        std::cout << "unique = " << *unique << std::endl;
    else
        std::cout << "unique = released" << std::endl;

    auto weak = std::weak_ptr<int>(shared);
    {
        auto observed = weak.lock();
        if (observed)
            std::cout << "weak = " << *observed << std::endl;
        else
            std::cout << "weak = released" << std::endl;
    }

    shared.reset();
    {
        auto observed = weak.lock();
        if (observed)
            std::cout << "weak = " << *observed << std::endl;
        else
            std::cout << "weak = released" << std::endl;
    }
}
