#include <iostream>
#include <string>
#include <string.h>
std::string input = "Hello World";
bool a[7][7] = { 0,0,1,1,1,0,0,0,1,1,0,1,1,0,1,1,0,0,0,1,1,1,1,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1,0,0,0,1,1 };
bool b[7][7] = { 1,1,1,1,1,1,0,1,1,0,0,0,1,1,1,1,1,1,1,1,0,1,1,0,0,0,1,1,1,1,0,0,0,1,1,1,1,0,0,0,1,1,1,1,1,1,1,1,0 };
bool c[7][7] = { 0,1,1,1,1,1,0,1,1,0,0,0,1,1,1,1,0,0,0,0,0,1,1,0,0,0,0,0,1,1,0,0,0,0,0,1,1,0,0,0,1,1,0,1,1,1,1,1,0 };
bool d[7][7] = { 1,1,1,1,1,1,0,1,1,0,0,0,1,1,1,1,0,0,0,1,1,1,1,0,0,0,1,1,1,1,0,0,0,1,1,1,1,0,0,0,1,1,1,1,1,1,1,1,0 };
bool e[7][7] = { 1,1,1,1,1,1,1,1,1,0,0,0,0,0,1,1,0,0,0,0,0,1,1,1,1,0,0,0,1,1,0,0,0,0,0,1,1,0,0,0,0,0,1,1,1,1,1,1,1 };
bool f[7][7] = { 1,1,1,1,1,1,1,1,1,0,0,0,0,0,1,1,0,0,0,0,0,1,1,1,1,1,0,0,1,1,0,0,0,0,0,1,1,0,0,0,0,0,1,1,0,0,0,0,0 };
bool g[7][7] = { 0,1,1,1,1,1,0,1,1,0,0,0,1,1,1,1,0,0,0,0,0,1,1,0,0,0,0,0,1,1,0,0,1,1,1,1,1,0,0,0,1,1,0,1,1,1,1,1,1 };
bool h[7][7] = { 1,1,0,0,0,1,1,1,1,0,0,0,1,1,1,1,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1,0,0,0,1,1,1,1,0,0,0,1,1 };
bool i[7][7] = { 0,0,1,1,1,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,1,1,0,0 };
bool j[7][7] = { 1,1,1,1,1,1,1,0,0,0,0,0,1,1,0,0,0,0,0,1,1,0,0,0,0,0,1,1,0,0,0,0,0,1,1,1,1,0,0,0,1,1,0,1,1,1,1,1,0 };
bool k[7][7] = { 1,1,0,0,0,1,1,1,1,0,0,1,1,0,1,1,0,1,1,0,0,1,1,1,1,1,1,0,1,1,0,0,0,1,1,1,1,0,0,0,1,1,1,1,0,0,0,1,1 };
bool l[7][7] = { 1,1,0,0,0,0,0,1,1,0,0,0,0,0,1,1,0,0,0,0,0,1,1,0,0,0,0,0,1,1,0,0,0,0,0,1,1,0,0,0,0,0,1,1,1,1,1,1,1 };
bool m[7][7] = { 1,1,0,0,0,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,1,1,1,0,0,0,1,1,1,1,0,0,0,1,1,1,1,0,0,0,1,1 };
bool n[7][7] = { 1,1,1,0,0,1,1,1,1,1,1,0,1,1,1,1,0,1,1,1,1,1,1,0,0,1,1,1,1,1,0,0,0,1,1,1,1,0,0,0,1,1,1,1,0,0,0,1,1 };
bool o[7][7] = { 0,1,1,1,1,1,0,1,1,0,0,0,1,1,1,1,0,0,0,1,1,1,1,0,0,0,1,1,1,1,0,0,0,1,1,1,1,0,0,0,1,1,0,1,1,1,1,1,0 };
bool p[7][7] = { 1,1,1,1,1,1,0,1,1,0,0,0,1,1,1,1,0,0,0,1,1,1,1,0,0,0,1,1,1,1,1,1,1,1,0,1,1,0,0,0,0,0,1,1,0,0,0,0,0 };
bool q[7][7] = { 0,1,1,1,1,1,0,1,1,0,0,0,1,1,1,1,0,0,0,1,1,1,1,0,0,0,1,1,1,1,0,1,0,1,1,1,1,0,0,1,1,1,0,1,1,1,1,1,1 };
bool r[7][7] = { 1,1,1,1,1,1,0,1,1,0,0,0,1,1,1,1,0,0,0,1,1,1,1,0,0,0,1,1,1,1,1,1,1,1,0,1,1,0,0,0,1,1,1,1,0,0,0,1,1 };
bool s[7][7] = { 0,1,1,1,1,1,0,1,1,0,0,0,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,0,0,0,1,1,0,1,1,1,1,1,0 };
bool t[7][7] = { 1,1,1,1,1,1,1,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0 };
bool u[7][7] = { 1,1,0,0,0,1,1,1,1,0,0,0,1,1,1,1,0,0,0,1,1,1,1,0,0,0,1,1,1,1,0,0,0,1,1,1,1,0,0,0,1,1,0,1,1,1,1,1,0 };
bool v[7][7] = { 1,1,0,0,0,1,1,1,1,0,0,0,1,1,1,1,0,0,0,1,1,1,1,0,0,0,1,1,1,1,0,0,0,1,1,0,1,1,0,1,1,0,0,0,1,1,1,0,0 };
bool w[7][7] = { 1,1,0,0,0,1,1,1,1,0,0,0,1,1,1,1,0,0,0,1,1,1,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,0,0,0,1,1 };
bool x[7][7] = { 1,1,0,0,0,1,1,1,1,0,0,0,1,1,0,1,1,0,1,1,0,0,0,1,1,1,0,0,0,1,1,0,1,1,0,1,1,0,0,0,1,1,1,1,0,0,0,1,1 };
bool y[7][7] = { 1,1,0,0,0,1,1,1,1,0,0,0,1,1,1,1,0,0,0,1,1,0,1,1,1,1,1,1,0,0,0,0,0,1,1,0,0,0,0,0,1,1,0,1,1,1,1,1,1 };
bool z[7][7] = { 1,1,1,1,1,1,1,0,0,0,0,1,1,0,0,0,0,1,1,0,0,0,0,1,1,0,0,0,0,1,1,0,0,0,0,1,1,0,0,0,0,0,1,1,1,1,1,1,1 };

