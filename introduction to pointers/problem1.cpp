// What will be the output of the following code:-
/*
    int x = 5, y = 10;
    int *ptr1 = &x, *ptr = &y;
    ptr2 = ptr1;
    // ptr2 = ptr1 means, the address of 
    ptr2 = ptr1 , indirectly saying that
    ptr2 = &x;
    cout<<*ptr1<<ptr2<<endl;
    OUTPUT:
    5, 5
*/