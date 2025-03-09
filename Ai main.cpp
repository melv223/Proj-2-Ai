#include <iostream>

using namespace std;

struct state {
    int arr[];
};

void print_setup(int arr[]) {
    //this prints out the array so that its easy to see
    int count = 0;
    for(int i = 0; i < 9; i++) {
        if(count < 3) {
            cout << arr[i] << " ";
            count++;
        }
        else {
            cout << endl;
            cout << arr[i] << " ";
            count = 1;
        }
    }
    cout << endl;
}
int calcheruistic_val(int arr[]);

int main()
{
    //the zero represents the space
    int arr[9] = {1,0,2,
                  3,4,8,
                  7,6,5};
    print_setup(arr);
    cout << "Hello world" << endl;

    return 0;
}

int calcheruistic_val(int arr[]) {
    // here we are going to calculate the straight line heruistic

    // maybe we can sort the array
    for(int i = 0; i < 9; i++) {

    }

}




