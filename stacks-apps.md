## Reversing a List:
    - Stacks can be utilized to push elements from the list and then pop them back into the list in reverse order.
    - list: [1,2,3,4] when pushed onto a stack would result in 4,3,2,1
    - Which can then be popped off the stack back into a list

## Parentheses Checker:
    - Summary: Checks if expressions have balanced parentheses using a stack to keep track.
    - Implementation: Utilizes a stack to push opening parentheses and pop to match with closing parentheses.

## Infix to Postfix Conversion:
    - Summary: Converts infix expressions to postfix using a stack to manage operators.
    - Implementation: Utilizes a stack to temporarily store operators according to precedence rules.

## Evaluation of Postfix Expression:
    - Summary: Evaluates postfix expressions using a stack to store operands and perform operations.
    - Implementation: Utilizes a stack to push operands and perform operations based on encountered operators.

## Infix to Prefix Conversion:
    - Summary: Converts infix expressions to prefix using a stack.
    - Implementation: Utilizes a stack to reverse the infix expression, convert to postfix, and then reverse again to obtain prefix.

## Evaluation of Prefix Expression:
    - Summary: Evaluates prefix expressions using a stack to store operands and perform operations.
    - Implementation: Utilizes a stack to reverse the prefix expression, convert to postfix, and then evaluate.

## Recursion:
    - Summary: Solves problems by dividing into subproblems and calling itself.
    - Implementation: Uses a call stack for each recursive call and a base case to end recursion.

## Tower of Hanoi:
    - Summary: Moves disks from one peg to another adhering to specific rules.
    - Implementation: Uses recursion and stack frames to move disks efficiently.
    - The toy you often see in videos online.