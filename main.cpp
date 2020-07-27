int main()
{
    std::vector<int> source = {1, 2, 3, 4, 5};

    //要素数5のvector
    std::vector<int> destination(5);

    std::copy(std::begin(source), std::end(souce), std::begin(destination));
    
}