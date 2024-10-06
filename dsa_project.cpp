// Include standard libraries for input/output and data structures
#include <bits/stdc++.h>

// Use the standard namespace to avoid prefixing with std::
using namespace std;

void don() {
    cout << "void Stack::push(int val)q.push(val)void Stack::pop()q.pop();";
}

int main() {
    int n, m, temp; 
                   // Declare variables: 
                    // n for the number of elements to push to the stack,
                    // m for the number of elements to pop,
                    // temp for reading input values.

    // Step 1: Taking input for the number of elements to push and the number of pops
   
 cout << "Enter number of elements to push and number of pops: ";
    cin >> n >> m; // Read two integers from user input

    // Step 2: Initialize an empty stack of integers
    stack<int> stk; // Create a stack to store integer values
    // Step 3: Input Phase
   
 cout << "Enter " << n << " elements: "; // Prompt user for input
    for (int i = 0; i < n; i++) { // Loop to read 'n' elements
        cin >> temp; // Read an integer value into temp
        stk.push(temp); // Push the read integer onto the stack
    }

    // Step 4: Display the top element before popping any elements

    cout << "Top of element before pops: " << stk.top() << endl; // Print the top of the stack

    // Step 5: Pop Phase
    
for (int i = 0; i < m; i++) { // Loop to pop 'm' elements from the stack
        if (!stk.empty()) { // Check if the stack is not empty
            stk.pop(); // Pop the top element from the stack
        } else {
            cout << "Stack is empty. Cannot pop more elements." << endl; // Notify the user if the stack is empty
            break; // Exit the loop if the stack is empty
        }
    }

    // Step 6: Display the top element after popping
   
 if (!stk.empty()) { // Check if the stack is still not empty
        cout << "Top of element after pops: " << stk.top() << endl; // Print the new top element
    } else {
        cout << "Stack is empty after pops." << endl; // Indicate that the stack is empty
    }
     // End of the program and return 0 indicating successful completion
    return 0; 
}
