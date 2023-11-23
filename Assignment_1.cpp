/*
// Task 1
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<< "Enter any number to display its factors: "<<endl;
    cin>>num;
    for (int i = 1; i <= num; i++)
    {
        if (num%i==0)
        {
            cout<<i<<endl;
        }
        
    }
    return 0;

}
*/

/*
//Task 3
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<< "Enter any number " <<endl;
    cin>>num;
    bool cn = true;
    if (num>10 && num<=20)
    {
        cn = true;
    }
    else
    {
        cn = false;
    }
    cout<<cn<<endl;
    return 0;
    
}
*/

/*
//Task 4
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int N;
    cout<< "Enter any number(N) " <<endl;
    cin>>N;
    int num = 1;
    bool prime = true;
    int lp;
    while (num<=N)
    {
        int sqnum=sqrt(num);
        if (num==1)
        {
            prime = false;
        }
        else
        {
            for (int i = 2; i <= sqnum; i++)
            {
                if (num%i==0)
                {
                    prime = false;
                    break;
                }
                else
                {
                    prime = true;
                }
                
            }
            
        }
        if (prime)
        {
            lp=num;
        }
        num++;
        
    } 
    cout<<"Largest prime number less than or equal to N is " <<lp<<endl;    
    return 0; 
}
*/

/*
//Task 5
#include <iostream>
using namespace std;
int main()
{
    int i;
    bool equal = true;
    char str_1 [5];
    cout<<"Enter first 5 letter word: "<<endl;
    for(  i = 0; i <= 4; i++)
    {
        cin>>str_1[i];

    }
    char str_2[5];
    cout<<"Enter second 5 letter word: "<<endl;
    for(  i = 0; i <= 4; i++)
    {
        cin>>str_2[i];

    }
    for ( i = 0; i <= 4; i++)
    {
        if (str_1[i]!=str_2[i])
        {
            equal = false;
            break;
        }
        else
        {
            equal=true;
        }
    }
    if (equal)
    {
        for ( i = 0; i <=4 ; i++)
        {
            str_2[i]=str_1[4-i];
        }
        
    }
    cout<<"First word is: ";
    for (i = 0; i <= 4; i++)
    {
        cout<<str_1[i];
    }
    cout<<endl;
    cout<<"Second word is: ";
    for (i = 0; i <= 4; i++)
    {
        cout<<str_2[i];
    }
    return 0;
}
*/
/*
//Task 6
#include <iostream>
using namespace std;
int main()
{
    int quo=0;
    int dividend;
    int divisor;
    cout<<"Enter Dividend"<<endl;
    cin>>dividend;
    cout<<"Enter Divisor"<<endl;
    cin>>divisor;
    if (dividend<=divisor)
    {
        cout<<"Dividend should be greater than divisor!!"<<endl;
    }
    else
    {
        for (int i = dividend; i > 0; i=i-divisor)
        {
            quo++;
        }
        cout<<dividend<<" / "<<divisor<<" = "<<quo<<endl;
    }
    
}   
*/
/*
//Task 7
#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    char str[5];
    char str_2[5];

    cout << "Enter any 5 letter string of characters" << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> str[i];
    }

    for (int i = 0; i < 5; i++)
    {
        bool duplicate = false;
        for (int j = 0; j < i; j++)
        {
            if (str[i] == str[j])
            {
                duplicate = true;
                break;
            }
        }
        if (!duplicate)
        {
            str_2[n] = str[i];
            n++;
        }
    }

    cout << "String without duplicates: ";
    for (int i = 0; i < n; i++)
    {
        cout << str_2[i];
    }

    return 0;
}
*/
/*
//Task 8
#include <iostream>
using namespace std;
int main()
{
    int arr [5]= {1,2,3,4,5};
    int new_elements;
    cout<<"Enter the number of new elements "<<endl;
    cin>>new_elements;
    int size = 5 + new_elements;
    int new_arr [size];
    for (int i = 0; i < 5; i++)
    {
        new_arr [i] = arr[i];
    }
    cout<<" Enter new elements "<<endl;
    for (int i = 5; i < size; i++)
    {
        cin>>new_arr[i];
    }
    cout<< "Updated array is: ";
    for (int i = 0; i < size; i++)
    {
        cout<<new_arr[i];
    }
    return 0;

}
*/
//Task 9
/*
#include <iostream>
using namespace std;

int main() {
    int X, size, sum = 0;
    bool result = false;

    cout << "Enter any number X to check whether a triplet in the array adds up to that number: " << endl;
    cin >> X;

    cout << "Enter size of array: " << endl;
    cin >> size;

    int arr[size];

    cout << "Enter elements of array" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < size - 2; i++) 
    {
        for (int j = i + 1; j < size - 1; j++) 
        {
            for (int k = j + 1; k < size; k++) 
            {
                sum = arr[i] + arr[j] + arr[k];
                if (sum == X) 
                {
                    result = true;
                    break;
                }
            }
            if (result==true) 
            {
                break;
            }
        }
        if (result==true) 
        {
            break;
        }
    }

    if (result) 
    {
        cout << "Triplet was found that adds up to X" << endl;
    } 
    else
    {
        cout << "No triplet was found that adds up to X" << endl;
    }

    return 0;
}
*/
//Task 10
#include <iostream>
using namespace std;
int main()
{
    int org_arr [6];
    cout<<"Enter any 6 numbers: "<<endl;
    for (int i = 0; i < 6; i++)
    {
        cin>>org_arr [i];
    }
    cout<<"Original array: ";
    for (int i = 0; i < 6; i++)
    {
        cout<<org_arr[i];
    }
    cout<<endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5-i ; j++)
        {
            if (org_arr[j]>org_arr[j+1])
            {
                int c = org_arr[j];
                org_arr [j] = org_arr [j+1];
                org_arr [j+1] = c;
            }
            
        }
        
    }
    cout<<"Sorted Array: ";
    for (int i = 0; i < 6; i++)
    {
        cout<<org_arr[i];
    }
    return 0;
}