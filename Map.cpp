// A map stores elements in "key/value" pairs.

// Elements in a map are:
// Accessible by keys (not index), and each key is unique.
// Automatically sorted in ascending order by their keys.

// Create a Map: map<keytype, valuetype> mapName
// Ex:map<string, int> people


// #include <iostream>
// #include <map>
// using namespace std;

// int main() {
//   //Create Map
//   map <string, int> people ={{"John", 32},{"Ahmed", 39},{"Karim", 80},{"Tapos", 70},};

//   // Get the value associated with the key "John"
//     //cout << "John is: " << people["John"] << endl;
   
//    //You can also access elements with the .at() function:
//    //cout << "John is: " << people.at("Karim") << endl;

//    //To add elements to a map, it is ok to use square brackets []:
//     // Add new elements
//   people["Jenny"] = 22;
//   people["Liam"] = 24;
//   people["Kasper"] = 20;
//   people["Anja"] = 30;

//   cout << "Jenny is: " << people.at("Jenny") <<endl;
//   cout << "Liam is: " << people.at("Liam") <<endl;
   
//   return 0;
// }



// Loop Through a Map:
// You can loop through a map with the for-each loop. However, there are a couple of things to be aware of:

// You should use the "auto"  keyword (introduced in C++ version 11) inside the for loop. This allows the compiler to automatically determine the correct data type for each key-value pair.
// Since map elements consist of both keys and values, you have to include ".first" to access the keys, and ".second" to access values in the loop.
// Elements in the map are sorted automatically in ascending order by their keys:

// #include <iostream>
// #include <map>
// using namespace std;

// int main() {
//   map<string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

//   for(auto i: people){
//     cout<<"Key Name is:"<< i.first << "  and Value is:" << i.second <<endl;
//   }

// }


//find() using map:
//The "find()" function in map is used to search for a "key" in the map. It returns an "iterator" to the element if the key is found, 
//otherwise, it returns an iterator to "map.end()".
//Returns:
      //If the key exists, it returns an iterator pointing to the "key-value pair".
      //If the key does not exist, it returns map.end()[a special iterator that represents the "end of the map".]
//What is "Iterator": An iterator is like a pointer that helps you traverse through a container (e.g., std::map, std::vector). 
//For std::map, the iterator points to a key-value pair (also called an element).


// "auto" Keyword: When you use "auto", the compiler automatically deduces the type of the variable based on the value being 
                  //assigned. This means you don't need to explicitly specify the type, and auto will adapt to whatever type is 
                  //appropriate.
                  // example: auto x = 10;        // Compiler deduces x as int
                              // auto y = 3.14;      // Compiler deduces y as double
                              // auto z = "Hello";   // Compiler deduces z as const char*
// Example 1: find():
// #include <iostream>
// #include <map>
// using namespace std;

// int main(){
//      // Create a map
//   map<string,int> people = {
//     {"John", 40},
//     {"Toya", 33},
//     {"Hops", 99},
//     {"Keya", 78}
//   };

//   auto it = people.find("Hops");
//   //Access The Found Element....
//      // Use it->first to access the key.
//      // Use it->second to access the value.

//   cout<< "Found:" << it->first << "& Value is:" <<it->second;

// }

// Example 2: find(), end():
#include <iostream>
#include <map>
using namespace std;

int main() {
    // Create a map
    map<int, string> mp = {
        {1, "John"},
        {2, "Doe"},
        {3, "Smith"}
    };

    // Key to search:
    int key1=3;
    int key2=5;

    if(mp.find(key1)!=mp.end()){
      cout<<"Key:" << key1 << endl;
      cout<<"Value:" << mp[key1];
    }
    else{
      cout<<"Key Not found:";
    }

    //Using Iterator
    auto it= mp.find(key2);
    if(it!=mp.end()){
    cout<< "Key:" << it->first << "Value:" << it->second;
    }
    else{
      cout<< "Key is not found";
    }
}