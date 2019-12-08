#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <cctype>
#include <string.h>
#define vector std::vector

vector<vector<int>> a{{0, 0, 1, 1, 1, 0, 0}, {0, 1, 1, 0, 1, 1, 0}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 1, 1, 1, 1, 1}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 1, 1}};
vector<vector<int>> b{{1, 1, 1, 1, 1, 1, 0}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 1, 1, 1, 1, 0}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 1, 1, 1, 1, 0}};
vector<vector<int>> c{{0, 1, 1, 1, 1, 1, 0}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 0, 0}, {1, 1, 0, 0, 0, 0, 0}, {1, 1, 0, 0, 0, 0, 0}, {1, 1, 0, 0, 0, 1, 1}, {0, 1, 1, 1, 1, 1, 0}};
vector<vector<int>> d{{1, 1, 1, 1, 1, 1, 0}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 1, 1, 1, 1, 0}};
vector<vector<int>> e{{1, 1, 1, 1, 1, 1, 1}, {1, 1, 0, 0, 0, 0, 0}, {1, 1, 0, 0, 0, 0, 0}, {1, 1, 1, 1, 0, 0, 0}, {1, 1, 0, 0, 0, 0, 0}, {1, 1, 0, 0, 0, 0, 0}, {1, 1, 1, 1, 1, 1, 1}};
vector<vector<int>> f{{1, 1, 1, 1, 1, 1, 1}, {1, 1, 0, 0, 0, 0, 0}, {1, 1, 0, 0, 0, 0, 0}, {1, 1, 1, 1, 1, 0, 0}, {1, 1, 0, 0, 0, 0, 0}, {1, 1, 0, 0, 0, 0, 0}, {1, 1, 0, 0, 0, 0, 0}};
vector<vector<int>> g{{0, 1, 1, 1, 1, 1, 0}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 0, 0}, {1, 1, 0, 0, 0, 0, 0}, {1, 1, 0, 0, 1, 1, 1}, {1, 1, 0, 0, 0, 1, 1}, {0, 1, 1, 1, 1, 1, 1}};
vector<vector<int>> h{{1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 1, 1, 1, 1, 1}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 1, 1}};
vector<vector<int>> i{{0, 0, 1, 1, 1, 0, 0}, {0, 0, 0, 1, 0, 0, 0}, {0, 0, 0, 1, 0, 0, 0}, {0, 0, 0, 1, 0, 0, 0}, {0, 0, 0, 1, 0, 0, 0}, {0, 0, 0, 1, 0, 0, 0}, {0, 0, 1, 1, 1, 0, 0}};
vector<vector<int>> j{{1, 1, 1, 1, 1, 1, 1}, {0, 0, 0, 0, 0, 1, 1}, {0, 0, 0, 0, 0, 1, 1}, {0, 0, 0, 0, 0, 1, 1}, {0, 0, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 1, 1}, {0, 1, 1, 1, 1, 1, 0}};
vector<vector<int>> k{{1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 1, 1, 0}, {1, 1, 0, 1, 1, 0, 0}, {1, 1, 1, 1, 1, 1, 0}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 1, 1}};
vector<vector<int>> l{{1, 1, 0, 0, 0, 0, 0}, {1, 1, 0, 0, 0, 0, 0}, {1, 1, 0, 0, 0, 0, 0}, {1, 1, 0, 0, 0, 0, 0}, {1, 1, 0, 0, 0, 0, 0}, {1, 1, 0, 0, 0, 0, 0}, {1, 1, 1, 1, 1, 1, 1}};
vector<vector<int>> m{{1, 1, 0, 0, 0, 1, 1}, {1, 1, 1, 0, 1, 1, 1}, {1, 1, 1, 1, 1, 1, 1}, {1, 1, 0, 1, 0, 1, 1}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 1, 1}};
vector<vector<int>> n{{1, 1, 1, 0, 0, 1, 1}, {1, 1, 1, 1, 0, 1, 1}, {1, 1, 0, 1, 1, 1, 1}, {1, 1, 0, 0, 1, 1, 1}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 1, 1}};
vector<vector<int>> o{{0, 1, 1, 1, 1, 1, 0}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 1, 1}, {0, 1, 1, 1, 1, 1, 0}};
vector<vector<int>> p{{1, 1, 1, 1, 1, 1, 0}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 1, 1, 1, 1, 0}, {1, 1, 0, 0, 0, 0, 0}, {1, 1, 0, 0, 0, 0, 0}};
vector<vector<int>> q{{0, 1, 1, 1, 1, 1, 0}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 1, 0, 1, 1}, {1, 1, 0, 0, 1, 1, 1}, {0, 1, 1, 1, 1, 1, 1}};
vector<vector<int>> r{{1, 1, 1, 1, 1, 1, 0}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 1, 1, 1, 1, 0}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 1, 1}};
vector<vector<int>> s{{0, 1, 1, 1, 1, 1, 0}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 0, 0}, {0, 1, 1, 1, 1, 1, 0}, {0, 0, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 1, 1}, {0, 1, 1, 1, 1, 1, 0}};
vector<vector<int>> t{{1, 1, 1, 1, 1, 1, 1}, {0, 0, 0, 1, 0, 0, 0}, {0, 0, 0, 1, 0, 0, 0}, {0, 0, 0, 1, 0, 0, 0}, {0, 0, 0, 1, 0, 0, 0}, {0, 0, 0, 1, 0, 0, 0}, {0, 0, 0, 1, 0, 0, 0}};
vector<vector<int>> u{{1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 1, 1}, {0, 1, 1, 1, 1, 1, 0}};
vector<vector<int>> v{{1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 1, 1}, {0, 1, 1, 0, 1, 1, 0}, {0, 0, 1, 1, 1, 0, 0}};
vector<vector<int>> w{{1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 1, 0, 1, 1}, {1, 1, 1, 1, 1, 1, 1}, {1, 1, 1, 0, 1, 1, 1}, {1, 1, 0, 0, 0, 1, 1}};
vector<vector<int>> x{{1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 1, 1}, {0, 1, 1, 0, 1, 1, 0}, {0, 0, 1, 1, 1, 0, 0}, {0, 1, 1, 0, 1, 1, 0}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 1, 1}};
vector<vector<int>> y{{1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 1, 1}, {1, 1, 0, 0, 0, 1, 1}, {0, 1, 1, 1, 1, 1, 1}, {0, 0, 0, 0, 0, 1, 1}, {0, 0, 0, 0, 0, 1, 1}, {0, 1, 1, 1, 1, 1, 1}};
vector<vector<int>> z{{1, 1, 1, 1, 1, 1, 1}, {0, 0, 0, 0, 1, 1, 0}, {0, 0, 0, 1, 1, 0, 0}, {0, 0, 1, 1, 0, 0, 0}, {0, 1, 1, 0, 0, 0, 0}, {1, 1, 0, 0, 0, 0, 0}, {1, 1, 1, 1, 1, 1, 1}};