std::string capitalise(std::string in) 
{
    int length = in.length();
    for (int j2 = 0; j2 < length; j2++)
    {
        switch (in[j2])
        {
        case 'a':
            in[j2] = 'A';
            break;
        case 'b':
            in[j2] = 'B';
            break;
        case 'c':
            in[j2] = 'C';
            break;
        case 'd':
            in[j2] = 'D';
            break;
        case 'e':
            in[j2] = 'E';
            break;
        case 'f':
            in[j2] = 'F';
            break;
        case 'g':
            in[j2] = 'G';
            break;
        case 'h':
            in[j2] = 'H';
            break;
        case 'i':
            in[j2] = 'I';
            break;
        case 'j':
            in[j2] = 'J';
            break;
        case 'k':
            in[j2] = 'K';
            break;
        case 'l':
            in[j2] = 'L';
            break;
        case 'm':
            in[j2] = 'M';
            break;
        case 'n':
            in[j2] = 'N';
            break;
        case 'o':
            in[j2] = 'O';
            break;
        case 'p':
            in[j2] = 'P';
            break;
        case 'q':
            in[j2] = 'Q';
            break;
        case 'r':
            in[j2] = 'R';
            break;
        case 's':
            in[j2] = 'S';
            break;
        case 't':
            in[j2] = 'T';
            break;
        case 'u':
            in[j2] = 'U';
            break;
        case 'v':
            in[j2] = 'V';
            break;
        case 'w':
            in[j2] = 'W';
            break;
        case 'x':
            in[j2] = 'X';
            break;
        case 'y':
            in[j2] = 'Y';
            break;
        case 'z':
            in[j2] = 'Z';
            break;
        }

    }
    return in;
}

