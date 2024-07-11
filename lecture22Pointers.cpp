#include <iostream>
using namespace std;

int main() {
    // Null pointer
    int* nullPtr = NULL;
    cout << "Null pointer: " << nullPtr << endl;

    // Void pointer
    int var = 10;
    void* voidPtr = &var;
    cout << "Void pointer pointing to an int: " << voidPtr << endl;
    
    cout << "Value pointed to by void pointer: " << *(static_cast<int*>(voidPtr)) << endl;

    // Wild pointer (uninitialized)
    int* wildPtr;
    
    // cout << "Wild pointer value: " << *wildPtr << endl;

    
    int* dangPtr = new int(5);
    cout << "Value of allocated memory: " << *dangPtr << endl;
    delete dangPtr;
    
    // cout << "Value of deallocated memory: " << *dangPtr << endl;

    // Pointer to a constant
    int constVal = 20;
    const int* ptrToConst = &constVal;
    cout << "Pointer to constant: " << *ptrToConst << endl;
    

    // Constant pointer
    int var1 = 30;
    int* const constPtr = &var1;
    cout << "Constant pointer pointing to: " << *constPtr << endl;
    *constPtr = 40;
    cout << "Modified value through constant pointer: " << *constPtr << endl;
    

 

    return 0;
}
