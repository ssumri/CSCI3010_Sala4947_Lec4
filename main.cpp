#include "functions_to_implement.cpp"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nus = {2, 3, 5, 6};
    cout << Product(nus) << endl;

    cout << Sum(nus) << endl;

    vector<int> multies = Multiples(7, 8);
    for (int i = 0; i < multies.size(); i++)
    {
        cout << multies[i] << endl;
    }

    // vector<string> splitted = Split("Hello Earth World", " ");
    // for (int i = 0; i < splitted.size(); i++)
    // {
    //     cout << splitted[i] << endl;
    // }
    // std::cout << Factorial (5) <<std::endl;
    // std::vector<int> v{1,2,3};
    // std::vector<int> res = AddN(v, 5);
    // for(int i=0;i<res.size();i++){
    // 	std::cout<<res[i]<<" ";
    // }
    return 0;
}