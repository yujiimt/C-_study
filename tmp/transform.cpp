int main()
{
    std::vector<int> a = {1, 2, 3, 4, 5};
    std::vector<int> b(5);

    std::transform(std::begin(a), std::end(a), std::begin(b),
    [](auto x){
        return 2*x;
        });

    std::vector<int> c(5);
    std::transform(std::begin(a), std::end(a), std::begin(c),
    [](auto x){
        return x%3;
        });

    std::vector<int> d(5);
    std::transform(std::begin(a), std::end(a), std::begin(d),
    [](auto x){
        return x < 3;
    });
}