#include <iostream>

using namespace std;

int main()
{
    // Definition of variables and array
    int A[100],B[100],n,sum=0,i;
    float avg;
    // Declaring of array member
    cout << "enter the number of element : ";
    cin >> n;
    for ( i=0; i<n; i++){
    cout << "enter the element number " << (i+1) << " : ";
    cin >> A[i];
    }
    // printing the array
    cout << "A[" << n-1 << "] : ";
    for (i=0; i<n; i++){
        cout << A[i] << "\t";
    }
    //calculation the sum
    for (i=0; i<n; i++){
        sum += A[i];
    }
    cout << "\nsum of all element is : "<< sum;
    //calculation the average
    avg = (float) sum/n;
    cout << "\navg of all element is : "<< avg ;
    // Definition of max and print it
    int max = A[0];
    for (i=0; i<n; i++){
        if (A[i] > max)
            max = A[i];
    }
    cout << "\nthe max is : " << max;
    // Definition of min and print it
    int min = A[0];
    for (i=0; i<n; i++){
        if (A[i] < min)
            min = A[i];
    }
    cout << "\nthe min is : " << min;
    for (i=0; i<n; i++){
        B[i]= A[n-1-i];
    }
    // print inverse of array A
    cout << "\nB[" << n-1 << "] : ";
    for (i=0; i<n; i++){
        cout << B[i] << "\t";
    }
    // search for an item in array A and print its location in array
    int el;
    cout << "\nenter the value of element : ";
    cin >> el;
    for (i=0; i<n; i++){
        if (A[i] == el)
        break;
    }
    if (i<n)
        cout << "A[" << i << "] = " << el << "\n";
    else
        cout << "\nthe item is't found!";
        //add item to array A
    int m ;
    cout << "\nenter the new element : ";
    cin >> m ;

    n++;
    //select the location of item in array A
    int f;
    cout << "\nenter the position for element : ";
    cin >> f;

   for (i=n; i >= f; i--) {
            A[i] = A[i-1];


    }
    A[f] = m;
    //print array A with new item

        cout << "A[" << n << "] : ";
    for (i=0; i<n; i++){
        cout << A[i] << "\t";
    }

    // remove item from array A
    cout << "\nenter the element to remove : ";
    int x,y;
    cin >> x;
    for (i=0; i<n; i++){
        if (A[i] == x)
            y = i;
    }
    for (i=0; i<(n-1); i++){
        if (i >= y)
           A[i] = A[i+1];
    }
    n--;
    //print array A after the remove
            cout << "A[" << n << "] : ";
    for (i=0; i<n; i++){
        cout << A[i] << "\t";
    }
    // investigate wether the array A is Symmetrical
    int math=0;
    for (i=0; i<n/2; i++){
        if (A[i] == B[i])
            math++;
    }
            if (math == (n/2))
            cout << "\nthe array is Symmetrical ";
            else
                cout << "\nthe array is't Symmetrical ";


    return 0;
}
