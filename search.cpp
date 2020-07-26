int main()
{
    std::vector<int> v1 = {1,2,3, 4, 5, 6, 7, 8, 9};
    std::vector<int> v2 = {4, 5, 6};
    // true
    bool a = std::search(std::begin(v1), std::end(v1), std::begin(v2), std::end(v2));

    std::vector<int> v3 = {1, 3, 5};

    // false 
    bool b = std::search(std::begin(v1), std::end(v1), std::begin(v3), std::end(v3));
    }