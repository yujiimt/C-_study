int main()
{
    std::vector<int> v = {1};

    auto i = std::begin(v);

    //参照する要素を値として扱う
    std::cout << *i ;
    //参照する要素に値を代入する
    *i = 2;
}