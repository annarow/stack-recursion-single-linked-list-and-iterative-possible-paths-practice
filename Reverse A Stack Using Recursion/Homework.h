#include "Stack.h"

void insertBottom(Stack<int> &stack, int element);

Stack<int>& reverse_stack_recursively(Stack<int> &stack) {

    if(stack.isEmpty() == true){
        return stack;
    }
    else{
        int element;
        element = stack.peek();
        stack.pop();
        reverse_stack_recursively(stack);
        //stack.push_end(element);
        insertBottom(stack, element);
    }

}

void insertBottom(Stack<int> &stack, int element){
    if(stack.isEmpty() == true){
        stack.push(element);
    }
    else{
        int holder;
        holder = stack.peek();
        stack.pop();
        insertBottom(stack, element);
        stack.push(holder);
    }
}
