#include <iostream>

using std::cout;
using std::endl;

void pattern1(int n) {
  for (int i{1}; i <= n; i++) {
    for (int j{1}; j <= n; j++) {
      cout << j << " ";
    }
    cout << endl;
  }
}

void pattern2(int n) {
  for (int i{1}; i <= n; i++) {
    for (int j{n}; j > 0; j--) {
      cout << j << " ";
    }
    cout << endl;
  }
}

void pattern3(int n) {
  for (int i{1}; i <= n * n; i++) {
    cout << i << " ";
    if (i % n == 0)
      cout << endl;
  }
}

void pattern4(int n) {
  for (int i{}; i < n; i++) {
    for (int j{}; j <= i; j++) {
      cout << " * ";
    }
    cout << endl;
  }
}

void pattern5(int n) {
  for (int i{1}; i <= n; i++) {
    for (int j{1}; j <= i; j++) {
      cout << j;
    }
    cout << endl;
  }
}

void pattern6(int n) {
  int count{1};
  for (int i{1}; i <= n; i++) {
    for (int j{1}; j <= i; j++) {
      cout << " " << count << " ";
      count++;
    }
    cout << endl;
  }
}

void pattern7_1(int n) {
  for (int i{1}; i <= n; i++) {
    for (int j{i}; j < i + i; j++) {
      cout << j;
    }
    cout << endl;
  }
}

void pattern7_2(int n) {
  int i{1};
  while (i <= n) {
    int j{i};
    while (j < i + i) {
      cout << j << " ";
      j++;
    }
    i++;
    cout << endl;
  }
}

void pattern8(int n){
    int i{};
    while(i < n){
        int j{}; 
        while(j < n){
            cout<<char('A' + i);
            j++;
        }
        cout<<endl;
        i++;
    }
}

void pattern9(int n){
    int i{};
    while(i < n){
        int j{};
        while(j < n){
            cout<<char('A' + j);
            j++;
        }
        cout<<endl;
        i++;
    }
}

void pattern10(int n){
    int j{};
    char a = 'A';
    while(j < n * n){
        cout<<char(a + j);
        j++;
        if(j % n == 0)
            cout<<endl;
    }
}

void pattern11(int n){
  int i{};
  while(i < n){
    int j{};
    while(j < n){
      cout<< char('A' + j + i);
      j++;
    }
    cout<<endl;
    i++;
  }
}

void pattern12(int n){
    int i{};
    while(i < n){
        int j{};
        while(j <= i){
            cout<<char('A' + i);
            j++;
        }
        i++;
        cout<<endl;
    }
}

void pattern13(int n){
    int i{};
    char a = 'A';
    while(i < n){
        int j{};
        while(j <= i){
            cout<<char(a);
            a++;
            j++;
        }
        i++;
        cout<<endl;
    }
}

void pattern14(int n){
    int i{}; 
    while(i < n){
        int j{}; 
        while(j <= i){
            cout<< char(n - j + 'A' - 1);
            j++;
        }
        i++;
        cout<<endl;
    }
}

void pattern15(int n){
    int i{};
    while(i < n){
        int j{1};
        while(j <= n){
            if(j < n - i){
                cout<< "   ";
            }else{
                cout<<" * ";
            }
            j++;
        }
        i++;
        cout<<endl;
    }
}

// *********************************************************************************

//     1
//    121
//   12321
//  1234321
// 123454321
void pattern16(int n){
    int i{1}; 
    while(i <= n){
        int j{1};
        while(j <= 2*n - 1){
            if(j <= n - i){
                cout<<" ";
            }else if(j <= n){
                cout<<(j - (n -i));
            }else if(j > n && j < n + i){
                cout<< i - (j - n);
            }
            j++;
        }
        i++;
        cout<<endl;
    }
}



// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
void pattern17(int n){
    int i{}; 
    while(i < n){
        int j{1};
        while(j <= 2*n){
            if(j <= n - i){
                cout<<j;
            }else if(j <= n + i){
                cout<<"*";
            }else{
                cout<< 2*n - j + 1;
            }
            
            j++;
        }
        i++;
        cout<<endl;
    }
}

int main() {
  pattern1(5);
  pattern2(5);
  pattern3(5);
  pattern4(5);
  pattern5(5);
  pattern6(5);
  pattern7_1(5);
  cout << ".........................." << endl;
  pattern7_2(5);
  pattern8(5);
  pattern9(5);
  pattern10(5);
  pattern11(5);
  pattern12(5);
  pattern13(5);
  pattern14(10);
  pattern15(5);
  pattern16(5);
  pattern17(5);
}