std::map<char, vector<vector<int>>> CharDataMap;

void fillCharData()
{
    CharDataMap['a'] = a;
    CharDataMap['b'] = b;
    CharDataMap['c'] = c;
    CharDataMap['d'] = d;
    CharDataMap['e'] = e;
    CharDataMap['f'] = f;
    CharDataMap['g'] = g;
    CharDataMap['h'] = h;
    CharDataMap['i'] = i;
    CharDataMap['j'] = j;
    CharDataMap['k'] = k;
    CharDataMap['l'] = l;
    CharDataMap['m'] = m;
    CharDataMap['n'] = n;
    CharDataMap['o'] = o;
    CharDataMap['p'] = p;
    CharDataMap['q'] = q;
    CharDataMap['r'] = r;
    CharDataMap['s'] = s;
    CharDataMap['t'] = t;
    CharDataMap['u'] = u;
    CharDataMap['v'] = v;
    CharDataMap['w'] = w;
    CharDataMap['x'] = x;
    CharDataMap['y'] = y;
    CharDataMap['z'] = z;
}

void PRINTCHARACTER(const char character, const vector<int> charData)
{

    for (int i = 0; i < 7; i++)
    {
        if (charData[i] == 1)
        {
            std::cout << (char)std::toupper(character);
        }
        else
        {
            std::cout << " ";
        }
    }
}

void printCharacterLine(const std::string phrase, int numLine, int numChar)
{
    char character = phrase[numChar];
    if (character == ' ')
    {
        std::cout << "       ";
        return;
    }
    PRINTCHARACTER(character, CharDataMap[std::tolower(character)][numLine]);
}

void printPhrase(const std::string phrase)
{
    std::cout << std::endl
              << std::endl;
    // print each latter as 7 rows rows of mini latters
    for (int i = 0; i < 7; i++)
    {
        int length = phrase.length();
        // print each latters row
        for (int j = 0; j < length; j++)
        {
            printCharacterLine(phrase, i, j);
            std::cout << " ";
        }

        std::cout << "\n";
    }
}

int main()
{
    //fill data in map
    fillCharData();

    std::string input;
    std::cout << " Enter a String: ";
    std::cin >> input;
    // convert string to upper case
    std::transform(input.begin(), input.end(), input.begin(), ::toupper);
    // print latters
    printPhrase(input);

    return 0;
}