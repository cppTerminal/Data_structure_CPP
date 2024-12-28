Dynamic Array Implementation in C++

This project demonstrates the implementation of a simple dynamic array class in C++. The DynamicArr class provides functionality similar to the std::vector in the Standard Template Library, including dynamic resizing and element access.

Features

    Dynamic Resizing
        The array dynamically resizes itself when more elements are added beyond its capacity.
        The capacity is doubled whenever the size exceeds the current capacity.

    Element Access
        Provides methods to retrieve elements by index with proper bounds checking.

    Memory Management
        Implements a destructor to ensure proper deallocation of dynamically allocated memory.

Basic Methods
    Add elements using push_back.
    Get the current size and capacity of the array.

Code Walkthrough

# Constructor and Destructor

    Constructor: Initializes the dynamic array with a default capacity of 5.
    Destructor: Deallocates the memory allocated for the array to prevent memory leaks.

    Methods

    push_back(int x):
        Adds an element to the array.
        Dynamically resizes the array if the size exceeds the capacity.

    getIndexOfValue(int x):
        Retrieves the value at the specified index.
        Throws an exception if the index is out of bounds.

    getSize():
        Returns the number of elements in the array.

    getCapacity():
        Returns the current capacity of the array.

    Main Function

        Demonstrates the creation of a DynamicArr object.
        Adds elements to the array and checks the size and capacity after each addition.
        Iterates through the array to display its elements.

# Sample Output

'''
Object Created!
0 5
size increased
6 10
10 11 12 13 14 15
Object Deleted!
''' 

Future Improvements
    Extend the functionality of DynamicArr by adding features like:

        Add support for removing elements.
        Implement shrink-to-fit functionality.
        Overload operators for better usability.
        Implement copy and move semantics to follow the Rule of Five.
        Implementing copy/move constructors and assignment operators.

How to Use

    Compile the code using any C++ compiler.
    Run the executable.


