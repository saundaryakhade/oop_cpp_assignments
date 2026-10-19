#include <iostream> using namespace std; 
  
// Function using a pointer 
void addScholarshipUsingPointer(int* balance, int amount) 
{ 
    *balance = *balance + amount; 
} 
  
// Function using a reference 
void addScholarshipUsingReference(int& balance, int amount) 
{     balance = balance + amount; 
} 
  int main() 
{ 
    // Real-life example: Student bank account     int balance = 5000; 
  
    // Pointer stores the address of balance     int* ptr = &balance; 
  
    cout << "=== Student Bank Account ===" << endl;     cout << "Initial balance: Rs. " << balance << endl;     cout << "Address of balance: " << ptr << endl;     cout << "Value using pointer: Rs. " << *ptr << endl; 
  
    // Add scholarship using pointer     addScholarshipUsingPointer(ptr, 1000);     cout << "\nAfter scholarship using pointer: Rs. " 
         << balance << endl; 
  
    // Add another amount using reference     addScholarshipUsingReference(balance, 500);     cout << "After scholarship using reference: Rs. " 
         << balance << endl; 
  
    cout << "\nFinal balance: Rs. " << balance << endl;     return 0; 
} 