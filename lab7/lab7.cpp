#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL,"ru");
    /*cout << "Введите строку!\n";*/
    char str[] = "123 123 123 213 123";
    /*cin >> str;*/
    cout << "Введите k!\n";
    int k;
    int len = strlen(str);
    cin >> k;
    int spaceIndex = 0;
    if (str[k]==' ')
    {
        for (int i = 0; i < len; i++)
        {
            if (i == k) {
                cout << endl;
            }
            else {
                cout << str[i];
            }
        }
    }
    else
    {
        for (int i = k; i > 0; i--)
        {
            if (str[i] == ' ')
            {
                spaceIndex = i;
            }
        }
        for (int i = 0; i < spaceIndex; i++)
        {
            cout << str[i];
        }
        cout << endl;
        for (int i = spaceIndex; i < len; i++)
        {
            cout << str[i];
        }
    }
}

