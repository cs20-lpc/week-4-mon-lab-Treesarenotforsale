#include "LinkedList.hpp"
#include <iostream>
using namespace std;

int main() {
    LinkedList<string> myList;

    // add elements to the list
    myList.append("you");
    myList.append("like");
    myList.append("veggies");

    // display the state of the list
    cout << myList;

    // get the third element (position 2) from the list
    string word = myList.getElement(2);
    cout << "Element 2: " << word << endl;

    // replace the second element (position 1) in the list
    myList.replace(1, "hate");
    string word2 = myList.getElement(1);
    cout << "Replaced Element 1: " << word2 << endl;
    cout << myList;

    // remove all elements from the list
    myList.clear();

    // display the state of the list
    cout << myList;

    return 0;
}