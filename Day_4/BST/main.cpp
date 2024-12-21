#include "include/Tree.h"
#include <iostream>

using namespace std;

int main()
{

    Tree myTree;

    // Adding elements to the tree
    myTree.add(50);
    myTree.add(30);
    myTree.add(70);
    myTree.add(20);
    myTree.add(40);
    myTree.add(60);
    myTree.add(80);

    // Displaying the tree
    std::cout << "Tree elements in sorted order: ";
    myTree.displayAll();
    std::cout << std::endl;

    // Finding minimum and maximum elements
    try {
        std::cout << "Minimum element: " << myTree.minelment() << std::endl;
        std::cout << "Maximum element: " << myTree.maxelment() << std::endl;
    } catch (const char* msg) {
        std::cerr << msg << std::endl;
    }

    // Removing nodes
    try {
        std::cout << "Removing element 20 (leaf node): " << std::endl;
        myTree.remove(20);
        myTree.displayAll();
        std::cout << std::endl;

        std::cout << "Removing element 30 (node with one child): " << std::endl;
        myTree.remove(30);
        myTree.displayAll();
        std::cout << std::endl;

        std::cout << "Removing element 50 (node with two children): " << std::endl;
        myTree.remove(50);
        myTree.displayAll();
        std::cout << std::endl;

    } catch (const char* msg) {
        std::cerr << msg << std::endl;
    }

    // Test for removal of non-existing node
    try {
        std::cout << "Removing non-existing element 100: " << std::endl;
        myTree.remove(100);
    } catch (const char* msg) {
        std::cerr << msg << std::endl;
    }



    return 0;
}
