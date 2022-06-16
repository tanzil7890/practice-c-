#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void onesCompliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number: " << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    // Using for loop to check each string as a binary number or not?
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrent binary format" << endl;
            exit(0);
        }
        /* else {
            cout<<"Correct binary format"<<endl;
        } */
    }
}

// To take out 1 compliment in binary number
void binary ::onesCompliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display(void)
{
    cout << "Displaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

// start writing your main code
int main()
{
    // OOP's - Classes and Object

    // nesting of member function
    binary b;
    b.read();
    b.chk_bin();
    b.onesCompliment();
    b.display();

    return 0;
}