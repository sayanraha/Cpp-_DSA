// C++ program to find duplicate parenthesis in a
// balanced expression
#include <bits/stdc++.h>
using namespace std;

// Function to find duplicate parenthesis in a
// balanced expression
bool findDuplicateparenthesis(string str)
{
    // create a stack of characters
    stack<char> Stack;

    // Iterate through the given expression
    for (char ch : str)
    {
        // if current character is close parenthesis ')'
        if (ch == ')')
        {
            // pop character from the stack
            char top = Stack.top();
            Stack.pop();

            // stores the number of characters between a
            // closing and opening parenthesis
            // if this count is less than or equal to 1
            // then the brackets are redundant else not
            int elementsInside = 0;
            while (top != '(')
            {
                elementsInside++;
                top = Stack.top();
                Stack.pop();
            }
            if (elementsInside < 1)
            {
                return true;
            }
        }

        // push open parenthesis '(', operators and
        // operands to stack
        else
            Stack.push(ch);
    }

    // No duplicates found
    return false;
}

// Driver code
int main()
{
    // input balanced expression
    string str = "(((a+(b))+(c+d)))";

    if (findDuplicateparenthesis(str))
        cout << "Duplicate Found ";
    else
        cout << "No Duplicates Found ";

    return 0;
}
/*The idea is to use stack.
 Iterate through the given expression and for each character in the expression,
  if the character is a open parenthesis ‘(‘ or any of the operators or 
  operands, push it to the top of the stack. If the character is close 
  parenthesis ‘)’, then pop characters from the stack till matching open 
  parenthesis ‘(‘ is found and a counter is used, whose value is incremented 
  for every character encountered till the opening parenthesis ‘(‘ is found. 
  If the number of characters encountered between the opening and closing
  parenthesis pair, which is equal to the value of the counter, is less than 1,
   then a pair of duplicate parenthesis is found else there is no occurrence of 
   redundant parenthesis pairs. For example, (((a+b))+c) has duplicate brackets 
   around “a+b”. When the second “)” after a+b is encountered, the stack 
   contains “((“. Since the top of stack is a opening bracket, it can be 
   concluded that there are duplicate brackets.*/