#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int b ;
    double c;
    string g;
    
    // Read and save an integer, double, and String to your variables.
    cin>>b>>c;
    cin.get();
    getline(cin, g);
    
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    cout<<b+i<<endl;
    
    // Print the sum of the double variables on a new line.
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    
    cout<<fixed << setprecision(1) <<c+d<<endl<<s+g<<endl;
    
    return 0;
}
