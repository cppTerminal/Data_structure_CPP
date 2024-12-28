#include<iostream>

class DynamicArr{
    int *data;  // Pointer to the dynamically allocated array
    int size;   // Current number of elements in the array
    int capacity; // Maximum capacity of the array

public:
    // Constructor: Initializes the dynamic array with a default capacity of 5
    DynamicArr()
    {
        size = 0;
        capacity = 5;
        data = new int[capacity]; // Allocate memory for the array
        std::cout << "Object Created! \n";
    }

    // Destructor: Frees the dynamically allocated memory
    ~DynamicArr()
    {
        delete[] data; // Deallocate memory
        std::cout << "Object Deleted! \n";
    }

public:
    // Returns the value at a given index, throws exception if out of bounds
    int getIndexOfValue(int x)
    {
        if(x < 0 || x >= size)
        {
            throw std::out_of_range("Index out of range.");
        }
        return data[x];
    }

    // Adds a new element to the array, resizing if necessary
    void push_back(int x)
    {
        if(size < capacity)
        {
            data[size] = x;
            size++;
        }
        else
        {
            this->capacity = capacity * 2; // Double the capacity

            int* newData = new int[capacity]; // Allocate new memory

            // Copy old data to new array
            for(int i = 0; i < size; i++)
            {
                newData[i] = data[i];
            }

            delete[] data; // Free old memory
            data = newData; // Update pointer to new memory
            std::cout << "size increased \n";
        }
    }

    // Returns the current number of elements in the array
    int getSize()
    {
        return size;
    }

    // Returns the current capacity of the array
    int getCapacity()
    {
        return this->capacity;
    }
};

int main (int argc, const char* argv[])
{
    // Create a DynamicArr object
    DynamicArr arr;

    // Display initial size and capacity
    std::cout << arr.getSize() << " " << arr.getCapacity() << "\n";

    // Add elements to the array
    arr.push_back(10);
    arr.push_back(11);
    arr.push_back(12);
    arr.push_back(13);
    arr.push_back(14);

    // Display size and capacity after additions
    std::cout << arr.getSize() << " " << arr.getCapacity() << "\n";

    // Add another element to trigger resizing
    arr.push_back(15);
    std::cout << arr.getSize() << " " << arr.getCapacity() << "\n";

    // Display all elements in the array
    for(int i = 0; i < arr.getSize(); i++)
    {
        std::cout << arr.getIndexOfValue(i) << " ";
    }

    return 0;
}