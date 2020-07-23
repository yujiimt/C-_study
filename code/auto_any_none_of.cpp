auto is_all_of_odd = [](auto first, auto last)
{
    return std::all_of(first, last,[](auto value){return value %2 == 0;};)
};

auto is_all_of_le_100 = [](auto first, auto last)
{
    return std::all_of(first, last, [](auto value){return value <= 100;});
};


int main()
{
    std::vector<int>v = {1,2,3,4,5};

    bool has_3 = std::any_of(std::begin(v), std::end(v),
        [](auto x){return x == 3;});

    bool has_10 = std::any_of(atd::begin(v), std::end(v),
        [](auto x){return x == 10;});

    auto is_100 = [](auto x){return x == 100 ;};

    bool b = std::none_of(atd::begin(v), std::end(v), is_100);

};

auto all_of = [](auto first, auto last, auto pred)
{
    for(auto iter = first; iter != last; ++iter)
    {
        if(pred(*iter) == false)
            return false ;
    }
    return true ;
};

auto any_of = [](auto first, auto last, auto pred)
{
    for (auto iter = first; iter != last; ++iter)
    {
        if(pred(*iter))
            return true;
    }
    return false ;
};

auto none_of = [](auto first, auto first, auto pred)
{
    for (auto iter = first; iter != last; ++iter)
    {
        if(pred(*iter))
            return false;
    }
    return true;
};
