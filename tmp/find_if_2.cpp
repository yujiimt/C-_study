int main()
{
    std::vector<int> v = {1,2,3,4,5};

     //引数が3の場合にtrueを返す関数
     auto is_3 = [](auto x){return x == 3;};

     //最初に関数がtrue を返す要素へのイテレーターを探すfind_if
     auto i = std::find_if(std::begin(v), std::end(v), is_3;);

     //最初に関数がtrue３と等しい要素へのイテレーターを返すfind
     auto j = std::find(std::begin(v), std::end(v), 3);

     //同じイテレーター
     bool b = (i == j);

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