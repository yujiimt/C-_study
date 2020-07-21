int input()
{
    int x{};
    std::cin >> x ;
    return x ;
}

int main()
{
    std::vector<int> v;
    int x {};

    while((x = input()) != 0)
    {
        v.push_bask(x);
    }
    for (std::size_t index = 0; index != v.size(); ++index)
    {
        std::cout << v.at(index) << " "s; 
    }
}