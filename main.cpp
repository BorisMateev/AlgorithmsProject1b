// Project 1b: Solving graph coloring using exhaustive search
//

#include <iostream>
#include <limits.h>
#include <list>
#include <fstream>
#include <queue>
#include <vector>
#include <time.h>
#include <ctime>
#include <stdlib.h>

#include "headers/d_except.h"
#include "headers/d_matrix.h"
#include "headers/graph.h"
#include "headers/knapsack.h"

void exhaustiveColoring(graph &g, int numColors, int time);

using namespace std;

int main()
{
    char x;
    ifstream fin;
    stack <int> moves;
    string fileName;
    int numColors;
    vector<int> solution;

    // Read the name of the graph from the keyboard or
    // hard code it here for testing.

     fileName = "color/color12-4.input";

//    cout << "Enter filename" << endl;
//    cin >> fileName;

    fin.open(fileName.c_str());
    if (!fin)
    {
        cerr << "Cannot open " << fileName << endl;
        exit(1);
    }

    try
    {
        cout << "Reading number of colors" << endl;
        fin >> numColors;

        cout << "Reading graph" << endl;
        graph g(fin);

        cout << "Num colors: " << numColors << endl;
        cout << g;

        exhaustiveColoring(g, numColors, 60);
        g.printSolution();
    }
    catch (indexRangeError &ex)
    {
        cout << ex.what() << endl; exit(1);
    }
    catch (rangeError &ex)
    {
        cout << ex.what() << endl; exit(1);
    }
}

void exhaustiveColoring(graph &g, int numColors, int time)
// Exhaustive algorithm that finds minimum number of conflicts for a numColors coloring of graph g
// Stops running after time seconds if conflicts still exist
{

    // use weights to represent colors

    // use the same algorithm as the normal approach for knapsack, ie a number of base numColors and increment by one
    // for each possibility

    // after each iteration, check the number of conflicts and save the graph if it is less than the best

    

}
