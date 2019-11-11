#include <iostream>

using namespace std;

int main()
{
    int x,y,sum=0,sub=0,sub2=0,mult=1,i;
    float div=0,div2=0;
    std::cout << "enter tow number : ";
    std::cin >> x >> y ;
    sum = x + y;
    sub = x - y;
    sub2 = y - x;
    mult = x * y;


    do {
            std::cout << "chose one : \n" ;
    std::cout << " 1) sum\n" << " 2) sub\n" << " 3) div\n" << " 4) mult\n" << " 5) exit\n";
    std::cin >> i;
    if (i > 5 )
    std::cout << "wrong select !\n";
    else if (i == 1)
        std::cout << "the sum is : "<< sum <<"\n";
    else if (i==2){
        std::cout << "x - y = " << sub << "\n";
    std::cout << "y - x = " << sub2 << "\n";
    }
    else if (i==3 && x!= 0 ){
            div2 = (float) y/x;
        std::cout << "y/x = " << div2 << "\n";
                if (i==3 && y!= 0){
                div =(float) x/y;
                   std::cout << "x/y = " << div << "\n";
        }
    }
           else if (i==3 && y!= 0){
                div =(float) x/y;
                   std::cout << "x/y = " << div << "\n";
        }
        else if (i == 4)
            std::cout << "x * y = " << mult << "\n";
        else if (i == 5)
            std::cout << "........the end.........\n";
        else
        {
            std::cout << "wrong select !\n";
            i = 5;
        }



    }
    while (i != 5);

    return 0;
}