void PRINTCHARLN(const std::string phrase, int numLine, int numChar)
{
    switch (phrase[numChar])
    {
        case 'A':
            for (int i1 = 0; i1 < 7; i1++)
            {
                if (a[numLine][i1] == 1)
                {
                    std::cout << "A";
                }
                else
                {
                    std::cout << " ";
                }
            }
            break;
        case 'B':
            for (int i1 = 0; i1 < 7; i1++)
            {
                if (b[numLine][i1] == 1)
                {
                    std::cout << "B";
                }
                else
                {
                    std::cout << " ";
                }
            }
            break;
        case 'C':
            for (int i1 = 0; i1 < 7; i1++)
            {
                if (c[numLine][i1] == 1)
                {
                    std::cout << "C";
                }
                else
                {
                    std::cout << " ";
                }
            }
            break;
        case 'D':
            for (int i1 = 0; i1 < 7; i1++)
            {
                if (d[numLine][i1] == 1)
                {
                    std::cout << "D";
                }
                else
                {
                    std::cout << " ";
                }
            }
            break;
        case 'E':
            for (int i1 = 0; i1 < 7; i1++)
            {
                if (e[numLine][i1] == 1)
                {
                    std::cout << "E";
                }
                else
                {
                    std::cout << " ";
                }
            }
            break;
        case 'F':
            for (int i1 = 0; i1 < 7; i1++)
            {
                if (f[numLine][i1] == 1)
                {
                    std::cout << "F";
                }
                else
                {
                    std::cout << " ";
                }
            }
            break;
        case 'G':
            for (int i1 = 0; i1 < 7; i1++)
            {
                if (g[numLine][i1] == 1)
                {
                    std::cout << "G";
                }
                else
                {
                    std::cout << " ";
                }
            }
            break;
        case 'H':
            for (int i1 = 0; i1 < 7; i1++)
            {
                if (h[numLine][i1] == 1)
                {
                    std::cout << "H";
                }
                else
                {
                    std::cout << " ";
                }
            }
            break;
        case 'I':
            for (int i1 = 0; i1 < 7; i1++)
            {
                if (i[numLine][i1] == 1)
                {
                    std::cout << "I";
                }
                else
                {
                    std::cout << " ";
                }
            }
            break;
        case 'J':
            for (int i1 = 0; i1 < 7; i1++)
            {
                if (j[numLine][i1] == 1)
                {
                    std::cout << "J";
                }
                else
                {
                    std::cout << " ";
                }
            }
            break;
        case 'K':
            for (int i1 = 0; i1 < 7; i1++)
            {
                if (k[numLine][i1] == 1)
                {
                    std::cout << "K";
                }
                else
                {
                    std::cout << " ";
                }
            }
            break;
        case 'L':
            for (int i1 = 0; i1 < 7; i1++)
            {
                if (l[numLine][i1] == 1)
                {
                    std::cout << "L";
                }
                else
                {
                    std::cout << " ";
                }
            }
            break;
        case 'M':
            for (int i1 = 0; i1 < 7; i1++)
            {
                if (m[numLine][i1] == 1)
                {
                    std::cout << "M";
                }
                else
                {
                    std::cout << " ";
                }
            }
            break;
        case 'N':
            for (int i1 = 0; i1 < 7; i1++)
            {
                if (n[numLine][i1] == 1)
                {
                    std::cout << "N";
                }
                else
                {
                    std::cout << " ";
                }
            }
            break;
        case 'O':
            for (int i1 = 0; i1 < 7; i1++)
            {
                if (o[numLine][i1] == 1)
                {
                    std::cout << "O";
                }
                else
                {
                    std::cout << " ";
                }
            }
            break;
        case 'P':
            for (int i1 = 0; i1 < 7; i1++)
            {
                if (p[numLine][i1] == 1)
                {
                    std::cout << "P";
                }
                else
                {
                    std::cout << " ";
                }
            }
            break;
        case 'Q':
            for (int i1 = 0; i1 < 7; i1++)
            {
                if (q[numLine][i1] == 1)
                {
                    std::cout << "Q";
                }
                else
                {
                    std::cout << " ";
                }
            }
            break;
        case 'R':
            for (int i1 = 0; i1 < 7; i1++)
            {
                if (r[numLine][i1] == 1)
                {
                    std::cout << "R";
                }
                else
                {
                    std::cout << " ";
                }
            }
            break;
        case 'S':
            for (int i1 = 0; i1 < 7; i1++)
            {
                if (s[numLine][i1] == 1)
                {
                    std::cout << "S";
                }
                else
                {
                    std::cout << " ";
                }
            }
            break;
        case 'T':
            for (int i1 = 0; i1 < 7; i1++)
            {
                if (t[numLine][i1] == 1)
                {
                    std::cout << "T";
                }
                else
                {
                    std::cout << " ";
                }
            }
            break;
        case 'U':
            for (int i1 = 0; i1 < 7; i1++)
            {
                if (u[numLine][i1] == 1)
                {
                    std::cout << "U";
                }
                else
                {
                    std::cout << " ";
                }
            }
            break;
        case 'V':
            for (int i1 = 0; i1 < 7; i1++)
            {
                if (v[numLine][i1] == 1)
                {
                    std::cout << "V";
                }
                else
                {
                    std::cout << " ";
                }
            }
            break;
        case 'W':
            for (int i1 = 0; i1 < 7; i1++)
            {
                if (w[numLine][i1] == 1)
                {
                    std::cout << "W";
                }
                else
                {
                    std::cout << " ";
                }
            }
            break;
        case 'X':
            for (int i1 = 0; i1 < 7; i1++)
            {
                if (x[numLine][i1] == 1)
                {
                    std::cout << "X";
                }
                else
                {
                    std::cout << " ";
                }
            }
            break;
        case 'Y':
            for (int i1 = 0; i1 < 7; i1++)
            {
                if (y[numLine][i1] == 1)
                {
                    std::cout << "Y";
                }
                else
                {
                    std::cout << " ";
                }
            }
            break;
        case 'Z':
            for (int i1 = 0; i1 < 7; i1++)
            {
                if (z[numLine][i1] == 1)
                {
                    std::cout << "Z";
                }
                else
                {
                    std::cout << " ";
                }
            }
            break;
        case ' ':
            std::cout << "       ";
    }
}

void PRINT(const std::string yell)
{
    for (int i2 = 0; i2 < 7; i2++)
    {
        int length = yell.length();
        for (int j1 = 0; j1 < length; j1++)
        {
            PRINTCHARLN(yell, i2, j1);
            std::cout << " ";
        }
        
        std::cout << "\n";
    }
}

int main()
{
    input = capitalise(input);
    PRINT(input);   
    return 0;
}
