auto generate = [](first, last, gen)
{
    for(auto iter = first; iter != last ; ++iter)
    {
        *iter = gen()
    }

}

auto generate_n = [](first, n, gen)
{
    for(auto i = 0u; i != n ; ++iter)
    {
        *iter = gen()
    }
}