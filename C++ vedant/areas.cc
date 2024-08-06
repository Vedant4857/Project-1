#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream write;
    write.open("RWT.txt");
    write<<"I have tried to change some things";
    write.close();

    return 0;
}
