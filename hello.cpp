int main()
{
 auto fu = []()
 {
     std::cout << "f is called .\n";
     return 0; // ここで処理が戻る
     std::cout << "f returned zero .\n";
 };

 auto result = fu();

}