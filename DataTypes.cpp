
/*


C++ provides a rich set of built-in as well as user defined data types. 
Most of the built-in data types are described as follows:

Int ("%d"): 32 Bit integer
Long ("%ld"): 64 bit integer
Char ("%c"): Character type
Boolean (either true or false)
Float ("%f"): 32 bit real value
Double ("%lf"): 64 bit real value

The different types of variables define their bounds. A char can range only from -128 to 127, 
whereas a long can range from -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807. 
This is because a char is represented using only 8 bits of information whereas long uses 
64 bits of information.

To print float and double up to specific number of decimal places use:

court<<std::fixed << std::setprecision(number of decimal places)

setprecision()  is available in the iomanip library.

User Defined data types are structures (struct) and classes (class). This will be covered later in the course.

Type Modifiers
The above types can be modified using the following type modifiers: signed and unsigned short and long.

Typedefs
Typedefs allow for creating new names (think of them as aliases) for existing types. Following is the simple syntax to define a new type using typedef:

typedef int item
item number = 0 // number is a integer variable
// item is equivalent to int, since we have use typedef and created new name for int as item
Variables
In programming, a variable is a container (storage area) to hold data.

To indicate the storage area, each variable should be given a unique name (identifier). For example,

int val = 10;
// Here, val is a variable of the int data type, and we have assigned an integer value 10 to it.
// Also, we can change the value of the variable
val = 15;
Try the following example in the editorial below.
You have to input 5 space-separated values: int, long, char, float and double respectively.

Print each value on a new line in the same order it is received as input.
Note that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places.

Example Input:

5 1234567891231 z 24.23 1214523.028352 
Example Output:

5
1234567891231
z
24.230
1214523.028352000

Note:You only need to implement the given function. Do not read input, 
instead use the arguments to the function. Do not print the output, 
instead return values as specified. Still have a doubt? Checkout Sample Codes for more details.


*/



#include<iostream>
#include <iomanip>
using namespace std;

int main()  {
int n1;
long n2;
char n3;
float n4; double n5;
cin>>n1>>n2>>n3>>n4>>n5;
cout<<n1<<endl;
cout<<n2<<endl;
cout<<n3<<endl;
cout<<fixed;
cout << setprecision(3)<<n4<<endl;
cout<<fixed;
cout << setprecision(9)<<n5<<endl;
return 0;
}
