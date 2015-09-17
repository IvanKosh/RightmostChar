/* 
 * File:   main.cpp
 * Author: bat
 *
 * Created on 17 Сентябрь 2015 г., 17:46
 */

#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char *argv[]) {
    ifstream stream(argv[1]);
    string line;
    short i, l;
    while (getline(stream, line)) {
        l = line.length()-1;
        for (i = l-1; i--;) {
            if (line[i] == line[l]) {
                break;
            }
        }
        cout << i << endl;
    }
    return 0;
}