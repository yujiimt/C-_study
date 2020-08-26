auto replace = [](auto first, auto last, auto old_value, auto new_value)
{
    for(auto iter=first; first != last ; ++iter)
    {
        if(*iter == old_value)
            *iter = new_value;
    }
}