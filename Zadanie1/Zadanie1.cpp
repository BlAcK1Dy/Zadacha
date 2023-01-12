#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string Convert(string word)
{
    string new_word = "";
    transform(word.begin(), word.end(), word.begin(), ::tolower);
    for (int i = 0; i < word.length(); i++)
    {
        if (count(word.begin(), word.end(), word[i]) == 1)
        {
            new_word += '(';
        }
        else
        {
            new_word += ')';
        }
    }
    return new_word;
}

int main()
{
    string str;
    cout << "Enter word " << endl;
   
    cin >> str;

    cout << Convert(str) << endl;
    
    system("pause");
    return 0;
}

