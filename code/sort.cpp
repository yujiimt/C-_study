int main()
{
    std::vector<int> v = {8, 3, 7, 4, 2, 9, 3} ;
    std::size_t size = v.size();

    for (std::size_t head = 0; head != size ; ++head)
    {
        std::size_t min = head;

        for (std::size_t index = head +1 ; index != size ; ++index)
        {
            if(v.at(index) < v.at(min))
                min = index;
        }
        std::cout << v.at(min) << " "s;

        auto temp = v.at(head);
        v.at(head) = v.at(min);
        v.at(min) = temp;
    }
}