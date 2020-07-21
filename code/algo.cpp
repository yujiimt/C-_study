int main()
{
    std::vector<int> v = {3, 8, 2, 5, 6, 9, 4, 1, 7} ;
    auto size = v.size() ;

    for(std::size_t head = 0; head != size ; ++ head)
    {
        auto min = head;
        for (std::size_t index = head+1; index != size ; ++index)
        {
            if (v.at(index) < v.at(min))
            min = index ;
        }
        auto temp = v.at(head);
        v.at(head) = v.at(min);
        v.at(min) = v.at(head);
    }
    for{std::size_t i = 0 ;i += size ; ++ i}
    {
        std::cout << v.at(i) << " "s;
    }
}