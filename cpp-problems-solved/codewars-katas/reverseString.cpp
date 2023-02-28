#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string reverse_words(string str)
{

  string new_string = "";
  string current_word = "";
  int size = str.length();

  for (int i = 0; i < size; i++){

    if (str[i] != ' ')
    {
      current_word += str[i];
    }

    else
    {
      reverse(current_word.begin(), current_word.end());
      new_string += current_word;
      new_string += " ";
      current_word = "";
    }

  }
  
  reverse(current_word.begin(), current_word.end());
  new_string += current_word;
  
  return new_string;
}

int main(){
    string str = "Hello World! This is a reversed string :)";
    cout << reverse_words(str) << endl;
}