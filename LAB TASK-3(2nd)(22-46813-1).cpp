#include <iostream>
using namespace std;

void encode(string s, int j)
{
    int temp;
    for(int i = j; i < s.size(); i = i+j+1)
    {
        temp = s[i];
        s[i] = (char)(temp + j);
    }
    cout << "Converted String: " << s;
    cout << endl;
}

int main()
{
    int j;
    string s;
    cout<< "Enter a string: ";

    getline(cin,s);
    cout<< " Enter a  integer: ";
    cin >> j;

    cout << "Sample String: " << s<<endl;
    cout << "Sample Integer: " << j<<endl;
    encode(s, j);

}
