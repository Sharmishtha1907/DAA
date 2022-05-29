#include <iostream>

using namespace std;

void sort(char arr[], int n)
{
    int count[26] = {0};
    int max=0,index;

    for (int i = 0; i < n; i++)
    {
        count[arr[i] - 97]++;
    }

    max = 0;

    for (int i = 0; i < n; i++)
    {
        if(count[i]>max)
        {
            max = count[i];
            index = i;
        }
    }
    if(max>1)
    {
        cout<<(char)(index+97)<<"-"+max;
    }
    else 
    cout<<"No Duplicate Elements";
    
    cout<<endl;
}

int main()
{
    int t;
    cout << "Enter the test cases : ";
    cin >> t;

    while (t > 0)
    {
        int n;
        cout << "Enter the number of char : ";
        cin >> n;

        char arr[n];

        cout << "Enter the characters : " << endl;
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr, n);
        t--;
    }
}
