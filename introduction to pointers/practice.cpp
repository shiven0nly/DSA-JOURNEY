/*
    Q.1) Output
    int x;
    int *ptr;
    x = 7;
    ptr = &x;
    cout << *ptr <<endl;
    OUTPUT:
    7

*/

/*
    Q.2) What will be the output?
    void mulby2(int &a, int &b, int &c){
        a *= 2;
        b *= 2;
        c *= 2;
    }
    main() {
        int x = 1, y = 2, z = 3;
        mulby2(x, y, z);
        cout<< x << y << z << endl;
        return 0;
    }
    OUTPUT:
    {
    void mulby2 is a pass by reference function, so instead of copy of x, y, z the value itself passed;

    in main function the mul(x, y, z), we are passing the value, same as passing the *ptr1, *ptr2, *ptr3;
    now , as they go in the function and then a = a*2;
    and cout<< but return is not their, if we ignore then normal answer: 2 4 6
    }
    2 4 6
*/

/*
    Q.3) Output
    int a = 32;
    int *ptr = &a;

    char ch = 'A';
    char &cho = ch;

    cho += a;
    *ptr += ch;
    cout << a << ", " << ch << endl;
    OUTPUT:-
    {
    char ch = A 
    int ch = 65
    now , a = 32 
    and &cho = ch;
    means the address of cho we assign as ch; means 65 basically , cho works as ch, 
    assigning &cho = ch; means as alias.
    now cho = cho + a , means the address of cho become 65 + 32 = 97;
    *ptr = *ptr + ch = 97 + 32 = 129;
    value of ch at 97th = a
    cout << a = 129 << ch = a;
    }
    97 , Z
*/