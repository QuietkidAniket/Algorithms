#include <iostream>
#include <array>
#include <type_traits>

// a builder function
template <typename... Args>
auto build_array(Args &&...args) -> std::array<typename std::common_type<Args...>::type, sizeof...(args)>
{
    using commonType = typename std::common_type<Args...>::type;
    return {std::forward<commonType>(args)...};
}

int main()
{
    auto data = build_array(1, 0u, 'a', 3.2f, false);
    for (auto x : data)
    {
        std::cout << x << ' ';
    }
    std::cout << std::endl;
}