#include <iostream>
using namespace std;

#ifndef PROGRAM7_EGGENSPERGER_MARIYA_BST_H
#define PROGRAM7_EGGENSPERGER_MARIYA_BST_H

class BST
{
public:
    /***** Function Members *****/
    BST();
    bool empty() const;
    bool search(const int & item) const;
    void insert(const int & item);

private:
    /***** Node class *****/
    class BinNode
    {
    public:
        int data;
        BinNode * left;
        BinNode * right;

        // BinNode constructors
        // Default -- data part is default int value; both links are null.
        BinNode()
                : left(0), right(0)
        {}

        // Explicit Value -- data part contains item; both links are null.
        BinNode(int item)
                : data(item), left(0), right(0)
        {}

    };// end of class BinNode declaration

    /***** Data Members *****/
    BinNode * myRoot;

}; // end of class declaration

#endif //PROGRAM7_EGGENSPERGER_MARIYA_BST_H