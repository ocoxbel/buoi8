#include <iostream>
using namespace std;

int main()
{
    int N;
    cout<<"moi ban nhap: ";
    cin >> N;

    int i = 1;

    while (i*i <= N)
    {
        cout << i * i << " ";
        i++;
    }

    return 0;
}