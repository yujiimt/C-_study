int main()
{
    std::vector<int>v = {1,2,3,4,5};
    
    //3を指すイテレーター
    auto pos = std::find(std::begin(v), std::end(v), 0);

    if (pos != std::end(v))
    {
        std::cout << "Found."s ;
    }
    else
    {
        std::cout << "Not founds."s;
    }
}

// find を実装

auto find = [](auto first, auto last, auto const&value)
{
    for(auto iter = first; iter != last; ++iter)
    {
        //値を発見したらそのイテレーターを返す
        if(*iter == value)
            return iter ;
    }
    //値が見つからなければ最後のイテレーターを返す
    return last; 
};

auto pred = [](auto const & value) -> bool
{
    return true;
};