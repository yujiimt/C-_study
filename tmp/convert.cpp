int convert(int n)
{
    // 引数が整数の場合
    if (n > 0)
        // そのまま関数solveに渡してreturn
        return solve(n) ;
    else //引数が負数の場合
        // 絶対値を関数soleveに渡して負数にしてreturn
        return - solve(-n) ;

}

// 入力
int input()
{
    std::cout << ">" ;
    int x{} ;
    std::cin >> x ;
    return x;
}

//出力
void output(int binary)
{
    std::cout << binary << "\n"s ;
}

int main()
{
    //入力、変換、出力のループ
    while(true)
    {
        auto decimal = input() ;
        auto binary = convert(decimal);
        output(binary) ;
    }
}
// 1,0 のみを使った１０進数から
// 2進数へ変換する関数
int solve (int n)
{
    //和
    int result = 0;
    // 桁がなくなれば終了
    while (n!= 0)
    {
        //現在の桁を計算して足す
        result += n%10*i;
        //次の桁に乗ずる値
        i*= 2 ;
        // 桁を1つ減らす
        n /= 10 ;
    }
    return result ;
}