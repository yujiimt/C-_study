int main()
{
    //vector の変数をv
    std::vector<int> v = {8, 3, 7, 4, 2, 9, 3};
    //要素数をsizeとする
    std::size_t size = v.size();

    //変数mini0を代入する
    std::size_t min = 0;

    // size回のループを実行する
    //　変数iに0からsize-1までの整数を代入する
    for (std::size_t index = 1; index != size ; ++index)
    {
        if (v.at(index) < v.at(min))
        min = index;
    }
    std::cout << v.at(min);
}