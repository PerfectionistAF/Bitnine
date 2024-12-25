#include <iostream>
#include <map>
#include <cstring>
#include <algorithm>

using namespace std;

// Function to count word frequency
void countWordFrequency(const char* text) {
    map<string, int> wordCount; // Map to store word and its frequency

    // Convert the input char array into a mutable char array for tokenization
    char* temp = new char[strlen(text) + 1];
    strcpy(temp, text);

    // Tokenize the text using space as a delimiter
    char* token = strtok(temp, " ");
    while (token != nullptr) {
        string word(token);

        // Remove punctuation
        word.erase(remove_if(word.begin(), word.end(), ::ispunct), word.end());

        // Convert to lowercase for case-insensitivity
        transform(word.begin(), word.end(), word.begin(), ::tolower);

        // Increment the count in the map
        wordCount[word]++;

        // Get the next token
        token = strtok(nullptr, " ");
    }

    // Print the word frequencies
    cout << "Word Frequencies:" << endl;
    for (const auto& pair : wordCount) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Free the allocated memory
    delete[] temp;
}

// Main function
int main() {
    const char text[] = "Apple banana apple orange banana apple pear.";
    countWordFrequency(text);

    return 0;
}
