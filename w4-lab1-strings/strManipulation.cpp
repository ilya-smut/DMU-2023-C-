#include <iostream>
#include <string>

using namespace std;

/*
Write a program which does the following:
• Allows the user to enter a string including spaces.
• Removes all punctuation from the sentence i.e. any of the following characters: , . ; : ! ` “
• Separates hyphenated words and removes the hyphens.
• Breaks up the string into separate words.
• Write the list of words back to the user
*/


/*
1. All lowercase letters: ASCII values for lowercase letters start from 97 for 'a' to 122 for 'z'.
2. All uppercase letters: ASCII values for uppercase letters start from 65 for 'A' to 90 for 'Z'.
3. Hyphen: ASCII value for hyphen is 45.
4. The ASCII value for space is 32.
*/

string getString(){

    string inp;
    cout << "Please, enter a string: ";
    getline(cin, inp);

    return inp;
}

int getLength(string str){
    return str.length();
}

int numOfWords(string str, int length){
    int numwords = 1;
    for (int i = 0; i < length; i++){
        if (str[i] == ' ' || str[i] == '-'){
            numwords++;
        }
    }
    return numwords;
}

string* getList(string str, int length, int numwords){

    // initialising list that will be returned
    string* final_list;
    final_list = new string[numwords];

    // initialising temporary variables that will store current index in the list and current word being processed
    short current_index = 0;
    string current_word = "";

    for (int i = 0; i <= length; i++){
        // if character is not a space, is not a hyphen and index isn't equal to the lengths of the string
        if (str[i] != ' ' && str[i] != '-' && i != length){
            //check whether it is a lowercase letter
            if (str[i] >= 97 && str[i] <=122)
            current_word += str[i];
            //check whether it is an uppercase letter
            else if (str[i] >= 65 && str[i] <=90)
            current_word += str[i];

        }
        // if a character is " " or "-", add the word to the list
        else{
            final_list[current_index] = current_word;
            current_index++;
            current_word = "";
        }
    }
    return final_list;
}

int main(){
    string str = getString();
    int length = getLength(str);
    int size = numOfWords(str, length);
    string *ptr = getList(str, length, size);

    for (int i = 0; i < size; i++){
        cout << ptr[i] << endl;
    }

    delete[] ptr;
    
    return 0;
}