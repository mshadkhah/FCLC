#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;





int main()
{

cout << "############################################# (a) ###############################################\n";
        for (int x=1; x<= 10; x++)
        {
            for (int y=1; y<= 10; y++)
            {
                if (!(x < 5) && !(y >= 7))
                cout << "!(x < 5) && !(y >= 7)  --> x=" << x << "   y=" << y << endl;
                if (!((x < 5) || (y >= 7)))
                cout << "!((x < 5) || (y >= 7)) --> x=" << x << "   y=" << y << endl << endl;
            }
        }

cout << "############################################# (b) ###############################################\n";

        for (int a=1; a<= 10; a++)
        {
            for (int b=1; b<= 10; b++)
            {
                for (int g=1; g<= 10; g++)
                {
                    if (!(a == b) || !(g != 7))
                    cout << "!(a == b) || !(g != 7)   --> a=" << a << "   b=" << b << "   g=" << g << endl;
                    if (!((a == b) && (g != 7)))
                    cout << "!((a == b) && (g != 7))  --> a=" << a << "   b=" << b << "   g=" << g << endl << endl;
                }
            }
        }

cout << "############################################# (c) ###############################################\n";

        for (int x=1; x<= 10; x++)
        {
            for (int y=1; y<= 10; y++)
            {
                if (!((x <= 8) && (y > 4)))
                cout << "!((x <= 8) && (y > 4)) --> x=" << x << "   y=" << y << endl;
                if (!(x <= 8) || !(y > 4))
                cout << "!(x <= 8) || !(y > 4)  --> x=" << x << "   y=" << y << endl << endl;
            }
        }

cout << "############################################# (c) ###############################################\n";

        for (int i=1; i<= 10; i++)
        {
            for (int j=1; j<= 10; j++)
            {
                if (!((i > 4) || (j <= 6)))
                cout << "!((i > 4) || (j <= 6)) --> i=" << i << "   j=" << j << endl;
                if (!(i > 4) && !(j <= 6))
                cout << "(i > 4) && !(j <= 6)   --> i=" << i << "   j=" << j << endl << endl;
            }
        }




}