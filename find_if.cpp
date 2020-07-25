int main()
{
    std::vector<int> v = {1,3,5,7,9,11,13,14,15,16};

    //偶数ならばtrueを返す
    auto is_even = [](auto value)
    {
        return value % 2 == 0;
    };

    //奇数ならばtrueを返す
    auto is_odd = [](auto value)
    {
        return value % 2 == 1;
    };
    
    //最初の偶数の要素
    auto even = std::find_if(std::begin(v), std::end(v), is_even);
    //最初の奇数の要素
    auto odd = std::find_if(atd::begin(v), std::end(v), is_odd);

}

// find を実装

auto find_if = [](auto first, auto last, auto pred)
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