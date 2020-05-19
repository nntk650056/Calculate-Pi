// Pi.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand((int)time(0));  // 产生随机种子  把0换成NULL也行
    long double x, y,z,pi;
    int k = 0;
    for (int i = 0; i < 10000000; i++)
    {
        x = rand() / double(RAND_MAX);
        y = rand() / double(RAND_MAX);
        z = x * x + y * y;
        //cout << i<<" "<< k << '\n';
        if (z <= 1)
        {
            k++;
            pi = k / double(i)*4;
            if (fabs(pi - 3.1415926) < 0.0000001)
            {
                cout << "pi=" << pi << "; i="<< i<<'\n';
                break;
            }
        }
        
     
    }
    std::cout << "The run time is: " << (double)clock() / CLOCKS_PER_SEC << "s" << std::endl;
    return 0;
}
// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
