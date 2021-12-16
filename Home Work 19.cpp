#include <iostream>

using namespace std;

void iPowNumRes(int iNum1, int iPowNum1)
{
    if (iPowNum1 == 0)
    {
        cout << "Result = " << 1 << endl;
    }
    else if (iPowNum1 == 1)
    {
        cout << "Result = " << iNum1 << endl;
    }

    else
    {
        int iRes = iNum1;

        for (int i = 0; i < iPowNum1 - 1; i++)
        {
            iRes *= iNum1;
        }
        cout << "Result = " << iRes << endl;
    }
}
int main()
{
    int iNum, iPowNum;
    cout << "Enter number : " << endl;
    cin >> iNum;
    cout << "Enter power : " << endl;
    cin >> iPowNum;
    iPowNumRes(iNum, iPowNum);
    system("pause");
    return 0;
} 