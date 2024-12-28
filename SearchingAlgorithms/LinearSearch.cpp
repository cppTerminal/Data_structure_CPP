#include <iostream>

int LinearSearch(std::vector<int> &arr, int key)
{
    for(int i = 0; i<arr.size(); i++)
    {
        if(key == arr[i])
        {
            return i;
         }
    }

    return -1;
}

int main()
{
    std::vector<int> arr = {10, 30, 20, 24, 50, 50, 200};
    int key = 70;
    int index  =  LinearSearch(arr, key);
    if (index == -1)
    {
        std::cerr << "Key " << key << " not found!";
    }
    else
    {
        std::cout << "Key " << key << " found at " << index << " : " << arr[index]<< "\n";
    }
    return 0;
}