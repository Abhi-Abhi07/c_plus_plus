#include<iostream>  
#include<string>
using namespace std;  
int main()  
{  
string str1= "javatpoint";  
cout<<str1.substr(4,2)<<endl;
cout<<"String is :"<<str1<<"\nlen " <<str1.length()<<endl;  
cout<<str1[0]<<endl;
str1.resize(6);
// str1.resize(20,'abhi');// its correct
// str1.resize(20,"abhi");// its error
cout<<"After resizing, string is "<<str1<<"\nlen " <<str1.length()<<endl;  
string str2="python";
str1.swap(str2);
cout<<"After swap "<<endl;
cout<<"str1 : "<<str1<<"       str2 : "<<str2<<endl;
str1.replace(3,1,str2,0,4);
cout<<"replace : "<<str1<<endl;
// Str1.append(str2);  
// Str1.append(str2,pos,len);  
// str1.append("Abhisd",n); 
str1.append("axz",3);   
cout<<"append : "<<str1<<endl;
return 0;  
}  


// #include<iostream>
// using namespace std;

// int main(){
//     string s="12345";
//     const char *arr=s.c_str();
//     int arr2[5]={0};
//     arr2[0]=int(arr[0]);
//     arr2[1]=int(arr[1]);
//     arr2[2]=arr[2];
//     int arr3[5]={0};
//     for(int i=0; i<4; i++){
//         arr3[i] = arr3[i] * 10 + (s[i] - 48);
//     }
//     cout<<arr3[1]<<endl;

// return 0;
// }





//  1. Using c_str() with strcpy()
// C++ program to convert string 
// to char array using c_str() 
// #include <cstring> 
// #include <string> 
// #include <iostream> 
// // driver code 
// int main() 
// { 
// 	// assigning value to string s 
// 	std::string s = "geeksforgeeks"; 
// 	const int length = s.length(); 
// 	// declaring character array (+1 for null terminator) 
// 	char* char_array = new char[length + 1]; 
// 	// copying the contents of the 
// 	// string to char array 
// 	strcpy(char_array, s.c_str()); 
// 	for (int i = 0; i < length; i++) 
// 	{ 
// 		std::cout << char_array[i]; 
// 	} 
// 	delete[] char_array; 
// 	return 0; 
// }









//  2.Using c_str() without strcpy()
// C++ program to convert string 
// to char array Using c_str() 
// without strcpy() 
// #include <cstring> 
// #include <string> 
// #include <iostream> 
// // driver code 
// int main() 
// { 
// 	// assigning value to string s 
// 	std::string s = "GeeksForGeeks"; 	
// 	// the c_str() function returns 
// 	// a const pointer to null 
// 	// terminated contents. 
// 	const char* str = s.c_str(); 	
// 	// printing the char array 
// 	std::cout << str; 	
// 	return 0; 
// }
