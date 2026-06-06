/*
 1. Increment & Decrement Operators
    ptr++ or ptr--
    ++ptr or --ptr
    // it means the ptr address is inc / dec by '4 bytes if int / 8 bytes if double'
    // like ptr = arr[0];
    then ptr++ = arr[3];

    // if ptr is char
    ptr = 'A' = 65
    ptr++ = *ptr+1 = 67
    *ptr = B
    if ptr is int
    ptr = 'A' = 65
    ptr++ = *ptr+4 = 65 + 4 = 69
    *ptr = D



2. Addition & Subtraction of Constants
    ptr + 3 = *ptr + 3*4 (for int)
    ptr - 3 = *ptr - 3*8 (for double)
    // we can also visualize it by usint unity method
    as ++ptr = 1 + *ptr = 4 + *ptr
    then 2 + ptr = 4*2 + *ptr

3. Addition & Subtraction of Pointers
    ptr1 + ptr2 // InValid Operation
    ptr1 - ptr2 // both should be of same type
    ptr1 - ptr2 = no. of elements between ptr1 and ptr2 / pointers ke bich me kitni elements ko store krane ki space hai

4. Comparison operators are valid
    ptr1 > ptr2 , ptr3 >= ptr4, ptr2 == ptr4, 
    ptr2 != ptr3

*/